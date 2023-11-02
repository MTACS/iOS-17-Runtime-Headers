
@interface ICQDaemonOfferStubs : ICQDaemonPersisted {
    NSArray * _buddyStubs;
    NSArray * _defaultStubs;
    NSArray * _premiumStubs;
    NSArray * _serverStubs;
}

@property (nonatomic, readonly) NSArray *buddyStubs;
@property (nonatomic, readonly) NSArray *defaultStubs;
@property (nonatomic, readonly) NSArray *premiumStubs;
@property (nonatomic, readonly) NSArray *serverStubs;

+ (id)daemonOfferStubsDictionarySample;
+ (id)persistenceKey;

- (void).cxx_destruct;
- (id)_chooseStubFromServerStubs:(id)arg1 conditions:(id)arg2;
- (id)_chooseStubFromServerStubs:(id)arg1 offerType:(long long)arg2;
- (void)_initServerStubsFromServerDictionary;
- (id)_initWithAccount:(id)arg1 error:(id)arg2;
- (id)_initWithAccount:(id)arg1 serverDictionary:(id)arg2;
- (bool)_isValidServerStubs:(id)arg1 key:(id)arg2;
- (bool)_stubsArrayContainsOfferID:(id)arg1 stubs:(id)arg2;
- (id)buddyStubs;
- (id)chooseBuddyStub;
- (id)chooseBuddyStubForConditions:(id)arg1;
- (id)chooseBuddyStubForOfferType:(long long)arg1;
- (id)chooseDefaultStub;
- (id)chooseDefaultStubForConditions:(id)arg1;
- (id)chooseFirstDefaultStub;
- (id)chooseFirstPremiumStub;
- (id)chooseFirstStub;
- (id)choosePremiumStub;
- (id)choosePremiumStubForConditions:(id)arg1;
- (id)chooseStub;
- (id)chooseStubForConditions:(id)arg1;
- (id)chooseStubForOfferType:(long long)arg1;
- (bool)containsOfferID:(id)arg1;
- (id)defaultStubs;
- (id)initWithDictionary:(id)arg1;
- (id)premiumStubs;
- (id)serverStubs;
- (void)setServerDictionary:(id)arg1;
- (id)sortedServerStubs:(id)arg1;

@end
