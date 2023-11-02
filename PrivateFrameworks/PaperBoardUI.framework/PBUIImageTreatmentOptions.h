
@interface PBUIImageTreatmentOptions : NSObject <NSCopying> {
    double  _originalScale;
    double  _reducedScale;
}

@property (nonatomic, readonly) double originalScale;
@property (nonatomic, readonly) double reducedScale;
@property (nonatomic, readonly) double scaleReductionFactor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)originalScale;
- (double)reducedScale;
- (double)scaleReductionFactor;

@end
