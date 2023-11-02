
@interface HMIFaceClassification : HMFObject <NSSecureCoding> {
    double  _confidence;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _faceBoundingBox;
    HMIFaceCrop * _faceCrop;
    HMIFaceprint * _faceprint;
    long long  _familiarity;
    bool  _fromTorsoClassification;
    NSString * _identifier;
    NSString * _name;
    NSUUID * _personUUID;
    NSString * _personsModelIdentifier;
    NSUUID * _sessionEntityUUID;
    NSUUID * _sourceUUID;
}

@property (readonly) NSUUID *UUID;
@property (readonly) double confidence;
@property (readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } faceBoundingBox;
@property (readonly) HMIFaceCrop *faceCrop;
@property (readonly) HMIFaceprint *faceprint;
@property (readonly) long long familiarity;
@property (readonly) bool fromTorsoClassification;
@property (readonly) NSString *identifier;
@property (readonly) NSString *name;
@property (readonly) NSUUID *personUUID;
@property (readonly) NSString *personsModelIdentifier;
@property (readonly) NSUUID *sessionEntityUUID;
@property (readonly) NSUUID *sourceUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)attributeDescriptions;
- (double)confidence;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })faceBoundingBox;
- (id)faceCrop;
- (id)faceprint;
- (long long)familiarity;
- (bool)fromTorsoClassification;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersonUUID:(id)arg1 sourceUUID:(id)arg2 confidence:(double)arg3 fromTorsoClassification:(bool)arg4 familiarity:(long long)arg5;
- (id)initWithPersonUUID:(id)arg1 sourceUUID:(id)arg2 sessionEntityUUID:(id)arg3 confidence:(double)arg4 familiarity:(long long)arg5;
- (id)initWithUUID:(id)arg1 name:(id)arg2 personsModelIdentifier:(id)arg3 faceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)initWithUUID:(id)arg1 sourceUUID:(id)arg2 faceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithUUID:(id)arg1 sourceUUID:(id)arg2 sessionEntityUUID:(id)arg3 faceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 facecrop:(id)arg5 faceprint:(id)arg6 confidence:(double)arg7;
- (id)initWithUUID:(id)arg1 sourceUUID:(id)arg2 sessionEntityUUID:(id)arg3 faceCrop:(id)arg4 faceprint:(id)arg5 confidence:(double)arg6 familiarity:(long long)arg7;
- (id)initWithUUID:(id)arg1 sourceUUID:(id)arg2 sessionEntityUUID:(id)arg3 faceCrop:(id)arg4 faceprint:(id)arg5 confidence:(double)arg6 fromTorsoClassification:(bool)arg7 familiarity:(long long)arg8;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)personUUID;
- (id)personsModelIdentifier;
- (id)sessionEntityUUID;
- (id)sourceUUID;

@end
