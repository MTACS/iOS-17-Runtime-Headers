
@interface GEOMapSubscriptionStateStartObservingRequest : GEOXPCRequest <GEOXPCRequest> {
    NSArray * _identifiers;
    bool  _sendInitialUpdate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *identifiers;
@property (nonatomic) bool sendInitialUpdate;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)identifiers;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)reply;
- (bool)sendInitialUpdate;
- (void)setIdentifiers:(id)arg1;
- (void)setSendInitialUpdate:(bool)arg1;

@end
