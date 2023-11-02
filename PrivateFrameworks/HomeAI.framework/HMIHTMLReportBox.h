
@interface HMIHTMLReportBox : HMFObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _boundingBox;
    NSString * _color;
    float  _opacity;
    NSString * _text;
    float  _value;
}

@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (readonly) NSString *color;
@property (readonly) float opacity;
@property (readonly) NSString *text;
@property (readonly) float value;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)color;
- (id)initWithBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 text:(id)arg2 color:(id)arg3 opacity:(float)arg4 value:(float)arg5;
- (float)opacity;
- (id)text;
- (float)value;

@end
