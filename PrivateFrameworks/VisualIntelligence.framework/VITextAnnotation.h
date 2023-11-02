
@interface VITextAnnotation : NSObject <NSCopying> {
    float  _confidence;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedBoundingBox;
    NSString * _text;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedBoundingBox;
@property (nonatomic, readonly, copy) NSString *text;

- (void).cxx_destruct;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithText:(id)arg1 normalizedBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3;
- (bool)isEqual:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedBoundingBox;
- (id)text;

@end
