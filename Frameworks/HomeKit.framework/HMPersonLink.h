
@interface HMPersonLink : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    NSUUID * _personManagerUUID;
    NSUUID * _personUUID;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *personManagerUUID;
@property (readonly, copy) NSUUID *personUUID;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersonUUID:(id)arg1 personManagerUUID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)personManagerUUID;
- (id)personUUID;
- (id)privateDescription;
- (id)shortDescription;

@end
