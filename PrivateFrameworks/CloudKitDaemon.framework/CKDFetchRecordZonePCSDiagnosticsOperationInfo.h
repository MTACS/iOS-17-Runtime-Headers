
@interface CKDFetchRecordZonePCSDiagnosticsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSArray * _recordZoneIDs;
}

@property (nonatomic, retain) NSArray *recordZoneIDs;

- (void).cxx_destruct;
- (id)recordZoneIDs;
- (void)setRecordZoneIDs:(id)arg1;

@end
