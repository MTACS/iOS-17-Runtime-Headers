
@interface REMDAHashtagTombstone : NSObject <REMDAChangedIdentifierResult> {
    NSString * _name;
    NSUUID * _objectIdentifier;
    NSUUID * _reminderIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSUUID *objectIdentifier;
@property (nonatomic, retain) NSUUID *reminderIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)objectIdentifier;
- (id)reminderIdentifier;
- (void)setName:(id)arg1;
- (void)setObjectIdentifier:(id)arg1;
- (void)setReminderIdentifier:(id)arg1;

@end
