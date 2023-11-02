
@interface GEOMapSubscriptionStartDownloadRequest : GEOXPCRequest <GEOXPCRequest> {
    unsigned long long  _downloadMode;
    NSArray * _identifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long downloadMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *identifiers;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void).cxx_destruct;
- (unsigned long long)downloadMode;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)identifiers;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)reply;
- (void)setDownloadMode:(unsigned long long)arg1;
- (void)setIdentifiers:(id)arg1;

@end
