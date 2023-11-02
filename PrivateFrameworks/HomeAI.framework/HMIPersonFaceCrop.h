
@interface HMIPersonFaceCrop : HMIFaceCrop <NSCopying, NSSecureCoding> {
    NSUUID * _personUUID;
    long long  _source;
}

@property (readonly, copy) NSUUID *personUUID;
@property (readonly) long long source;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 dataRepresentation:(id)arg2 dateCreated:(id)arg3 faceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 personUUID:(id)arg5;
- (id)initWithUUID:(id)arg1 dataRepresentation:(id)arg2 dateCreated:(id)arg3 faceBoundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 personUUID:(id)arg5 source:(long long)arg6;
- (bool)isEqual:(id)arg1;
- (id)personUUID;
- (long long)source;

@end
