
@interface SBPresentContinuousExposeStripEdgeProtectGrabberEventResponse : SBSwitcherModifierEventResponse {
    bool  _initialPresentation;
}

@property (getter=isInitialPresentation, nonatomic) bool initialPresentation;

- (id)initForInitialPresentation:(bool)arg1;
- (bool)isInitialPresentation;
- (void)setInitialPresentation:(bool)arg1;
- (long long)type;

@end
