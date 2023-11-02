
@interface OCMapper : NSObject {
    OCCancel * mCancel;
    OITSUTemporaryDirectory * mTemporaryDirectoryObject;
}

+ (id)mapperForCurrentThread;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (bool)isCancelled;
- (void)quit;
- (void)setup;
- (void)teardown;
- (id)temporaryDirectoryPath;

@end
