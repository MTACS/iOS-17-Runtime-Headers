
@interface GEOConfigGetCompanionSyncValuesForKeysReply : GEOXPCReply <GEOXPCReply> {
    NSDictionary * _keyStringsAndValues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *keyStringsAndValues;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)keyStringsAndValues;
- (void)setKeyStringsAndValues:(id)arg1;

@end
