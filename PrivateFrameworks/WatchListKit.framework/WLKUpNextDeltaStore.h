
@interface WLKUpNextDeltaStore : NSObject {
    WLKSharedFileStorage * _fileStorage;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)delete:(id /* block */)arg1;
- (id)init;
- (void)merge:(id)arg1 completion:(id /* block */)arg2;
- (void)read:(id /* block */)arg1;
- (void)write:(id)arg1 completion:(id /* block */)arg2;

@end
