
@interface GEOOfflineDataFetchAvailableKeysRequest : GEOXPCRequest <GEOXPCRequest> {
    unsigned int  _layer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int layer;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned int)layer;
- (unsigned long long)reply;
- (void)setLayer:(unsigned int)arg1;

@end
