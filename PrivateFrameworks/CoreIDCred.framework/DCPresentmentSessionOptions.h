
@interface DCPresentmentSessionOptions : NSObject <NSSecureCoding> {
    unsigned long long  _elementFallbackModes;
    unsigned long long  _readerAuthenticationPolicy;
    unsigned long long  _responseEncryptionMode;
    unsigned long long  _sessionEncryptionMode;
}

@property (nonatomic) unsigned long long elementFallbackModes;
@property (nonatomic) unsigned long long readerAuthenticationPolicy;
@property (nonatomic) unsigned long long responseEncryptionMode;
@property (nonatomic) unsigned long long sessionEncryptionMode;

+ (bool)supportsSecureCoding;

- (id)description;
- (unsigned long long)elementFallbackModes;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionEncryptionMode:(unsigned long long)arg1;
- (id)initWithSessionEncryptionMode:(unsigned long long)arg1 readerAuthenticationPolicy:(unsigned long long)arg2;
- (unsigned long long)readerAuthenticationPolicy;
- (unsigned long long)responseEncryptionMode;
- (unsigned long long)sessionEncryptionMode;
- (void)setElementFallbackModes:(unsigned long long)arg1;
- (void)setReaderAuthenticationPolicy:(unsigned long long)arg1;
- (void)setResponseEncryptionMode:(unsigned long long)arg1;
- (void)setSessionEncryptionMode:(unsigned long long)arg1;

@end
