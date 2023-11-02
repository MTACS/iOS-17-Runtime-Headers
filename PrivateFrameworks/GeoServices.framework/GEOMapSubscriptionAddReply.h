
@interface GEOMapSubscriptionAddReply : GEOXPCReply <GEOXPCReply> {
    GEOMapDataSubscription * _subscription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOMapDataSubscription *subscription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setSubscription:(id)arg1;
- (id)subscription;

@end
