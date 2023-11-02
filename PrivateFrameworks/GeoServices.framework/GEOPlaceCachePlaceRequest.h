
@interface GEOPlaceCachePlaceRequest : GEOXPCRequest <GEOXPCRequest> {
    GEOPDPlace * _place;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOPDPlace *place;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)place;
- (unsigned long long)reply;
- (void)setPlace:(id)arg1;

@end
