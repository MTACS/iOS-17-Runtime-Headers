
@interface AXMVisionFeatureAestheticsResult : NSObject <NSSecureCoding> {
    float  _aestheticScore;
    float  _failureScore;
    float  _noiseScore;
    float  _pleasantCompositionScore;
    float  _wellChosenBackgroundScore;
    float  _wellFramedSubjectScore;
}

@property (nonatomic, readonly) float aestheticScore;
@property (nonatomic, readonly) float failureScore;
@property (nonatomic, readonly) float noiseScore;
@property (nonatomic, readonly) float pleasantCompositionScore;
@property (nonatomic, readonly) float wellChosenBackgroundScore;
@property (nonatomic, readonly) float wellFramedSubjectScore;

+ (bool)supportsSecureCoding;

- (float)aestheticScore;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (float)failureScore;
- (id)initWithCoder:(id)arg1;
- (id)initWithVisionAestheticsObservation:(id)arg1;
- (float)noiseScore;
- (float)pleasantCompositionScore;
- (float)wellChosenBackgroundScore;
- (float)wellFramedSubjectScore;

@end
