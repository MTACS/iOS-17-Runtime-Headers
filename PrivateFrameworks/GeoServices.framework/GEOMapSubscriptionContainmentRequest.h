
@interface GEOMapSubscriptionContainmentRequest : GEOXPCRequest <GEOXPCRequest> {
    unsigned long long  _dataTypes;
    GEOMapRegion * _region;
}

@property (nonatomic) unsigned long long dataTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOMapRegion *region;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void).cxx_destruct;
- (unsigned long long)dataTypes;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)region;
- (unsigned long long)reply;
- (void)setDataTypes:(unsigned long long)arg1;
- (void)setRegion:(id)arg1;

@end
