
@protocol FBSDisplayLayoutPublishing <NSObject>

@required

- (<BSInvalidatable> *)addElement:(FBSDisplayLayoutElement *)arg1;
- (void)addObserver:(id <FBSDisplayLayoutPublisherObserving>)arg1;
- (long long)backlightLevel;
- (FBSDisplayLayout *)currentLayout;
- (void)flush;
- (long long)interfaceOrientation;
- (bool)isTransitioning;
- (void)removeObserver:(id <FBSDisplayLayoutPublisherObserving>)arg1;
- (void)setBacklightLevel:(long long)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (<BSInvalidatable> *)transitionAssertionWithReason:(NSString *)arg1;

@end
