
@interface HMAccessCodeModificationResponseValue : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    HMAccessCodeValue * _accessCodeValue;
    HMAccessoryAccessCodeValue * _accessoryAccessCodeValue;
    NSUUID * _accessoryUUID;
    NSError * _error;
    long long  _operationType;
}

@property (copy) HMAccessCodeValue *accessCodeValue;
@property (copy) HMAccessoryAccessCodeValue *accessoryAccessCodeValue;
@property (readonly, copy) NSUUID *accessoryUUID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) long long operationType;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessCodeValue;
- (id)accessoryAccessCodeValue;
- (id)accessoryUUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)initWithAccessoryUUID:(id)arg1 accessoryAccessCodeValue:(id)arg2 accessCodeValue:(id)arg3 operationType:(long long)arg4 error:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)operationType;
- (id)privateDescription;
- (void)setAccessCodeValue:(id)arg1;
- (void)setAccessoryAccessCodeValue:(id)arg1;
- (void)setError:(id)arg1;
- (id)shortDescription;

@end
