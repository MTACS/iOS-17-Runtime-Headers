
@interface FxParameterPoint2d : FxPinParameter {
    struct FxParameterPoint2dPriv { bool x1; bool x2; } * _point2dPriv;
}

- (void)dealloc;
- (id)init;
- (bool)isCanvasRelative;
- (bool)isTranslation;
- (void)setIsCanvasRelative:(bool)arg1;
- (void)setIsTranslation:(bool)arg1;

@end
