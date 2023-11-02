
@interface DACarKeyAdditionalCrossPlatformSharingData : NSObject <NSCopying, NSSecureCoding> {
    NSData * _bindingAttestation;
    NSString * _initiatorIdsPseudonym;
    NSUUID * _sharingSessionUUID;
    long long  _targetDeviceType;
}

@property (nonatomic, retain) NSData *bindingAttestation;
@property (nonatomic, readonly) NSString *initiatorIdsPseudonym;
@property (nonatomic, readonly) NSUUID *sharingSessionUUID;
@property (nonatomic, readonly) long long targetDeviceType;

+ (id)decodeWithData:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asDictionary;
- (id)bindingAttestation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encodeWithError:(id*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithSharingSessionUUID:(id)arg1 bindingAttestation:(id)arg2 targetDeviceType:(long long)arg3 initiatorIdsPseudonym:(id)arg4;
- (id)initiatorIdsPseudonym;
- (void)setBindingAttestation:(id)arg1;
- (id)sharingSessionUUID;
- (long long)targetDeviceType;

@end
