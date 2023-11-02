
@interface REMDAAssignmentTombstone : NSObject <REMDAChangedIdentifierResult> {
    NSUUID * _objectIdentifier;
    NSUUID * _owningReminderIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *objectIdentifier;
@property (nonatomic, retain) NSUUID *owningReminderIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)objectIdentifier;
- (id)owningReminderIdentifier;
- (void)setObjectIdentifier:(id)arg1;
- (void)setOwningReminderIdentifier:(id)arg1;

@end
