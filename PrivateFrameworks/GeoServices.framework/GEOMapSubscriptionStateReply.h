
@interface GEOMapSubscriptionStateReply : GEOXPCReply <GEOXPCReply> {
    GEOMapDataSubscriptionState * _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOMapDataSubscriptionState *state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setState:(id)arg1;
- (id)state;

@end
