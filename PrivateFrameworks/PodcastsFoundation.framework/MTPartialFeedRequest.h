
@interface MTPartialFeedRequest : MTBaseFeedRequest {
    void limit;
    void sections;
    void showTypeIsSerial;
}

@property (nonatomic) long long limit;
@property (nonatomic, copy) NSArray *sections;
@property (nonatomic) bool showTypeIsSerial;

- (void).cxx_destruct;
- (id)initWithStoreID:(long long)arg1;
- (long long)limit;
- (id)sections;
- (void)setLimit:(long long)arg1;
- (void)setSections:(id)arg1;
- (void)setShowTypeIsSerial:(bool)arg1;
- (bool)showTypeIsSerial;

@end
