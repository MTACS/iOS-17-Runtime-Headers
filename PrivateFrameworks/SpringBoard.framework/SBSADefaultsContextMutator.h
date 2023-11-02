
@interface SBSADefaultsContextMutator : NSObject {
    SBSADefaultsContext * _mutatable;
}

@property (nonatomic) bool alwaysRenderSystemApertureFillOnGPU;
@property (nonatomic) bool alwaysShowSystemApertureInSnapshots;
@property (nonatomic) bool alwaysShowSystemApertureOnClonedDisplays;
@property (nonatomic, readonly) SBSADefaultsContext *mutatable;
@property (nonatomic) bool neverRenderSystemApertureFillOnGPU;
@property (nonatomic) bool suppressDynamicIslandCompletely;

- (void).cxx_destruct;
- (bool)alwaysRenderSystemApertureFillOnGPU;
- (bool)alwaysShowSystemApertureInSnapshots;
- (bool)alwaysShowSystemApertureOnClonedDisplays;
- (id)description;
- (id)initWithDefaultsContext:(id)arg1;
- (id)mutatable;
- (bool)neverRenderSystemApertureFillOnGPU;
- (void)setAlwaysRenderSystemApertureFillOnGPU:(bool)arg1;
- (void)setAlwaysShowSystemApertureInSnapshots:(bool)arg1;
- (void)setAlwaysShowSystemApertureOnClonedDisplays:(bool)arg1;
- (void)setNeverRenderSystemApertureFillOnGPU:(bool)arg1;
- (void)setSuppressDynamicIslandCompletely:(bool)arg1;
- (bool)suppressDynamicIslandCompletely;

@end
