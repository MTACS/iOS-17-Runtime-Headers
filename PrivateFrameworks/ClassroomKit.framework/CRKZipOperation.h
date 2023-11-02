
@interface CRKZipOperation : CATOperation {
    NSURL * _destinationZipFileURL;
    NSURL * _directoryURL;
}

@property (nonatomic, readonly) NSURL *destinationZipFileURL;
@property (nonatomic, readonly) NSURL *directoryURL;

- (void).cxx_destruct;
- (bool)createDestinationDirectoryWithError:(id*)arg1;
- (id)destinationZipFileURL;
- (id)directoryURL;
- (id)errorFromArchive:(struct archive { }*)arg1;
- (void)finalizeArchive:(struct archive { }*)arg1;
- (id)initWithDirectoryURL:(id)arg1;
- (id)initWithDirectoryURL:(id)arg1 destinationZipName:(id)arg2;
- (id)initWithDirectoryURL:(id)arg1 destinationZipURL:(id)arg2;
- (long long)lengthOfBufferForFileDescriptor:(int)arg1 stat:(struct stat { int x1; unsigned short x2; unsigned short x3; unsigned long long x4; unsigned int x5; unsigned int x6; int x7; struct timespec { long long x_8_1_1; long long x_8_1_2; } x8; struct timespec { long long x_9_1_1; long long x_9_1_2; } x9; struct timespec { long long x_10_1_1; long long x_10_1_2; } x10; struct timespec { long long x_11_1_1; long long x_11_1_2; } x11; long long x12; long long x13; int x14; unsigned int x15; unsigned int x16; int x17; long long x18[2]; })arg2;
- (void)main;
- (struct archive { }*)makeArchiveWithError:(id*)arg1;
- (bool)populateArchive:(struct archive { }*)arg1 error:(id*)arg2;
- (bool)populateArchive:(struct archive { }*)arg1 usingDisk:(struct archive { }*)arg2 error:(id*)arg3;
- (const char *)relativePathForPathOnDisk:(id)arg1;
- (bool)validateParametersWithError:(id*)arg1;
- (bool)writeArchiveOfDirectoryAtURL:(id)arg1 toURL:(id)arg2 error:(id*)arg3;
- (bool)writeDataForFTSEntry:(id)arg1 toArchive:(struct archive { }*)arg2 fileDescriptor:(int)arg3 error:(id*)arg4;
- (bool)writeDataFromFileDescriptor:(int)arg1 toArchive:(struct archive { }*)arg2 usingBuffer:(id)arg3 error:(id*)arg4;
- (bool)writeFTSEntry:(id)arg1 toArchive:(struct archive { }*)arg2 usingDisk:(struct archive { }*)arg3 error:(id*)arg4;
- (bool)writeHeaderForFTSEntry:(id)arg1 toArchive:(struct archive { }*)arg2 usingDisk:(struct archive { }*)arg3 fileDescriptor:(int)arg4 error:(id*)arg5;

@end
