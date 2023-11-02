
@interface WLKOfferManager : NSObject {
    NSXPCConnection * _connection;
    NSArray * _offers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) NSArray *offers;

+ (id)_offerFullPath;
+ (id)_offerPath;
+ (id)defaultOfferManager;

- (void).cxx_destruct;
- (void)_activeAccountChangedNotification:(id)arg1;
- (id)_connection;
- (id)_offers;
- (void)_setOffers:(id)arg1;
- (id)_updateOfferFile;
- (void)clearOffers:(id /* block */)arg1;
- (void)fetchOffers:(bool)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)offers;
- (void)removeOfferByBadgeId:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveOffer:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setOffers:(id)arg1;

@end
