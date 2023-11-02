
@interface SADonateSiriQueryToPortrait : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *domain;
@property (nonatomic, copy) NSString *originalQuery;
@property (nonatomic, copy) NSString *qid;
@property (nonatomic) long long rank;
@property (nonatomic) double rankerConfidence;

+ (id)donateSiriQueryToPortrait;
+ (id)donateSiriQueryToPortraitWithDictionary:(id)arg1 context:(id)arg2;

- (id)domain;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)originalQuery;
- (id)qid;
- (long long)rank;
- (double)rankerConfidence;
- (bool)requiresResponse;
- (void)setDomain:(id)arg1;
- (void)setOriginalQuery:(id)arg1;
- (void)setQid:(id)arg1;
- (void)setRank:(long long)arg1;
- (void)setRankerConfidence:(double)arg1;

@end
