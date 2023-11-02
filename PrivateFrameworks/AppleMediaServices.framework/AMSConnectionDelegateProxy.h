
@interface AMSConnectionDelegateProxy : NSObject {
    id  _delegate;
}

@property (nonatomic) id delegate;

+ (id)proxyWithDelegate:(id)arg1;

- (void).cxx_destruct;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;

@end
