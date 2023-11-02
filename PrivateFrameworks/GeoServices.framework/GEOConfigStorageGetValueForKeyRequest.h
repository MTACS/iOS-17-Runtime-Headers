
@interface GEOConfigStorageGetValueForKeyRequest : GEOXPCRequest <GEOXPCRequest> {
    NSString * _countryCode;
    unsigned long long  _keyOptions;
    NSString * _keyString;
}

@property (nonatomic, retain) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long keyOptions;
@property (nonatomic, retain) NSString *keyString;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void).cxx_destruct;
- (id)countryCode;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)keyOptions;
- (id)keyString;
- (unsigned long long)reply;
- (void)setCountryCode:(id)arg1;
- (void)setKeyOptions:(unsigned long long)arg1;
- (void)setKeyString:(id)arg1;

@end
