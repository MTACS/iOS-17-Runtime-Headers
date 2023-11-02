
@interface MADVIFaceResult : MADResult {
    NSArray * _faceAttributesObservations;
    NSArray * _faceExpressionsObservations;
    NSArray * _faceLandmarksObservations;
    NSArray * _faceRectanglesObservations;
    NSArray * _faceprintObservations;
}

@property (nonatomic, readonly) NSArray *faceAttributesObservations;
@property (nonatomic, readonly) NSArray *faceExpressionsObservations;
@property (nonatomic, readonly) NSArray *faceLandmarksObservations;
@property (nonatomic, readonly) NSArray *faceRectanglesObservations;
@property (nonatomic, readonly) NSArray *faceprintObservations;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)executionNanoseconds;
- (double)executionTimeInterval;
- (id)faceAttributesObservations;
- (id)faceExpressionsObservations;
- (id)faceLandmarksObservations;
- (id)faceRectanglesObservations;
- (id)faceprintObservations;
- (id)initWithCoder:(id)arg1;
- (void)setFaceAttributesObservations:(id)arg1;
- (void)setFaceExpressionsObservations:(id)arg1;
- (void)setFaceLandmarksObservations:(id)arg1;
- (void)setFaceRectanglesObservations:(id)arg1;
- (void)setFaceprintObservations:(id)arg1;

@end
