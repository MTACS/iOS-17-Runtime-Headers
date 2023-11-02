
@interface CKTestRequestProperties : NSObject <NSSecureCoding> {
    long long  _databaseScope;
    NSArray * _deleteMergeableValueIDs;
    NSArray * _deleteRecordIDs;
    NSArray * _deleteRecordZoneIDs;
    CKRoughlyEquivalentProperties * _equivalencyProperties;
    NSArray * _fetchMergeableValueIDs;
    NSArray * _fetchRecordIDs;
    NSArray * _fetchRecordZoneIDs;
    NSArray * _modifyMergeableValueIDs;
    NSArray * _modifyRecordIDs;
    NSArray * _modifyRecordZoneIDs;
    NSArray * _modifySubscriptionRecordZoneIDs;
}

@property (nonatomic, readonly) NSArray *allRecordIDs;
@property (nonatomic, readonly) NSArray *allRecordZoneIDs;
@property long long databaseScope;
@property (copy) NSArray *deleteMergeableValueIDs;
@property (copy) NSArray *deleteRecordIDs;
@property (copy) NSArray *deleteRecordZoneIDs;
@property (nonatomic, readonly) CKRoughlyEquivalentProperties *equivalencyProperties;
@property (copy) NSArray *fetchMergeableValueIDs;
@property (copy) NSArray *fetchRecordIDs;
@property (copy) NSArray *fetchRecordZoneIDs;
@property (copy) NSArray *modifyMergeableValueIDs;
@property (copy) NSArray *modifyRecordIDs;
@property (copy) NSArray *modifyRecordZoneIDs;
@property (copy) NSArray *modifySubscriptionRecordZoneIDs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allRecordIDs;
- (id)allRecordZoneIDs;
- (long long)databaseScope;
- (id)deleteMergeableValueIDs;
- (id)deleteRecordIDs;
- (id)deleteRecordZoneIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalencyProperties;
- (id)fetchMergeableValueIDs;
- (id)fetchRecordIDs;
- (id)fetchRecordZoneIDs;
- (id)initWithCoder:(id)arg1;
- (id)initWithEquivalencyProperties:(id)arg1;
- (id)modifyMergeableValueIDs;
- (id)modifyRecordIDs;
- (id)modifyRecordZoneIDs;
- (id)modifySubscriptionRecordZoneIDs;
- (void)setDatabaseScope:(long long)arg1;
- (void)setDeleteMergeableValueIDs:(id)arg1;
- (void)setDeleteRecordIDs:(id)arg1;
- (void)setDeleteRecordZoneIDs:(id)arg1;
- (void)setFetchMergeableValueIDs:(id)arg1;
- (void)setFetchRecordIDs:(id)arg1;
- (void)setFetchRecordZoneIDs:(id)arg1;
- (void)setModifyMergeableValueIDs:(id)arg1;
- (void)setModifyRecordIDs:(id)arg1;
- (void)setModifyRecordZoneIDs:(id)arg1;
- (void)setModifySubscriptionRecordZoneIDs:(id)arg1;

@end
