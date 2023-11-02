
@interface MTSeasonFeedRequest : MTPartialFeedRequest {
    void seasons;
}

@property (nonatomic, copy) NSArray *seasons;

- (void).cxx_destruct;
- (id)initWithStoreID:(long long)arg1;
- (id)initWithStoreID:(long long)arg1 seasons:(id)arg2;
- (id)seasons;
- (void)setSeasons:(id)arg1;

@end
