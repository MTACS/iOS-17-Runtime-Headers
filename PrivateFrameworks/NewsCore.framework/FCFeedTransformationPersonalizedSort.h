
@interface FCFeedTransformationPersonalizedSort : NSObject <FCFeedTransforming> {
    long long  _configurationSet;
    FCMapTable * _feedItemScores;
    <FCFeedPersonalizing> * _feedPersonalizer;
    long long  _sortOptions;
}

@property (nonatomic) long long configurationSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FCMapTable *feedItemScores;
@property (nonatomic, retain) <FCFeedPersonalizing> *feedPersonalizer;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long sortOptions;
@property (readonly) Class superclass;

+ (id)transformationWithPersonalizer:(id)arg1;
+ (id)transformationWithPersonalizer:(id)arg1 configurationSet:(long long)arg2;
+ (id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2;
+ (id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2 sortOptions:(long long)arg3;
+ (id)transformationWithPersonalizer:(id)arg1 feedItemScores:(id)arg2 sortOptions:(long long)arg3 configurationSet:(long long)arg4;
+ (id)transformationWithPersonalizer:(id)arg1 sortOptions:(long long)arg2;

- (void).cxx_destruct;
- (long long)configurationSet;
- (id)feedItemScores;
- (id)feedPersonalizer;
- (id)personalizedHeadlines:(id)arg1;
- (void)setConfigurationSet:(long long)arg1;
- (void)setFeedItemScores:(id)arg1;
- (void)setFeedPersonalizer:(id)arg1;
- (void)setSortOptions:(long long)arg1;
- (long long)sortOptions;
- (id)transformFeedItems:(id)arg1;
- (id)transformHeadlines:(id)arg1;

@end
