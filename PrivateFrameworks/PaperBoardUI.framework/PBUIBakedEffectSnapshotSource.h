
@interface PBUIBakedEffectSnapshotSource : NSObject <BSDescriptionProviding, NSCopying, PBUIReplicaSnapshotSource> {
    NSString * _cacheIdentifier;
    PBUIWallpaperEffectConfiguration * _effectConfiguration;
    _UILegibilitySettings * _legibilitySettings;
    UIImage * _snapshot;
}

@property (nonatomic, copy) NSString *cacheIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PBUIWallpaperEffectConfiguration *effectConfiguration;
@property (nonatomic, readonly) bool effectsAreBakedIn;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, retain) UIImage *snapshot;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cacheIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)effectConfiguration;
- (bool)effectsAreBakedIn;
- (id)initWithSnapshotSource:(id)arg1;
- (id)legibilitySettings;
- (void)setCacheIdentifier:(id)arg1;
- (void)setEffectConfiguration:(id)arg1;
- (void)setLegibilitySettings:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (id)snapshot;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
