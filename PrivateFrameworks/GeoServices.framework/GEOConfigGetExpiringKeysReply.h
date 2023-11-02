
@interface GEOConfigGetExpiringKeysReply : GEOXPCReply <GEOXPCReply> {
    NSDictionary * _expiringKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *expiringKeys;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)expiringKeys;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)setExpiringKeys:(id)arg1;

@end
