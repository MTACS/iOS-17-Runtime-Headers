
@interface ICASSearchResultExposureData : NSObject <AADataEventType> {
    NSNumber * _hasNonTopHitResultsForLongestSearchString;
    NSArray * _searchBufferArray;
    NSNumber * _topHitCountForLongestSearchString;
}

@property (nonatomic, readonly) NSNumber *hasNonTopHitResultsForLongestSearchString;
@property (nonatomic, readonly) NSArray *searchBufferArray;
@property (nonatomic, readonly) NSNumber *topHitCountForLongestSearchString;

+ (id)dataName;

- (void).cxx_destruct;
- (id)hasNonTopHitResultsForLongestSearchString;
- (id)initWithTopHitCountForLongestSearchString:(id)arg1 hasNonTopHitResultsForLongestSearchString:(id)arg2 searchBufferArray:(id)arg3;
- (id)searchBufferArray;
- (id)toDict;
- (id)topHitCountForLongestSearchString;

@end
