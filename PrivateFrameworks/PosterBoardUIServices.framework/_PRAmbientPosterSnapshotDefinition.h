
@interface _PRAmbientPosterSnapshotDefinition : PRPosterSnapshotDefinition {
    long long  _ambientDisplayStyle;
    bool  _ambientPresented;
}

@property (nonatomic) long long ambientDisplayStyle;
@property (getter=isAmbientPresented, nonatomic) bool ambientPresented;

- (long long)ambientDisplayStyle;
- (void)applySceneSettings:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 ambientPresentationSettings:(id)arg2 renderingContent:(long long)arg3 renderingMode:(long long)arg4 previewContent:(unsigned long long)arg5;
- (id)initWithUniqueIdentifier:(id)arg1 ambientPresented:(bool)arg2 ambientDisplayStyle:(long long)arg3 renderingContent:(long long)arg4 renderingMode:(long long)arg5 previewContent:(unsigned long long)arg6;
- (bool)isAmbientPresented;
- (bool)isEqualToDefinition:(id)arg1;
- (void)setAmbientDisplayStyle:(long long)arg1;
- (void)setAmbientPresented:(bool)arg1;

@end
