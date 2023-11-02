
@interface HMAccessoryAccessCodeFetchResponseValue : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    NSArray * _accessoryAccessCodeValues;
    NSUUID * _accessoryUUID;
    NSError * _error;
}

@property (readonly, copy) NSArray *accessoryAccessCodeValues;
@property (readonly, copy) NSUUID *accessoryUUID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessoryAccessCodeValues;
- (id)accessoryUUID;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)initWithAccessoryUUID:(id)arg1 accessoryAccessCodeValues:(id)arg2 error:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)privateDescription;
- (void)setError:(id)arg1;
- (id)shortDescription;

@end
