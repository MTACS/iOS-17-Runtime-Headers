
@interface CPLScopeStatusCounts : NSObject <NSSecureCoding> {
    unsigned long long  _countOfSharingRecords;
    unsigned long long  _countOfUnsharingRecords;
    NSDictionary * _countPerFlags;
    bool  _hasCachedSummaries;
}

@property (nonatomic, readonly) unsigned long long countOfSharingRecords;
@property (nonatomic, readonly) unsigned long long countOfUnsharingRecords;
@property (nonatomic, readonly) NSDictionary *countPerFlags;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_computeSummariesIfNecessary;
- (unsigned long long)countOfSharingRecords;
- (unsigned long long)countOfUnsharingRecords;
- (id)countPerFlags;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFlagsCounts:(id)arg1;

@end
