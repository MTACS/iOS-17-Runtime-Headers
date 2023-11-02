
@interface GEOPlaceByIdentifiersRequest : GEOXPCRequest <GEOXPCRequest> {
    NSArray * _identifiers;
    unsigned long long  _options;
    NSUUID * _requestUUID;
    int  _resultProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *identifiers;
@property (nonatomic) unsigned long long options;
@property (nonatomic, retain) NSUUID *requestUUID;
@property (nonatomic) int resultProvider;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)identifiers;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)options;
- (unsigned long long)reply;
- (id)requestUUID;
- (int)resultProvider;
- (void)setIdentifiers:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setRequestUUID:(id)arg1;
- (void)setResultProvider:(int)arg1;

@end
