
@interface GEOMapSubscriptionForceUpdateRequest : GEOXPCRequest <GEOXPCRequest> {
    unsigned long long  _dataTypes;
    unsigned long long  _downloadMode;
}

@property (nonatomic) unsigned long long dataTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long downloadMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (unsigned long long)dataTypes;
- (unsigned long long)downloadMode;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)reply;
- (void)setDataTypes:(unsigned long long)arg1;
- (void)setDownloadMode:(unsigned long long)arg1;

@end
