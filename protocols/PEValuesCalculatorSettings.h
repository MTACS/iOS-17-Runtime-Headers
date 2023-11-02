
@protocol PEValuesCalculatorSettings <NSObject>

@required

- (bool)autoPerspectiveDisableOnFrontFacingCameraImages;
- (bool)autoPerspectiveDisableOnPanos;
- (double)autoPerspectiveMaxAngle;
- (double)autoPerspectiveMaxFaceSize;
- (double)autoPerspectiveMaxPitch;
- (double)autoPerspectiveMaxYaw;
- (double)autoStraightenMaxAngle;
- (bool)enableEnterEditCropAutoCalc;
- (bool)enableEnterEditDepthEffectAutoCalc;
- (bool)enableEnterEditPerspectiveAutoCalc;
- (bool)enableEnterEditPortraitAutoCalc;
- (bool)enableEnterEditSmartColorAutoCalc;
- (bool)enableEnterEditSmartToneAutoCalc;
- (void)setAutoPerspectiveDisableOnFrontFacingCameraImages:(bool)arg1;
- (void)setAutoPerspectiveDisableOnPanos:(bool)arg1;
- (void)setAutoPerspectiveMaxAngle:(double)arg1;
- (void)setAutoPerspectiveMaxFaceSize:(double)arg1;
- (void)setAutoPerspectiveMaxPitch:(double)arg1;
- (void)setAutoPerspectiveMaxYaw:(double)arg1;
- (void)setAutoStraightenMaxAngle:(double)arg1;
- (void)setEnableEnterEditCropAutoCalc:(bool)arg1;
- (void)setEnableEnterEditDepthEffectAutoCalc:(bool)arg1;
- (void)setEnableEnterEditPerspectiveAutoCalc:(bool)arg1;
- (void)setEnableEnterEditPortraitAutoCalc:(bool)arg1;
- (void)setEnableEnterEditSmartColorAutoCalc:(bool)arg1;
- (void)setEnableEnterEditSmartToneAutoCalc:(bool)arg1;

@end
