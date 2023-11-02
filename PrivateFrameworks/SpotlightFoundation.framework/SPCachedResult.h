
@interface SPCachedResult : NSObject <SFEngagedResult> {
    NSData * _encodedNormalizedTopic;
    NSDate * _engagementTime;
    double  _freshnessScore;
    double  _score;
    NSString * _searchString;
    NSString * _title;
    int  _type;
}

@property (nonatomic, copy) NSData *encodedNormalizedTopic;
@property (nonatomic, readonly, copy) NSDate *engagementTime;
@property (nonatomic, readonly) double freshnessScore;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly, copy) NSString *searchString;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) int type;

- (void).cxx_destruct;
- (id)encodedNormalizedTopic;
- (id)engagementTime;
- (double)freshnessScore;
- (id)initWithContactName:(id)arg1 contactIdentifier:(id)arg2 score:(id)arg3 searchString:(id)arg4;
- (id)initWithEngagedResult:(id)arg1;
- (id)initWithPersonName:(id)arg1 personQueryIdentifier:(id)arg2 score:(id)arg3 searchString:(id)arg4;
- (id)initWithResult:(id)arg1 identifier:(id)arg2 bundleIdentifier:(id)arg3 protectionClass:(id)arg4 searchString:(id)arg5;
- (id)initWithResult:(id)arg1 topic:(id)arg2 title:(id)arg3 searchString:(id)arg4;
- (id)initWithTitle:(id)arg1 type:(int)arg2 score:(id)arg3 searchString:(id)arg4;
- (id)recentTopic;
- (double)score;
- (id)searchResult;
- (id)searchString;
- (void)setEncodedNormalizedTopic:(id)arg1;
- (id)title;
- (int)type;

@end
