
@interface VUITransactionOffer : NSObject {
    bool  _initiateFamilySetup;
    NSDictionary * _offer;
    NSURL * _sharedWatchUrl;
    NSDictionary * _transactionOfferDict;
    NSArray * _videosPlayables;
}

@property (nonatomic, readonly) NSString *buyParams;
@property (nonatomic, readonly) bool initiateFamilySetup;
@property (nonatomic, readonly, copy) NSDictionary *offer;
@property (nonatomic, readonly) bool playWhenDone;
@property (nonatomic, readonly) NSURL *sharedWatchUrl;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSArray *videosPlayables;

- (void).cxx_destruct;
- (id)buyParams;
- (id)getCanonicalID;
- (id)initWithDictionary:(id)arg1;
- (bool)initiateFamilySetup;
- (id)notificationBody;
- (id)notificationTitle;
- (id)offer;
- (bool)playWhenDone;
- (id)sharedWatchUrl;
- (id)title;
- (id)videosPlayables;

@end
