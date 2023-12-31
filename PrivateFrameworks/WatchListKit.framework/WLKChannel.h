
@interface WLKChannel : NSObject {
    NSString * _ID;
    WLKChannelDetails * _details;
    NSDictionary * _punchoutUrls;
    NSArray * _seasonNumbers;
    NSArray * _subscriptionOffers;
}

@property (nonatomic, readonly, copy) NSString *ID;
@property (nonatomic, readonly, copy) WLKChannelDetails *details;
@property (nonatomic, readonly, copy) NSDictionary *punchoutUrls;
@property (nonatomic, readonly, copy) NSArray *seasonNumbers;
@property (nonatomic, readonly, copy) NSArray *subscriptionOffers;

+ (id)channelsWithDictionaries:(id)arg1 context:(id)arg2;
+ (id)channelsWithDictionaries:(id)arg1 context:(id)arg2 seasons:(id)arg3;

- (void).cxx_destruct;
- (id)ID;
- (id)details;
- (id)init;
- (id)initWithDictionary:(id)arg1 context:(id)arg2;
- (id)punchoutUrls;
- (id)seasonNumbers;
- (id)subscriptionOffers;

@end
