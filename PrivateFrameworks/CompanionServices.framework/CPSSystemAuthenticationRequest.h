
@interface CPSSystemAuthenticationRequest : CPSAuthenticationRequest <BSXPCCoding, NSSecureCoding> {
    NSString * _appleAccountAltDSID;
    unsigned long long  _options;
    long long  _service;
}

@property (nonatomic, retain) NSString *appleAccountAltDSID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long service;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appleAccountAltDSID;
- (long long)authType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned long long)options;
- (long long)service;
- (void)setAppleAccountAltDSID:(id)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setService:(long long)arg1;

@end
