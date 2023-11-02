
@interface SBSADefaultsContext : NSObject <NSCopying, SBSABlockMutating> {
    bool  _alwaysRenderSystemApertureFillOnGPU;
    bool  _alwaysShowSystemApertureInSnapshots;
    bool  _alwaysShowSystemApertureOnClonedDisplays;
    bool  _neverRenderSystemApertureFillOnGPU;
    bool  _suppressDynamicIslandCompletely;
}

@property (setter=_setAlwaysRenderSystemApertureFillOnGPU:, nonatomic) bool alwaysRenderSystemApertureFillOnGPU;
@property (setter=_setAlwaysShowSystemApertureInSnapshots:, nonatomic) bool alwaysShowSystemApertureInSnapshots;
@property (setter=_setAlwaysShowSystemApertureOnClonedDisplays:, nonatomic) bool alwaysShowSystemApertureOnClonedDisplays;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setNeverRenderSystemApertureFillOnGPU:, nonatomic) bool neverRenderSystemApertureFillOnGPU;
@property (readonly) Class superclass;
@property (setter=_setSuppressDynamicIslandCompletely:, nonatomic) bool suppressDynamicIslandCompletely;

+ (id)instanceWithBlock:(id /* block */)arg1;
+ (Class)mutatorClass;

- (void)_setAlwaysRenderSystemApertureFillOnGPU:(bool)arg1;
- (void)_setAlwaysShowSystemApertureInSnapshots:(bool)arg1;
- (void)_setAlwaysShowSystemApertureOnClonedDisplays:(bool)arg1;
- (void)_setNeverRenderSystemApertureFillOnGPU:(bool)arg1;
- (void)_setSuppressDynamicIslandCompletely:(bool)arg1;
- (bool)alwaysRenderSystemApertureFillOnGPU;
- (bool)alwaysShowSystemApertureInSnapshots;
- (bool)alwaysShowSystemApertureOnClonedDisplays;
- (id)copyBySettingAlwaysRenderSystemApertureFillOnGPU:(bool)arg1;
- (id)copyBySettingAlwaysShowSystemApertureInSnapshots:(bool)arg1;
- (id)copyBySettingAlwaysShowSystemApertureOnClonedDisplays:(bool)arg1;
- (id)copyBySettingNeverRenderSystemApertureFillOnGPU:(bool)arg1;
- (id)copyBySettingSuppressDynamicIslandCompletely:(bool)arg1;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithDefaultsContext:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)neverRenderSystemApertureFillOnGPU;
- (bool)suppressDynamicIslandCompletely;

@end
