# NOVA OS 🚀

A tiny educational x86 operating-system kernel project.

## What this project does

- Builds a small 32-bit Multiboot kernel.
- Packages it into a bootable ISO using GRUB.
- Uses GitHub Actions to build and run an automated QEMU boot test.
- Uploads `nova-os.iso` as a downloadable GitHub Actions artifact.

This is a very small learning kernel, not a replacement for Windows.

## Use it on GitHub in your browser

1. Create a new GitHub repository named `nova-os`.
2. On the repository page, choose **Add file → Upload files**.
3. Unzip this ZIP on your computer first, then upload the files and folders inside it.
   - If you want to avoid installing software, your browser may be able to open the ZIP and let you upload its contents; otherwise ask a trusted adult for help.
4. Commit the uploaded files to the `main` branch.
5. Open the **Actions** tab and select **Build NOVA OS**.
6. When the workflow succeeds, open that run and download the `nova-os` artifact.

## Safety

Do not install this on your normal computer or overwrite your disk. This project is intended to be tested in an emulator/virtual machine. The GitHub Actions workflow runs its test in a temporary virtual machine on GitHub's runner.
