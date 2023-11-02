
@interface HMRemovedUserInfo : NSObject <HMFObject, NSCopying, NSSecureCoding> {
    NSDate * _dateRemoved;
    NSString * _name;
    NSString * _userID;
    NSUUID * _userUUID;
}

@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSDate *dateRemoved;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *userID;
@property (readonly, copy) NSUUID *userUUID;

+ (id)shortDescription;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateRemoved;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 userUUID:(id)arg2 userID:(id)arg3 dateRemoved:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)privateDescription;
- (id)shortDescription;
- (id)userID;
- (id)userUUID;

@end
