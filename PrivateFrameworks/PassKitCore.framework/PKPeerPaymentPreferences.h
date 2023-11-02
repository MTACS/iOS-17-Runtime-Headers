
@interface PKPeerPaymentPreferences : NSObject <NSCopying, NSSecureCoding> {
    bool  _canReceiveFormalPaymentRequests;
    bool  _dirty;
    NSDate * _lastUpdated;
    NSSet * _notifications;
    bool  _requiresConfirmation;
    NSSet * _restrictions;
}

@property (nonatomic) bool canReceiveFormalPaymentRequests;
@property (getter=isDirty, nonatomic) bool dirty;
@property (nonatomic, retain) NSDate *lastUpdated;
@property (nonatomic, copy) NSSet *notifications;
@property (nonatomic) bool requiresConfirmation;
@property (nonatomic, copy) NSSet *restrictions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addRestrictionType:(unsigned long long)arg1 altDSID:(id)arg2;
- (bool)canReceiveFormalPaymentRequests;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)didUpdateNotification:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1 lastUpdated:(id)arg2;
- (bool)isDirty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPreferences:(id)arg1;
- (bool)isOutOfDate;
- (id)lastUpdated;
- (id)notificationWithType:(unsigned long long)arg1 altDSID:(id)arg2;
- (id)notifications;
- (void)removeRestrictionType:(unsigned long long)arg1 altDSID:(id)arg2;
- (bool)requiresConfirmation;
- (id)restrictionWithType:(unsigned long long)arg1 altDSID:(id)arg2;
- (id)restrictions;
- (void)setCanReceiveFormalPaymentRequests:(bool)arg1;
- (void)setDirty:(bool)arg1;
- (void)setLastUpdated:(id)arg1;
- (void)setNotifications:(id)arg1;
- (void)setRequiresConfirmation:(bool)arg1;
- (void)setRestrictions:(id)arg1;

@end
