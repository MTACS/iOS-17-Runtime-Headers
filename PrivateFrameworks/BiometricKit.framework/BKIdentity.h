
@interface BKIdentity : NSObject {
    BKAccessory * _accessory;
    BKAccessoryGroup * _accessoryGroup;
    bool  _canAddPeriocularEnrollment;
    NSDate * _creationTime;
    BKDevice * _device;
    bool  _hasPeriocularEnrollment;
    bool  _hasPeriocularEnrollmentWithGlasses;
    NSString * _name;
    long long  _secondaryPeriocularEnrollments;
    long long  _type;
    unsigned int  _userID;
    NSUUID * _uuid;
}

@property (nonatomic, retain) BKAccessory *accessory;
@property (nonatomic, retain) BKAccessoryGroup *accessoryGroup;
@property (nonatomic) bool canAddPeriocularEnrollment;
@property (nonatomic, retain) NSDate *creationTime;
@property (nonatomic, retain) BKDevice *device;
@property (nonatomic) bool hasPeriocularEnrollment;
@property (nonatomic) bool hasPeriocularEnrollmentWithGlasses;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long secondaryPeriocularEnrollments;
@property (nonatomic) long long type;
@property (nonatomic) unsigned int userID;
@property (nonatomic, retain) NSUUID *uuid;

+ (id)identity;

- (void).cxx_destruct;
- (id)accessory;
- (id)accessoryGroup;
- (bool)canAddPeriocularEnrollment;
- (id)creationTime;
- (id)device;
- (bool)hasPeriocularEnrollment;
- (bool)hasPeriocularEnrollmentWithGlasses;
- (unsigned long long)hash;
- (id)initWithServerIdentity:(id)arg1 device:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIdentity:(id)arg1;
- (id)name;
- (long long)secondaryPeriocularEnrollments;
- (id)serverIdentity;
- (void)setAccessory:(id)arg1;
- (void)setAccessoryGroup:(id)arg1;
- (void)setCanAddPeriocularEnrollment:(bool)arg1;
- (void)setCreationTime:(id)arg1;
- (void)setDevice:(id)arg1;
- (void)setHasPeriocularEnrollment:(bool)arg1;
- (void)setHasPeriocularEnrollmentWithGlasses:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSecondaryPeriocularEnrollments:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setUserID:(unsigned int)arg1;
- (void)setUuid:(id)arg1;
- (long long)type;
- (unsigned int)userID;
- (id)uuid;

@end
