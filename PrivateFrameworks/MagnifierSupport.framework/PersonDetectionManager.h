
@interface PersonDetectionManager : NSObject {
    ARCamera * _arCamera;
    struct CGSize { 
        double width; 
        double height; 
    }  _centerDetectionSize;
    float  _closeDetectionFactor;
    NSArray * _detectedPersonArray;
    bool  _isCenterDetectionEnabled;
    struct __CVBuffer { } * _labelBuffer;
    float  _labellingTolerance;
    unsigned short  _maxLabel;
    float  _significantAreaThresholdMM;
}

@property (retain) ARCamera *arCamera;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } centerDetectionSize;
@property (nonatomic, readonly) float closeDetectionFactor;
@property (nonatomic, readonly) NSArray *detectedPersonArray;
@property (nonatomic) bool isCenterDetectionEnabled;
@property (nonatomic, readonly) struct __CVBuffer { }*labelBuffer;
@property (nonatomic, readonly) float labellingTolerance;
@property (nonatomic, readonly) unsigned short maxLabel;
@property (nonatomic, readonly) float significantAreaThresholdMM;

- (void).cxx_destruct;
- (id)arCamera;
- (float)areaFactorForDepth:(float)arg1 camera:(id)arg2 orientation:(long long)arg3;
- (struct CGSize { double x1; double x2; })centerDetectionSize;
- (float)closeDetectionFactor;
- (id)computeLabelIn:(id)arg1 x:(unsigned long long)arg2 y:(unsigned long long)arg3 depth:(float)arg4;
- (void)computePersonDetectionFromFrame:(id)arg1 interfaceOrientation:(long long)arg2;
- (void)dealloc;
- (id)detectedPersonArray;
- (unsigned short)findLabel:(unsigned short)arg1 inLabels:(id)arg2;
- (id)getDetectedPersonsFromBuffer:(struct __CVBuffer { }*)arg1 camera:(id)arg2 interfaceOrientation:(long long)arg3;
- (id)initWithCenterDetectionSize:(struct CGSize { double x1; double x2; })arg1 labellingTolerance:(float)arg2 significantAreaThresholdMM:(float)arg3 closeDetectionFactor:(float)arg4;
- (bool)isCenterDetectionEnabled;
- (bool)isInCenterRectFromRow:(unsigned long long)arg1 column:(unsigned long long)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (bool)isIntersectingWithCenter:(id)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3;
- (struct __CVBuffer { }*)labelBuffer;
- (float)labellingTolerance;
- (unsigned short)maxLabel;
- (struct CGPoint { double x1; double x2; })project3dPoint:(void *)arg1 viewSize:(void *)arg2 interfaceOrientation:(void *)arg3; // needs 3 arg types, found 2: struct CGSize { double x1; double x2; }, long long
- (void)setArCamera:(id)arg1;
- (void)setIsCenterDetectionEnabled:(bool)arg1;
- (float)significantAreaThresholdMM;
- (unsigned short)unionLabel:(unsigned short)arg1 with:(unsigned short)arg2 inLabels:(id)arg3;
- (void)unprojectPoint:(struct CGPoint { double x1; double x2; })arg1 atDepth:(float)arg2 viewSize:(struct CGSize { double x1; double x2; })arg3 interfaceOrientation:(long long)arg4;
- (void)updateLabel:(id)arg1 x:(unsigned long long)arg2 y:(unsigned long long)arg3 depth:(float)arg4;

@end
