
@interface PBUISimpleReplicaPortalSource : NSObject <PBUIReplicaPortalSource> {
    NSString * _cacheIdentifier;
    bool  _effectsAreBakedIn;
    _UILegibilitySettings * _legibilitySettings;
    UIView * _targetView;
}

@property (nonatomic, copy) NSString *cacheIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool effectsAreBakedIn;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) _UILegibilitySettings *legibilitySettings;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *targetView;

- (void).cxx_destruct;
- (id)cacheIdentifier;
- (bool)effectsAreBakedIn;
- (id)initWithTargetView:(id)arg1 cacheIdentifier:(id)arg2 legibilitySettings:(id)arg3 effectsAreBakedIn:(bool)arg4;
- (id)legibilitySettings;
- (void)setCacheIdentifier:(id)arg1;
- (void)setEffectsAreBakedIn:(bool)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setTargetView:(id)arg1;
- (id)targetView;

@end
