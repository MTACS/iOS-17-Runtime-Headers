
@interface SGStorageReminder : SGReminder {
    SGStorageLocation * _dueStorageLocation;
    SGDuplicateKey * _duplicateKey;
    NSString * _sourceKey;
}

@property (nonatomic, readonly) SGStorageLocation *dueStorageLocation;
@property (nonatomic, readonly) SGDuplicateKey *duplicateKey;
@property (nonatomic, readonly) NSString *sourceKey;

+ (id)storageReminderFromDuplicateKey:(id)arg1 store:(id)arg2;
+ (id)storageReminderFromEntity:(id)arg1 origin:(id)arg2;
+ (id)storageReminderFromEntity:(id)arg1 store:(id)arg2;
+ (id)storageReminderFromRecordId:(id)arg1 store:(id)arg2;
+ (id)storageReminderWithPrimaryKey:(long long)arg1 store:(id)arg2;

- (void).cxx_destruct;
- (long long)commitWithStore:(id)arg1;
- (id)description;
- (id)dueStorageLocation;
- (id)duplicateKey;
- (unsigned long long)hash;
- (id)initWithRecordId:(id)arg1 duplicateKey:(id)arg2 sourceKey:(id)arg3 origin:(id)arg4 dueDate:(id)arg5 dueLocationType:(unsigned char)arg6 dueLocation:(id)arg7 dueLocationTrigger:(unsigned char)arg8 title:(id)arg9 reminderStatus:(unsigned char)arg10 contactIdentifier:(id)arg11 creationDate:(id)arg12;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStorageReminder:(id)arg1;
- (id)loggingIdentifier;
- (id)sourceKey;
- (id)toReminder;

@end
