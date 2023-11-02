
@interface MTFullFeedRequest : MTBaseFeedRequest {
    void hasSeasons;
    void isSerial;
}

- (id)initWithStoreID:(long long)arg1;
- (id)initWithStoreID:(long long)arg1 isSerial:(bool)arg2 hasSeasons:(bool)arg3;

@end
