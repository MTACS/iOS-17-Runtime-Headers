
@interface PIDebugRect : NSObject {
    CIColor * _color;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _geometry;
    NSString * _label;
}

@property (nonatomic, readonly) CIColor *color;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } geometry;
@property (nonatomic, readonly, copy) NSString *label;

+ (id)datetimeColor;
+ (id)datetimeSubcolor;
+ (id)debugRectWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2 label:(id)arg3;
+ (id)faceColor;
+ (id)faceUnionColor;
+ (id)gazeAreaRectColor;
+ (id)inactiveColor;
+ (id)inflatedFaceColor;
+ (id)labelColor;
+ (id)metadataColor;
+ (id)paddedColor;
+ (id)saliencyAcceptableColor;
+ (id)saliencyPreferredColor;
+ (id)settlingEffectColor;
+ (id)smartCropColor;
+ (id)v2CropColor;
+ (id)visibleColor;

- (void).cxx_destruct;
- (id)color;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })geometry;
- (id)init;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2 label:(id)arg3;
- (id)label;

@end
