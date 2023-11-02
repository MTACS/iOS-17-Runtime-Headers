
@interface Prediction : NSObject {
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
    double  _confidence;
    NSString * _label;
    unsigned long long  _uiClass;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic) double confidence;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) unsigned long long uiClass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (double)confidence;
- (id)debugDescription;
- (id)label;
- (void)setBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConfidence:(double)arg1;
- (void)setLabel:(id)arg1;
- (void)setUiClass:(unsigned long long)arg1;
- (unsigned long long)uiClass;

@end
