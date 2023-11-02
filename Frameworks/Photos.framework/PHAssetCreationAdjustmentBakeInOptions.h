
@interface PHAssetCreationAdjustmentBakeInOptions : NSObject <NSCopying, NSSecureCoding> {
    bool  _flattenLivePhotoToStillIfNeeded;
    bool  _shouldBakeInIfAdjustedByThirdParty;
    bool  _shouldBakeInIfContainsPenultimateResources;
    bool  _shouldBakeInIfCropped;
    bool  _shouldBakeInIfLivePhotoMuted;
    bool  _shouldBakeInIfLivePhotoPlaybackDisabled;
    bool  _shouldBakeInIfPortraitDepthEffectEnabled;
    bool  _shouldBakeInIfTimelineTrimmed;
}

@property (nonatomic) bool flattenLivePhotoToStillIfNeeded;
@property (nonatomic) bool shouldBakeInIfAdjustedByThirdParty;
@property (nonatomic) bool shouldBakeInIfContainsPenultimateResources;
@property (nonatomic) bool shouldBakeInIfCropped;
@property (nonatomic) bool shouldBakeInIfLivePhotoMuted;
@property (nonatomic) bool shouldBakeInIfLivePhotoPlaybackDisabled;
@property (nonatomic) bool shouldBakeInIfPortraitDepthEffectEnabled;
@property (nonatomic) bool shouldBakeInIfTimelineTrimmed;

+ (id)adjustmentBakeInOptionsForPublishingOriginals;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeToXPCDict:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)flattenLivePhotoToStillIfNeeded;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDict:(id)arg1;
- (id)plRepresentation;
- (void)setFlattenLivePhotoToStillIfNeeded:(bool)arg1;
- (void)setShouldBakeInIfAdjustedByThirdParty:(bool)arg1;
- (void)setShouldBakeInIfContainsPenultimateResources:(bool)arg1;
- (void)setShouldBakeInIfCropped:(bool)arg1;
- (void)setShouldBakeInIfLivePhotoMuted:(bool)arg1;
- (void)setShouldBakeInIfLivePhotoPlaybackDisabled:(bool)arg1;
- (void)setShouldBakeInIfPortraitDepthEffectEnabled:(bool)arg1;
- (void)setShouldBakeInIfTimelineTrimmed:(bool)arg1;
- (bool)shouldBakeInIfAdjustedByThirdParty;
- (bool)shouldBakeInIfContainsPenultimateResources;
- (bool)shouldBakeInIfCropped;
- (bool)shouldBakeInIfLivePhotoMuted;
- (bool)shouldBakeInIfLivePhotoPlaybackDisabled;
- (bool)shouldBakeInIfPortraitDepthEffectEnabled;
- (bool)shouldBakeInIfTimelineTrimmed;

@end
