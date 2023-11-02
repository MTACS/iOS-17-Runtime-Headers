
@interface OCDDelayedNode : NSObject {
    <OCDDelayedNodeContext> * mDelayedContext;
    bool  mLoaded;
}

- (void).cxx_destruct;
- (id)delayedContext;
- (bool)isLoaded;
- (bool)load;
- (void)setDelayedContext:(id)arg1;
- (void)setLoaded:(bool)arg1;

@end
