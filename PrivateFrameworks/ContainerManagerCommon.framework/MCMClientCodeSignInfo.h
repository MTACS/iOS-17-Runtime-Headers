
@interface MCMClientCodeSignInfo : NSObject <MCMClientCodeSignInfo> {
    bool  _cached;
    NSData * _cdhash;
    <MCMEntitlements> * _entitlements;
    NSString * _identifier;
    bool  _isPlatformBinary;
    bool  _isSignatureValid;
    bool  _isSigned;
}

@property (nonatomic, readonly) bool cached;
@property (nonatomic, readonly) NSData *cdhash;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MCMEntitlements> *entitlements;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isPlatformBinary;
@property (nonatomic, readonly) bool isSignatureValid;
@property (nonatomic, readonly) bool isSigned;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)cached;
- (id)cdhash;
- (id)clientCodeSignInfoByChangingCached:(bool)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)entitlements;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCDHash:(id)arg1 entitlements:(id)arg2 identifier:(id)arg3 status:(unsigned long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToClientCodeSignInfo:(id)arg1;
- (bool)isPlatformBinary;
- (bool)isSignatureValid;
- (bool)isSigned;

@end
