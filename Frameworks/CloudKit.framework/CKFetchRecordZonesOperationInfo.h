
@interface CKFetchRecordZonesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    bool  _ignorePCSFailures;
    bool  _isFetchAllRecordZonesOperation;
    NSArray * _recordZoneIDs;
}

@property (nonatomic) bool ignorePCSFailures;
@property (nonatomic) bool isFetchAllRecordZonesOperation;
@property (nonatomic, retain) NSArray *recordZoneIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)ignorePCSFailures;
- (id)initWithCoder:(id)arg1;
- (bool)isFetchAllRecordZonesOperation;
- (id)recordZoneIDs;
- (void)setIgnorePCSFailures:(bool)arg1;
- (void)setIsFetchAllRecordZonesOperation:(bool)arg1;
- (void)setRecordZoneIDs:(id)arg1;

@end
