
@interface HMFaceClassification : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    HMFaceCrop * _faceCrop;
    HMPerson * _person;
    NSUUID * _personManagerUUID;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) HMFaceCrop *faceCrop;
@property (readonly) unsigned long long hash;
@property (readonly, copy) HMPerson *person;
@property (readonly, copy) NSUUID *personManagerUUID;
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
- (id)faceCrop;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersonManagerUUID:(id)arg1 person:(id)arg2 faceCrop:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)person;
- (id)personManagerUUID;
- (id)privateDescription;
- (id)shortDescription;

@end
