
@interface BRCMigrateZonePCSOperation : _BRCOperation <BRCOperationSubclass> {
    NSMutableArray * _interestingZoneIDs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createCloudDocsZone:(id /* block */)arg1;
- (void)_fetchZonesNeedingMigration:(id /* block */)arg1;
- (id)initWithSession:(id)arg1;
- (void)main;
- (bool)shouldRetryForError:(id)arg1;

@end
