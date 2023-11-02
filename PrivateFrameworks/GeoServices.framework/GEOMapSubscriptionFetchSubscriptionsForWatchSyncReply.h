
@interface GEOMapSubscriptionFetchSubscriptionsForWatchSyncReply : GEOXPCReply <GEOXPCReply> {
    GEOPBCompanionSubscriptionsInfo * _subscriptionsInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOPBCompanionSubscriptionsInfo *subscriptionsInfo;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setSubscriptionsInfo:(id)arg1;
- (id)subscriptionsInfo;

@end
