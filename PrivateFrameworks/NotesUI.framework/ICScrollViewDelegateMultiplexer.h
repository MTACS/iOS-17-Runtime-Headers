
@interface ICScrollViewDelegateMultiplexer : NSProxy <UIScrollViewDelegate> {
    NSArray * _wrappedForwardingTargets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *forwardingTargets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *wrappedForwardingTargets;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)forwardingTargets;
- (id)initWithForwardingTargets:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setWrappedForwardingTargets:(id)arg1;
- (id)wrappedForwardingTargets;

@end
