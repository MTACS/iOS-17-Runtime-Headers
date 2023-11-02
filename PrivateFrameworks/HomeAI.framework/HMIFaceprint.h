
@interface HMIFaceprint : HMFObject <NSCopying, NSSecureCoding> {
    NSUUID * _UUID;
    NSData * _data;
    NSUUID * _faceCropUUID;
    NSUUID * _modelUUID;
}

@property (readonly, copy) NSUUID *UUID;
@property (readonly, copy) NSData *data;
@property (readonly, copy) NSUUID *faceCropUUID;
@property (readonly, copy) NSUUID *modelUUID;
@property (getter=isSentinelFaceprint, readonly) bool sentinelFaceprint;

+ (id)sentinelFaceprintWithUUID:(id)arg1 modelUUID:(id)arg2 faceCropUUID:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)faceCropUUID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 data:(id)arg2 modelUUID:(id)arg3 faceCropUUID:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isSentinelFaceprint;
- (id)modelUUID;

@end
