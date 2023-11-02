
@interface CMIStyleEngineConfiguration : NSObject {
    bool  _applyResidualCorrection;
    bool  _inputIsLinear;
    bool  _inputThumbnailIsLinear;
    unsigned long long  _linearSystemOrder;
    NSArray * _linearSystemPriorMatrix;
    unsigned long long  _linearSystemSolver;
    unsigned long long  _linearSystemType;
    bool  _outputShouldBeLinear;
    bool  _targetThumbnailIsLinear;
    struct CGSize { 
        double width; 
        double height; 
    }  _thumbnailSize;
}

@property (nonatomic) bool applyResidualCorrection;
@property (nonatomic) bool inputIsLinear;
@property (nonatomic) bool inputThumbnailIsLinear;
@property (nonatomic) unsigned long long linearSystemOrder;
@property (nonatomic, retain) NSArray *linearSystemPriorMatrix;
@property (nonatomic) unsigned long long linearSystemSolver;
@property (nonatomic) unsigned long long linearSystemType;
@property (nonatomic) bool outputShouldBeLinear;
@property (nonatomic) bool targetThumbnailIsLinear;
@property (nonatomic) struct CGSize { double x1; double x2; } thumbnailSize;

- (void).cxx_destruct;
- (bool)applyResidualCorrection;
- (bool)inputIsLinear;
- (bool)inputThumbnailIsLinear;
- (unsigned long long)linearSystemOrder;
- (id)linearSystemPriorMatrix;
- (unsigned long long)linearSystemSolver;
- (unsigned long long)linearSystemType;
- (bool)outputShouldBeLinear;
- (void)setApplyResidualCorrection:(bool)arg1;
- (void)setInputIsLinear:(bool)arg1;
- (void)setInputThumbnailIsLinear:(bool)arg1;
- (void)setLinearSystemOrder:(unsigned long long)arg1;
- (void)setLinearSystemPriorMatrix:(id)arg1;
- (void)setLinearSystemSolver:(unsigned long long)arg1;
- (void)setLinearSystemType:(unsigned long long)arg1;
- (void)setOutputShouldBeLinear:(bool)arg1;
- (void)setTargetThumbnailIsLinear:(bool)arg1;
- (void)setThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)targetThumbnailIsLinear;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
