
@interface AMSUIWebDelegateProxy : NSObject {
    id  _delegate;
}

@property (nonatomic) id delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;

@end
