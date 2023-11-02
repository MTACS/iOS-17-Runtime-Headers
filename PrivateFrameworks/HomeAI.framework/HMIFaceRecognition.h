
@interface HMIFaceRecognition : HMFObject <HMFLogging, NSSecureCoding> {
    NSSet * _classifications;
    HMIFaceCrop * _faceCrop;
    double  _faceQualityScore;
    HMIFaceprint * _faceprint;
    NSSet * _predictedLinkedEntityUUIDs;
    long long  _sessionEntityAssignment;
    NSUUID * _sessionEntityUUID;
}

@property (readonly) NSSet *classifications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMIFaceCrop *faceCrop;
@property (readonly) double faceQualityScore;
@property (readonly) HMIFaceprint *faceprint;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *predictedLinkedEntityUUIDs;
@property (readonly) long long sessionEntityAssignment;
@property (readonly) NSUUID *sessionEntityUUID;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)classifications;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)faceCrop;
- (double)faceQualityScore;
- (id)faceprint;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceCrop:(id)arg1 faceprint:(id)arg2 classifications:(id)arg3;
- (id)initWithFaceCrop:(id)arg1 faceprint:(id)arg2 classifications:(id)arg3 predictedLinkedEntityUUIDs:(id)arg4;
- (id)initWithFaceCrop:(id)arg1 faceprint:(id)arg2 classifications:(id)arg3 predictedLinkedEntityUUIDs:(id)arg4 faceQualityScore:(double)arg5 sessionEntityAssignment:(long long)arg6 sessionEntityUUID:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)predictedLinkedEntityUUIDs;
- (long long)sessionEntityAssignment;
- (id)sessionEntityUUID;

@end
