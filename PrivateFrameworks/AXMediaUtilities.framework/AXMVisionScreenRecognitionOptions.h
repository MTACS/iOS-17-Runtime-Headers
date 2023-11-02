
@interface AXMVisionScreenRecognitionOptions : AXMVisionAnalysisOptions {
    bool  _disableCoagulator;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _fullRect;
    bool  _isRTL;
    long long  _orientation;
    CIImage * _testingImage;
}

@property (nonatomic) bool disableCoagulator;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } fullRect;
@property (nonatomic) bool isRTL;
@property (nonatomic) long long orientation;
@property (nonatomic, retain) CIImage *testingImage;

- (void).cxx_destruct;
- (bool)disableCoagulator;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })fullRect;
- (bool)isRTL;
- (long long)orientation;
- (void)setDisableCoagulator:(bool)arg1;
- (void)setFullRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsRTL:(bool)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setTestingImage:(id)arg1;
- (id)testingImage;

@end
