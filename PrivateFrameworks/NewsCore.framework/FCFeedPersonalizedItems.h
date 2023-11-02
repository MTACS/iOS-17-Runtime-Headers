
@interface FCFeedPersonalizedItems : NSObject {
    FCMapTable * _scoreProfiles;
    NSArray * _sortedItems;
}

@property (nonatomic, retain) FCMapTable *scoreProfiles;
@property (nonatomic, retain) NSArray *sortedItems;

- (void).cxx_destruct;
- (id)scoreProfiles;
- (void)setScoreProfiles:(id)arg1;
- (void)setSortedItems:(id)arg1;
- (id)sortedItems;

@end
