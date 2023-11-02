
@interface BSMutableSettings : BSSettings <BSMutableSettings>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

- (bool)_isMutable;
- (void)applySettings:(id)arg1;
- (void)removeAllSettings;
- (void)setFlag:(long long)arg1 forSetting:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forSetting:(unsigned long long)arg2;

// Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices

- (void)SBUISA_setBSAction:(id)arg1 forSetting:(unsigned long long)arg2;
- (void)SBUISA_setBackgroundActivityIdentifiers:(id)arg1 forSetting:(unsigned long long)arg2;
- (void)SBUISA_setCGRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forSetting:(unsigned long long)arg2;
- (void)SBUISA_setCGSize:(struct CGSize { double x1; double x2; })arg1 forSetting:(unsigned long long)arg2;
- (void)SBUISA_setContentRole:(long long)arg1 forSetting:(unsigned long long)arg2;
- (void)SBUISA_setContextId:(unsigned int)arg1 forSetting:(unsigned long long)arg2;
- (void)SBUISA_setCustomLayout:(long long)arg1 forSetting:(unsigned long long)arg2;
- (void)SBUISA_setDirectionalEdgeInsets:(struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })arg1 forSetting:(unsigned long long)arg2;
- (void)SBUISA_setLayoutMode:(long long)arg1 forSetting:(unsigned long long)arg2;
- (void)SBUISA_setNullableObject:(id)arg1 forSetting:(unsigned long long)arg2;
- (void)SBUISA_setPresentationBehaviors:(unsigned long long)arg1 forSetting:(unsigned long long)arg2;
- (void)SBUISA_setRenderingid:(unsigned long long)arg1 forSetting:(unsigned long long)arg2;
- (void)SBUISA_setString:(id)arg1 forSetting:(unsigned long long)arg2;
- (void)SBUISA_setUIColor:(id)arg1 forSetting:(unsigned long long)arg2;
- (void)SBUISA_setURL:(id)arg1 forSetting:(unsigned long long)arg2;

@end
