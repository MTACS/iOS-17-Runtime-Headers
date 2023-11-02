
@interface AMSMonitoredAccountStoreProxy : NSProxy {
    NSString * _mediaType;
}

@property (nonatomic, copy) NSString *mediaType;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithMediaType:(id)arg1;
- (id)mediaType;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setMediaType:(id)arg1;

@end
