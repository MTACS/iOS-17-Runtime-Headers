
@interface HMITorsoRecognition : HMFObject <NSSecureCoding> {
    HMITorsoClassification * _classification;
    NSSet * _predictedLinkedEntityUUIDs;
    long long  _sessionEntityAssignment;
    NSUUID * _sessionEntityUUID;
    HMITorsoprint * _torsoprint;
}

@property (readonly) HMITorsoClassification *classification;
@property (readonly) NSSet *predictedLinkedEntityUUIDs;
@property (readonly) long long sessionEntityAssignment;
@property (readonly) NSUUID *sessionEntityUUID;
@property (readonly) HMITorsoprint *torsoprint;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)classification;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTorsoprint:(id)arg1 classification:(id)arg2 predictedLinkedEntityUUIDs:(id)arg3 sessionEntityAssignment:(long long)arg4 sessionEntityUUID:(id)arg5;
- (id)predictedLinkedEntityUUIDs;
- (long long)sessionEntityAssignment;
- (id)sessionEntityUUID;
- (id)torsoprint;

@end
