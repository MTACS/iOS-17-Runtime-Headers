
@interface HMITorsoAnnotation : HMFObject <NSSecureCoding> {
    HMIFaceRecognition * _faceRecognition;
    NSUUID * _torsoModelVersion;
    NSArray * _torsoprints;
}

@property (readonly) HMIFaceRecognition *faceRecognition;
@property (readonly) NSUUID *torsoModelVersion;
@property (readonly) NSArray *torsoprints;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (id)faceRecognition;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceRecognition:(id)arg1 torsoprints:(id)arg2;
- (id)initWithFaceRecognition:(id)arg1 torsoprints:(id)arg2 torsoModelVersion:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)torsoModelVersion;
- (id)torsoprints;

@end
