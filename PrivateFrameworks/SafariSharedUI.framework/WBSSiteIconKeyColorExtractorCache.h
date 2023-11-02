
@interface WBSSiteIconKeyColorExtractorCache : NSObject {
    UIColor * _color;
    double  _confidence;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    double  _nonTransparentConfidence;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) double confidence;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic) double nonTransparentConfidence;

- (void).cxx_destruct;
- (id)color;
- (double)confidence;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (double)nonTransparentConfidence;
- (void)setColor:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setNonTransparentConfidence:(double)arg1;

@end
