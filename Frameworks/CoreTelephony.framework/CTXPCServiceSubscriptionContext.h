
@interface CTXPCServiceSubscriptionContext : NSObject <NSCopying, NSSecureCoding, TPSTelephonySubscription, TUTelephonySubscription> {
    bool  _isSimDataOnly;
    bool  _isSimGood;
    bool  _isSimHidden;
    bool  _isSimPresent;
    NSString * _label;
    NSString * _labelID;
    NSString * _phoneNumber;
    long long  _slotID;
    NSNumber * _userDataPreferred;
    NSNumber * _userDefaultVoice;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isSimDataOnly;
@property (nonatomic) bool isSimGood;
@property (nonatomic) bool isSimHidden;
@property (nonatomic) bool isSimPresent;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, readonly) NSString *labelID;
@property (nonatomic, retain) NSString *labelID;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic, readonly) long long slotID;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *tps_isoCountryCode;
@property (nonatomic, readonly, copy) NSString *tps_localizedLabel;
@property (nonatomic, readonly, copy) NSString *tps_localizedPhoneNumber;
@property (nonatomic, retain) NSNumber *userDataPreferred;
@property (nonatomic, retain) NSNumber *userDefaultVoice;
@property (nonatomic, readonly) NSUUID *uuid;

// Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony

+ (id)contextWithServiceDescriptor:(id)arg1;
+ (id)contextWithSlot:(long long)arg1;
+ (id)contextWithUUID:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)context;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSlot:(long long)arg1;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 andSlot:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isSimDataOnly;
- (bool)isSimGood;
- (bool)isSimHidden;
- (bool)isSimPresent;
- (id)label;
- (id)labelID;
- (id)phoneNumber;
- (id)redactedDescription;
- (void)setIsSimDataOnly:(bool)arg1;
- (void)setIsSimGood:(bool)arg1;
- (void)setIsSimHidden:(bool)arg1;
- (void)setIsSimPresent:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelID:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setUserDataPreferred:(id)arg1;
- (void)setUserDefaultVoice:(id)arg1;
- (long long)slotID;
- (id)userDataPreferred;
- (id)userDefaultVoice;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/TelephonyPreferences.framework/TelephonyPreferences

+ (id)telephonyClient;

- (bool)tps_isEquivalentToSubscriptionContext:(id)arg1;
- (id)tps_isoCountryCode;
- (id)tps_localizedLabel;
- (id)tps_localizedPhoneNumber;

@end
