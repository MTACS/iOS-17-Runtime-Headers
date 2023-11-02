
@interface WBSFileLockPOSIX : NSObject <WBSFileLock> {
    int  _fileDescriptor;
}

- (void)dealloc;
- (id)initWithFileDescriptor:(int)arg1;
- (void)releaseLock;

@end
