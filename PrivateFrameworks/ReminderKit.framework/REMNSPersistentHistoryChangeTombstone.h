
@interface REMNSPersistentHistoryChangeTombstone : REMChangeTombstone {
    NSDictionary * _persistentHistoryChangeTombstone;
}

@property (retain) NSDictionary *persistentHistoryChangeTombstone;
@property (readonly) NSUUID *uuidForChangeTracking;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assignmentOwningReminderIdentifier;
- (id)daIsEventOnlyContainer;
- (id)dueDateDeltaAlertReminderIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)externalIdentifier;
- (id)hashtagLabelUUIDForChangeTracking;
- (id)hashtagName;
- (id)hashtagReminderIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objectIdentifier;
- (id)persistentHistoryChangeTombstone;
- (id)remObjectIdentifier;
- (void)setPersistentHistoryChangeTombstone:(id)arg1;
- (id)shareeAddress;
- (id)shareeDisplayName;
- (id)shareeOwningListIdentifier;
- (id)syncActivityUUIDForChangeTracking;
- (id)uuidForChangeTracking;

@end
