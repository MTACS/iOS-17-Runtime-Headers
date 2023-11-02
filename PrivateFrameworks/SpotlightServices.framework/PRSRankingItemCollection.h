
@interface PRSRankingItemCollection : NSObject {
    NSArray * _arrayOfRankingItems;
    NSString * _bundleIdentifier;
    unsigned long long  _countOfVisibleResults;
    NSDictionary * _mapResultIdToProtectionClass;
}

@property (retain) NSArray *arrayOfRankingItems;
@property (retain) NSString *bundleIdentifier;
@property unsigned long long countOfVisibleResults;
@property (retain) NSDictionary *mapResultIdToProtectionClass;

- (void).cxx_destruct;
- (id)arrayOfRankingItems;
- (id)bundleIdentifier;
- (unsigned long long)countOfVisibleResults;
- (id)description;
- (id)mapResultIdToProtectionClass;
- (void)setArrayOfRankingItems:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setCountOfVisibleResults:(unsigned long long)arg1;
- (void)setMapResultIdToProtectionClass:(id)arg1;

@end
