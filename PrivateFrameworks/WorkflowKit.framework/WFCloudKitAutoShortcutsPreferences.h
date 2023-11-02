
@interface WFCloudKitAutoShortcutsPreferences : NSObject <WFCloudKitItem> {
    INAppDescriptor * _appDescriptor;
    WFFileRepresentation * _appDescriptorFileRepresentation;
    NSString * _appName;
    NSSet * _disabledAutoShortcuts;
    WFFileRepresentation * _disabledAutoShortcutsFileRepresentation;
    CKRecordID * _identifier;
    bool  _isSiriEnabled;
    bool  _isSpotlightEnabled;
    NSData * _recordSystemFieldsData;
}

@property (nonatomic, retain) INAppDescriptor *appDescriptor;
@property (nonatomic, retain) WFFileRepresentation *appDescriptorFileRepresentation;
@property (nonatomic, retain) NSString *appName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSSet *disabledAutoShortcuts;
@property (nonatomic, retain) WFFileRepresentation *disabledAutoShortcutsFileRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CKRecordID *identifier;
@property (nonatomic) bool isSiriEnabled;
@property (nonatomic) bool isSpotlightEnabled;
@property (nonatomic, copy) NSData *recordSystemFieldsData;
@property (readonly) Class superclass;

+ (id)identifierForRecordID:(id)arg1;
+ (bool)isAutoShortcutsPreferencesRecordID:(id)arg1;
+ (id)properties;
+ (id)recordIDWithZoneID:(id)arg1 identifier:(id)arg2;
+ (id)recordType;

- (void).cxx_destruct;
- (id)appDescriptor;
- (id)appDescriptorFileRepresentation;
- (id)appName;
- (id)dataFromObject:(id)arg1 error:(id*)arg2;
- (id)disabledAutoShortcuts;
- (id)disabledAutoShortcutsFileRepresentation;
- (id)fileRepresentationFromObject:(id)arg1;
- (id)fileRepresentations;
- (id)identifier;
- (id)initWithAutoShortcutsPreferences:(id)arg1 identifier:(id)arg2;
- (bool)isSiriEnabled;
- (bool)isSpotlightEnabled;
- (id)recordSystemFieldsData;
- (void)setAppDescriptor:(id)arg1;
- (void)setAppDescriptorFileRepresentation:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setDisabledAutoShortcuts:(id)arg1;
- (void)setDisabledAutoShortcutsFileRepresentation:(id)arg1;
- (void)setIsSiriEnabled:(bool)arg1;
- (void)setIsSpotlightEnabled:(bool)arg1;
- (void)setRecordSystemFieldsData:(id)arg1;

@end
