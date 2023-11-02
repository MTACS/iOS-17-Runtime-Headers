
@protocol DNDSIDSSyncEngineSynchronizing <NSObject>

@required

- (void)addRecordIDsToSave:(NSArray *)arg1 recordIDsToDelete:(NSArray *)arg2;
- (void)setDataSource:(id <DNDSIDSSyncEngineDataSource>)arg1 forZone:(NSString *)arg2;
- (void)setPairedDevice:(DNDSPairedDevice *)arg1 syncEnabled:(bool)arg2;
- (void)sync;
- (void)validate;

@end
