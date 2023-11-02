
@interface AIRecognizedText : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _center;
    NSNumber * _numericalValue;
    VNRecognizedText * _recognizedText;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionOfInterest;
    NSString * _string;
    double  _width;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, retain) NSNumber *numericalValue;
@property (nonatomic, retain) VNRecognizedText *recognizedText;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;
@property (nonatomic, retain) NSString *string;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_point:(struct CGPoint { double x1; double x2; })arg1 adjustedByRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 error:(id*)arg2;
- (struct CGPoint { double x1; double x2; })center;
- (id)description;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithString:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 numericalValue:(id)arg3;
- (id)initWithString:(id)arg1 center:(struct CGPoint { double x1; double x2; })arg2 width:(double)arg3 numericalValue:(id)arg4;
- (id)initWithTextObservation:(id)arg1;
- (id)initWithTextObservation:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)numericalValue;
- (id)recognizedText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNumericalValue:(id)arg1;
- (void)setRecognizedText:(id)arg1;
- (void)setRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setString:(id)arg1;
- (void)setWidth:(double)arg1;
- (id)string;
- (double)width;

@end
