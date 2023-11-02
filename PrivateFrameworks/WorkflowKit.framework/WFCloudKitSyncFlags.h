
@interface WFCloudKitSyncFlags : NSObject <WFCloudKitItem> {
    long long  _defaultShortcutsVersion;
    CKRecordID * _identifier;
    bool  _migratedVoiceShortcuts;
    NSData * _recordSystemFieldsData;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long defaultShortcutsVersion;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKRecordID *identifier;
@property (nonatomic) bool migratedVoiceShortcuts;
@property (nonatomic, copy) NSData *recordSystemFieldsData;
@property (readonly) Class superclass;

+ (bool)isCloudKitSyncFlagsRecordID:(id)arg1;
+ (id)properties;
+ (id)recordIDWithZoneID:(id)arg1;
+ (id)recordType;

- (void).cxx_destruct;
- (long long)defaultShortcutsVersion;
- (id)identifier;
- (id)initWithZoneID:(id)arg1;
- (bool)migratedVoiceShortcuts;
- (id)recordSystemFieldsData;
- (void)setDefaultShortcutsVersion:(long long)arg1;
- (void)setMigratedVoiceShortcuts:(bool)arg1;
- (void)setRecordSystemFieldsData:(id)arg1;

@end
