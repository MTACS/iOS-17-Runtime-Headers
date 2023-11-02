
@interface AXMMLElementGroup : NSObject {
    double  _confidence;
    AXMVisionFeature * _feature;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    bool  _includeChildren;
    NSMutableArray * _subfeatures;
    bool  _topLevel;
}

@property (nonatomic) double confidence;
@property (nonatomic, retain) AXMVisionFeature *feature;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) bool includeChildren;
@property (nonatomic, retain) NSMutableArray *subfeatures;
@property (nonatomic) bool topLevel;

- (void).cxx_destruct;
- (id)childFeatures;
- (double)confidence;
- (id)description;
- (id)feature;
- (id)featureLabel;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (bool)includeChildren;
- (id)init;
- (void)setConfidence:(double)arg1;
- (void)setFeature:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIncludeChildren:(bool)arg1;
- (void)setSubfeatures:(id)arg1;
- (void)setTopLevel:(bool)arg1;
- (id)subfeatures;
- (id)textLabel;
- (bool)topLevel;

@end
