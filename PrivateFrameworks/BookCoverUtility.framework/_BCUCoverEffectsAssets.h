
@interface _BCUCoverEffectsAssets : NSObject {
    struct CGImage { } * _edges;
    struct CGColor { } * _overlayColor;
    struct CGImage { } * _spineLinearBurnBlend;
    struct CGImage { } * _spineNormalBlend;
    struct CGImage { } * _spineSoftLightBlend;
}

@property (nonatomic, readonly) struct CGImage { }*edges;
@property (nonatomic, readonly) struct CGColor { }*overlayColor;
@property (nonatomic, readonly) struct CGImage { }*spineLinearBurnBlend;
@property (nonatomic, readonly) struct CGImage { }*spineNormalBlend;
@property (nonatomic, readonly) struct CGImage { }*spineSoftLightBlend;

- (struct CGImage { }*)edges;
- (id)initWithBundle:(id)arg1 rtl:(bool)arg2 night:(bool)arg3;
- (id)initWithBundle:(id)arg1 rtl:(bool)arg2 night:(bool)arg3 small:(bool)arg4;
- (struct CGColor { }*)overlayColor;
- (struct CGImage { }*)spineLinearBurnBlend;
- (struct CGImage { }*)spineNormalBlend;
- (struct CGImage { }*)spineSoftLightBlend;

@end
