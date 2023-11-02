
@interface SBPrepareForSceneUpdateSwitcherModifierEvent : SBSwitcherModifierEvent {
    NSArray * _liveAppLayouts;
}

@property (nonatomic, readonly) NSArray *liveAppLayouts;

- (void).cxx_destruct;
- (id)initWithLiveAppLayouts:(id)arg1;
- (id)liveAppLayouts;
- (long long)type;

@end
