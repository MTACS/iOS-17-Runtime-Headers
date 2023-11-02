
@interface BiometricKitIdentity : NSObject <NSCopying, NSSecureCoding> {
    BiometricKitAccessory * _accessory;
    int  _attribute;
    NSDate * _creationTime;
    int  _entity;
    unsigned int  _flags;
    long long  _matchCount;
    long long  _matchCountContinuous;
    NSString * _name;
    int  _type;
    long long  _updateCount;
    unsigned int  _userID;
    NSUUID * _uuid;
}

@property (nonatomic, retain) BiometricKitAccessory *accessory;
@property (nonatomic) int attribute;
@property (nonatomic, retain) NSDate *creationTime;
@property (nonatomic) int entity;
@property (nonatomic) unsigned int flags;
@property (nonatomic) long long matchCount;
@property (nonatomic) long long matchCountContinuous;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) int type;
@property (nonatomic) long long updateCount;
@property (nonatomic) unsigned int userID;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)biometricKitIdentity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessory;
- (int)attribute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationTime;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (int)entity;
- (unsigned int)flags;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIdentity:(id)arg1;
- (long long)matchCount;
- (long long)matchCountContinuous;
- (id)name;
- (void)setAccessory:(id)arg1;
- (void)setAttribute:(int)arg1;
- (void)setCreationTime:(id)arg1;
- (void)setEntity:(int)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setMatchCount:(long long)arg1;
- (void)setMatchCountContinuous:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUpdateCount:(long long)arg1;
- (void)setUserID:(unsigned int)arg1;
- (void)setUuid:(id)arg1;
- (int)type;
- (long long)updateCount;
- (unsigned int)userID;
- (id)uuid;

@end
