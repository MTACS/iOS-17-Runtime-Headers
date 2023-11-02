
@interface DTFileTransferRecord : NSObject {
    NSURL * _destinationDirectoryURLToRemoveOnDealloc;
    NSURL * _destinationURL;
    NSFileHandle * _writeHandle;
}

@property (nonatomic, retain) NSURL *destinationDirectoryURLToRemoveOnDealloc;
@property (nonatomic, retain) NSURL *destinationURL;
@property (nonatomic, readonly) bool isTransferOpen;
@property (nonatomic, retain) NSFileHandle *writeHandle;

- (void).cxx_destruct;
- (void)closeFileTransfer;
- (void)dealloc;
- (id)destinationDirectoryURLToRemoveOnDealloc;
- (id)destinationURL;
- (bool)isTransferOpen;
- (void)setDestinationDirectoryURLToRemoveOnDealloc:(id)arg1;
- (void)setDestinationURL:(id)arg1;
- (void)setWriteHandle:(id)arg1;
- (id)writeHandle;

@end
