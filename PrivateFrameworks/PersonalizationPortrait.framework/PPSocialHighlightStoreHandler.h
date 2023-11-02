
@interface PPSocialHighlightStoreHandler : NSObject {
    id /* block */  _block;
    NSError * _error;
    NSObject<OS_dispatch_semaphore> * _sem;
    bool  _successful;
}

- (void).cxx_destruct;

@end
