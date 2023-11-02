
@interface DNDSModeConfigurationsRecordDiff : NSObject {
    NSArray * _modifiedIDs;
    DNDSModeConfigurationsRecord * _original;
    NSArray * _removedIDs;
    DNDSModeConfigurationsRecord * _updated;
    CKRecordZone * _zone;
}

@property (nonatomic, readonly, copy) NSArray *modifiedIDs;
@property (nonatomic, readonly, copy) DNDSModeConfigurationsRecord *original;
@property (nonatomic, readonly, copy) NSArray *removedIDs;
@property (nonatomic, readonly, copy) DNDSModeConfigurationsRecord *updated;
@property (nonatomic, readonly, copy) CKRecordZone *zone;

- (void).cxx_destruct;
- (void)_generateDiff;
- (id)_modifiedConfigurations;
- (id)_recordIDsInModeConfigurations:(id)arg1;
- (id)_removedConfigurations;
- (id)initWithOriginalModeConfigurations:(id)arg1 updatedModeConfigurations:(id)arg2 zone:(id)arg3;
- (id)modifiedIDs;
- (id)original;
- (id)removedIDs;
- (id)updated;
- (id)zone;

@end
