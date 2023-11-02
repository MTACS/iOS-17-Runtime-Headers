
@interface TXRDeferredImageInfo : NSObject {
    TXRImageInfo * _info;
    NSObject<OS_dispatch_semaphore> * _infoLoaded;
}

@property (nonatomic, retain) TXRImageInfo *info;

- (void).cxx_destruct;
- (id)info;
- (id)init;
- (void)setInfo:(id)arg1;
- (void)signalLoaded;

@end
