
@interface ICNASearchResultExposureItem : NSObject {
    unsigned long long  _nonTopHitResultCount;
    bool  _searchResultWasSelected;
    NSString * _searchString;
    unsigned long long  _topHitResultCount;
}

@property (nonatomic) unsigned long long nonTopHitResultCount;
@property (nonatomic) bool searchResultWasSelected;
@property (nonatomic, readonly) NSString *searchString;
@property (nonatomic) unsigned long long topHitResultCount;

- (void).cxx_destruct;
- (id)initWithSearchString:(id)arg1;
- (unsigned long long)nonTopHitResultCount;
- (bool)searchResultWasSelected;
- (id)searchString;
- (void)setNonTopHitResultCount:(unsigned long long)arg1;
- (void)setSearchResultWasSelected:(bool)arg1;
- (void)setTopHitResultCount:(unsigned long long)arg1;
- (unsigned long long)topHitResultCount;
- (void)updateWithTopHitResultCount:(unsigned long long)arg1 nonTopHitResultCount:(unsigned long long)arg2;

@end
