
@interface HKSummarySharingEntry : NSObject <NSCopying, NSSecureCoding> {
    NSString * _CNContactIdentifier;
    NSUUID * _UUID;
    NSArray * _allContactIdentifiers;
    NSDate * _dateAccepted;
    NSDate * _dateInvited;
    unsigned long long  _direction;
    NSString * _firstName;
    bool  _isPaused;
    NSString * _lastName;
    NSDate * _modificationDate;
    long long  _notificationStatus;
    NSString * _primaryContactIdentifier;
    HKProfileIdentifier * _profileIdentifier;
    long long  _status;
    long long  _type;
    long long  _userWheelchairMode;
}

@property (nonatomic, readonly, copy) NSString *CNContactIdentifier;
@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) NSArray *allContactIdentifiers;
@property (nonatomic, readonly, copy) NSDate *dateAccepted;
@property (nonatomic, readonly, copy) NSDate *dateInvited;
@property (nonatomic, readonly) unsigned long long direction;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly) bool isPaused;
@property (nonatomic, readonly, copy) NSString *lastName;
@property (nonatomic, readonly, copy) NSDate *modificationDate;
@property (nonatomic, readonly) long long notificationStatus;
@property (nonatomic, readonly, copy) NSString *primaryContactIdentifier;
@property (nonatomic, readonly, copy) HKProfileIdentifier *profileIdentifier;
@property (nonatomic, readonly) long long status;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long userWheelchairMode;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CNContactIdentifier;
- (id)UUID;
- (id)_initWithUUID:(id)arg1 primaryContactIdentifier:(id)arg2 allContactIdentifiers:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 userWheelchairMode:(long long)arg6 type:(long long)arg7 status:(long long)arg8 notificationStatus:(long long)arg9 direction:(unsigned long long)arg10 modificationDate:(id)arg11 dateAccepted:(id)arg12 dateInvited:(id)arg13 profileIdentifier:(id)arg14 CNContactIdentifier:(id)arg15 isPaused:(bool)arg16;
- (void)_setCNContactIdentifier:(id)arg1;
- (void)_setDateAccepted:(id)arg1;
- (void)_setDateInvited:(id)arg1;
- (void)_setIsPaused:(bool)arg1;
- (void)_setProfileIdentifier:(id)arg1;
- (id)allContactIdentifiers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateAccepted;
- (id)dateInvited;
- (id)description;
- (unsigned long long)direction;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1 primaryContactIdentifier:(id)arg2 allContactIdentifiers:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 type:(long long)arg6 status:(long long)arg7 notificationStatus:(long long)arg8 direction:(unsigned long long)arg9 modificationDate:(id)arg10;
- (id)initWithUUID:(id)arg1 primaryContactIdentifier:(id)arg2 allContactIdentifiers:(id)arg3 firstName:(id)arg4 lastName:(id)arg5 userWheelchairMode:(long long)arg6 type:(long long)arg7 status:(long long)arg8 notificationStatus:(long long)arg9 direction:(unsigned long long)arg10 modificationDate:(id)arg11;
- (bool)isEqual:(id)arg1;
- (bool)isPaused;
- (id)lastName;
- (id)modificationDate;
- (long long)notificationStatus;
- (id)primaryContactIdentifier;
- (id)profileIdentifier;
- (long long)status;
- (long long)type;
- (long long)userWheelchairMode;

@end
