
@protocol PBUIImageTreatment <NSObject, NSCopying>

@required

- (bool)commitToRenderingTree:(PBUIImageContainerLayer *)arg1 options:(PBUIImageTreatmentOptions *)arg2 error:(out id*)arg3;

@optional

- (CIImage *)applyToImage:(CIImage *)arg1 options:(PBUIImageTreatmentOptions *)arg2 error:(out id*)arg3;
- (bool)canInterpolateToLowerScales;

@end
