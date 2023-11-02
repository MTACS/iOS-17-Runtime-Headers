
@interface STCommunicationLimits : NSObject <NSCopying> {
    long long  _contactManagementState;
    bool  _contactsEditable;
    long long  _downtimeCommunicationLimit;
    long long  _screenTimeCommunicationLimit;
}

@property long long contactManagementState;
@property bool contactsEditable;
@property long long downtimeCommunicationLimit;
@property long long screenTimeCommunicationLimit;

+ (bool)hasShownCompatibilityAlertForDSID:(id)arg1;
+ (void)setHasShownCompatibilityAlert:(bool)arg1 forDSID:(id)arg2;

- (long long)contactManagementState;
- (bool)contactsEditable;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)downtimeCommunicationLimit;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCommunicationLimits:(id)arg1;
- (long long)screenTimeCommunicationLimit;
- (void)setContactManagementState:(long long)arg1;
- (void)setContactsEditable:(bool)arg1;
- (void)setDowntimeCommunicationLimit:(long long)arg1;
- (void)setScreenTimeCommunicationLimit:(long long)arg1;

@end
