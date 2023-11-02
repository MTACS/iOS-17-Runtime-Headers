
@interface HRETemplate : NSObject {
    NSString * _identifier;
    NSSet * _rules;
    double  _sortingPriority;
    unsigned long long  _splitStrategy;
    double  _starterRank;
    NSString * _title;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) NSSet *involvedAccessoryTypes;
@property (nonatomic, readonly) Class recommendationClass;
@property (nonatomic, retain) NSSet *rules;
@property (nonatomic) double sortingPriority;
@property (nonatomic) unsigned long long splitStrategy;
@property (nonatomic) double starterRank;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)createStarterRecommendationInHome:(id)arg1;
- (id)identifier;
- (id)init;
- (id)involvedAccessoryTypes;
- (Class)recommendationClass;
- (id)rules;
- (void)setIdentifier:(id)arg1;
- (void)setRules:(id)arg1;
- (void)setSortingPriority:(double)arg1;
- (void)setSplitStrategy:(unsigned long long)arg1;
- (void)setStarterRank:(double)arg1;
- (void)setTitle:(id)arg1;
- (double)sortingPriority;
- (unsigned long long)splitStrategy;
- (double)starterRank;
- (id)title;

@end
