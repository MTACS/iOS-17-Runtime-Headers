
@interface PAREngagedResult : NSObject <NSSecureCoding, SFEngagedResult> {
    NSData * _encodedNormalizedTopic;
    NSDate * _engagementTime;
    double  _freshnessScore;
    double  _score;
    NSString * _searchString;
    NSString * _title;
    int  _type;
}

@property (nonatomic, copy) NSData *encodedNormalizedTopic;
@property (nonatomic, copy) NSDate *engagementTime;
@property (nonatomic) double freshnessScore;
@property (nonatomic) double score;
@property (nonatomic, copy) NSString *searchString;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) int type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedNormalizedTopic;
- (id)engagementTime;
- (double)freshnessScore;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)score;
- (id)searchString;
- (void)setEncodedNormalizedTopic:(id)arg1;
- (void)setEngagementTime:(id)arg1;
- (void)setFreshnessScore:(double)arg1;
- (void)setScore:(double)arg1;
- (void)setSearchString:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(int)arg1;
- (id)title;
- (int)type;

@end
