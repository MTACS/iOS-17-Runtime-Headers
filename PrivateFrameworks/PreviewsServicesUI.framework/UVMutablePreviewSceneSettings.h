
@interface UVMutablePreviewSceneSettings : UIMutableApplicationSceneSettings

@property (nonatomic) struct CGSize { double x1; double x2; } previewMaximumSize;
@property (nonatomic) long long previewSceneLayout;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)makeCopy;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })previewMaximumSize;
- (long long)previewSceneLayout;
- (void)setPreviewMaximumSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setPreviewSceneLayout:(long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

@end
