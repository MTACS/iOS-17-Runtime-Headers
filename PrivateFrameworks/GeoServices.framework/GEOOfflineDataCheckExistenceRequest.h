
@interface GEOOfflineDataCheckExistenceRequest : GEOXPCRequest <GEOXPCRequest> {
    GEOOfflineDataKey * _key;
    bool  _sync;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOOfflineDataKey *key;
@property (readonly) Class superclass;
@property (nonatomic) bool sync;

+ (Class)replyClass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)key;
- (unsigned long long)reply;
- (void)setKey:(id)arg1;
- (void)setSync:(bool)arg1;
- (bool)sync;

@end
