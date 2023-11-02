
@interface GEOMapSubscriptionsFetchReply : GEOXPCReply <GEOXPCReply> {
    NSArray * _subscriptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *subscriptions;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setSubscriptions:(id)arg1;
- (id)subscriptions;

@end
