
@interface GEOConfigStorageGetValueForKeyReply : GEOXPCReply <GEOXPCReply> {
    long long  _keySource;
    id  _keyValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keySource;
@property (nonatomic, retain) id keyValue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (long long)keySource;
- (id)keyValue;
- (void)setKeySource:(long long)arg1;
- (void)setKeyValue:(id)arg1;

@end
