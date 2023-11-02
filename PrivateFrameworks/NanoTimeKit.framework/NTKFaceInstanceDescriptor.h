
@interface NTKFaceInstanceDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSData * _faceJSONRepresentation;
    NSUUID * _nrDeviceUUID;
    NSString * _resourceDirectory;
}

@property (nonatomic, readonly) NSData *faceJSONRepresentation;
@property (nonatomic, readonly) NSUUID *nrDeviceUUID;
@property (nonatomic, readonly) NSString *resourceDirectory;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)faceJSONRepresentation;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithJSONRepresentation:(id)arg1 nrDeviceUUID:(id)arg2 resourceDirectory:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)nrDeviceUUID;
- (id)resourceDirectory;

@end
