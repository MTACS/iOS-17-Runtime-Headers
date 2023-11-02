
@interface VGEarFrameDumpOutput : NSObject <NSSecureCoding> {
    NSArray * _leftEarEnrolledPoses;
    NSDictionary * _leftEarEnrolledYawToBoundingBox;
    NSArray * _rightEarEnrolledPoses;
    NSDictionary * _rightEarEnrolledYawToBoundingBox;
}

@property (nonatomic, retain) NSArray *leftEarEnrolledPoses;
@property (nonatomic, retain) NSDictionary *leftEarEnrolledYawToBoundingBox;
@property (nonatomic, retain) NSArray *rightEarEnrolledPoses;
@property (nonatomic, retain) NSDictionary *rightEarEnrolledYawToBoundingBox;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)leftEarEnrolledPoses;
- (id)leftEarEnrolledYawToBoundingBox;
- (id)rightEarEnrolledPoses;
- (id)rightEarEnrolledYawToBoundingBox;
- (void)setLeftEarEnrolledPoses:(id)arg1;
- (void)setLeftEarEnrolledYawToBoundingBox:(id)arg1;
- (void)setRightEarEnrolledPoses:(id)arg1;
- (void)setRightEarEnrolledYawToBoundingBox:(id)arg1;

@end
