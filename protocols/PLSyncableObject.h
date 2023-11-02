
@protocol PLSyncableObject <NSObject>

@required

- (short)cloudLocalState;
- (CPLRecordChange *)cplFullRecord;
- (id)localID;
- (void)setCloudLocalState:(short)arg1;

@end
