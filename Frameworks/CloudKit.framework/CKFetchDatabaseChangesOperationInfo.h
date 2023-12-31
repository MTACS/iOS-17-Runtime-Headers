
@interface CKFetchDatabaseChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    bool  _fetchAllChanges;
    CKServerChangeToken * _previousServerChangeToken;
    unsigned long long  _resultsLimit;
}

@property (nonatomic) bool fetchAllChanges;
@property (nonatomic, retain) CKServerChangeToken *previousServerChangeToken;
@property (nonatomic) unsigned long long resultsLimit;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)fetchAllChanges;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)previousServerChangeToken;
- (unsigned long long)resultsLimit;
- (void)setFetchAllChanges:(bool)arg1;
- (void)setPreviousServerChangeToken:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;

@end
