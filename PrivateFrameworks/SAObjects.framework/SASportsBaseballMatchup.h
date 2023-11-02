
@interface SASportsBaseballMatchup : SASportsMatchup

@property (nonatomic, copy) NSNumber *awayErrors;
@property (nonatomic, copy) NSNumber *awayHits;
@property (nonatomic, copy) NSNumber *balls;
@property (nonatomic, copy) NSNumber *homeErrors;
@property (nonatomic, copy) NSNumber *homeHits;
@property (nonatomic, copy) NSString *inningStatus;
@property (nonatomic, copy) NSNumber *onFirst;
@property (nonatomic, copy) NSNumber *onSecond;
@property (nonatomic, copy) NSNumber *onThird;
@property (nonatomic, copy) NSNumber *outs;
@property (nonatomic, copy) NSNumber *strikes;

+ (id)baseballMatchup;
+ (id)baseballMatchupWithDictionary:(id)arg1 context:(id)arg2;

- (id)awayErrors;
- (id)awayHits;
- (id)balls;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)homeErrors;
- (id)homeHits;
- (id)inningStatus;
- (id)onFirst;
- (id)onSecond;
- (id)onThird;
- (id)outs;
- (void)setAwayErrors:(id)arg1;
- (void)setAwayHits:(id)arg1;
- (void)setBalls:(id)arg1;
- (void)setHomeErrors:(id)arg1;
- (void)setHomeHits:(id)arg1;
- (void)setInningStatus:(id)arg1;
- (void)setOnFirst:(id)arg1;
- (void)setOnSecond:(id)arg1;
- (void)setOnThird:(id)arg1;
- (void)setOuts:(id)arg1;
- (void)setStrikes:(id)arg1;
- (id)strikes;

@end
