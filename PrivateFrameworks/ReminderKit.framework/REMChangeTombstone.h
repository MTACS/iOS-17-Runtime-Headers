
@interface REMChangeTombstone : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _assignmentOwningReminderIdentifier;
    NSNumber * _daIsEventOnlyContainer;
    NSUUID * _dueDateDeltaAlertReminderIdentifier;
    NSString * _externalIdentifier;
    NSUUID * _hashtagLabelUUIDForChangeTracking;
    NSString * _hashtagName;
    NSUUID * _hashtagReminderIdentifier;
    NSUUID * _remObjectIdentifier;
    NSString * _shareeAddress;
    NSString * _shareeDisplayName;
    NSUUID * _shareeOwningListIdentifier;
    NSUUID * _syncActivityUUIDForChangeTracking;
}

@property (nonatomic, readonly) NSUUID *assignmentOwningReminderIdentifier;
@property (nonatomic, readonly) NSNumber *daIsEventOnlyContainer;
@property (nonatomic, readonly) NSUUID *dueDateDeltaAlertReminderIdentifier;
@property (nonatomic, readonly) NSString *externalIdentifier;
@property (nonatomic, readonly) NSUUID *hashtagLabelUUIDForChangeTracking;
@property (nonatomic, readonly) NSString *hashtagName;
@property (nonatomic, readonly) NSUUID *hashtagReminderIdentifier;
@property (nonatomic, readonly) NSUUID *objectIdentifier;
@property (nonatomic, readonly) NSUUID *remObjectIdentifier;
@property (nonatomic, readonly) NSString *shareeAddress;
@property (nonatomic, readonly) NSString *shareeDisplayName;
@property (nonatomic, readonly) NSUUID *shareeOwningListIdentifier;
@property (nonatomic, readonly) NSUUID *syncActivityUUIDForChangeTracking;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assignmentOwningReminderIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daIsEventOnlyContainer;
- (id)dueDateDeltaAlertReminderIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (id)hashtagLabelUUIDForChangeTracking;
- (id)hashtagName;
- (id)hashtagReminderIdentifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectIdentifier;
- (id)remObjectIdentifier;
- (id)shareeAddress;
- (id)shareeDisplayName;
- (id)shareeOwningListIdentifier;
- (id)syncActivityUUIDForChangeTracking;

@end
