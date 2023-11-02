
@interface PADAlgorithmFACResult : NSObject {
    NSNumber * _assessment;
    NSArray * _faceprints;
    bool  _isHeadMovementDetected;
    NSArray * _referenceFrameIndices;
}

@property (nonatomic, retain) NSNumber *assessment;
@property (nonatomic, retain) NSArray *faceprints;
@property (nonatomic) bool isHeadMovementDetected;
@property (nonatomic, retain) NSArray *referenceFrameIndices;

- (void).cxx_destruct;
- (id)assessment;
- (id)faceprints;
- (bool)isHeadMovementDetected;
- (id)referenceFrameIndices;
- (void)setAssessment:(id)arg1;
- (void)setFaceprints:(id)arg1;
- (void)setIsHeadMovementDetected:(bool)arg1;
- (void)setReferenceFrameIndices:(id)arg1;

@end
