
@interface _WKAuthenticatorResponse : NSObject {
    long long  _attachment;
    NSData * _clientDataJSON;
    NSData * _extensionOutputsCBOR;
    struct RetainPtr<_WKAuthenticationExtensionsClientOutputs> { 
        void *m_ptr; 
    }  _extensions;
    NSData * _rawId;
}

@property (nonatomic, readonly) long long attachment;
@property (nonatomic, readonly) NSData *clientDataJSON;
@property (nonatomic, copy) NSData *extensionOutputsCBOR;
@property (nonatomic, readonly) _WKAuthenticationExtensionsClientOutputs *extensions;
@property (nonatomic, readonly) NSData *rawId;

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)attachment;
- (id)clientDataJSON;
- (void)dealloc;
- (id)extensionOutputsCBOR;
- (id)extensions;
- (id)initWithClientDataJSON:(id)arg1 rawId:(id)arg2 extensionOutputsCBOR:(id)arg3 attachment:(long long)arg4;
- (id)initWithClientDataJSON:(id)arg1 rawId:(id)arg2 extensions:(void*)arg3 attachment:(long long)arg4;
- (id)rawId;
- (void)setExtensionOutputsCBOR:(id)arg1;

@end
