
@interface MADPersonIdentificationRequest : MADRequest {
    bool  _allowOnDemand;
    bool  _allowUnverifiedIdentity;
    unsigned long long  _faceDetectorVisionRevision;
    unsigned long long  _maximumFaceCount;
}

@property (nonatomic) bool allowOnDemand;
@property (nonatomic) bool allowUnverifiedIdentity;
@property (nonatomic) unsigned long long faceDetectorVisionRevision;
@property (nonatomic) unsigned long long maximumFaceCount;

+ (bool)supportsSecureCoding;

- (bool)allowOnDemand;
- (bool)allowUnverifiedIdentity;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)faceDetectorVisionRevision;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)maximumFaceCount;
- (void)setAllowOnDemand:(bool)arg1;
- (void)setAllowUnverifiedIdentity:(bool)arg1;
- (void)setFaceDetectorVisionRevision:(unsigned long long)arg1;
- (void)setMaximumFaceCount:(unsigned long long)arg1;

@end
