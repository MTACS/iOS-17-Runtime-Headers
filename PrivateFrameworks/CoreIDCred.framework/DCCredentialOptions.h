
@interface DCCredentialOptions : NSObject <NSSecureCoding> {
    long long  _deleteInactiveKeysAfterDays;
    long long  _deleteIncompleteCredentialAfterDays;
    unsigned long long  _payloadProtectionPolicy;
    unsigned long long  _presentmentAuthPolicy;
    unsigned long long  _readerAuthenticationPolicy;
}

@property (nonatomic) long long deleteInactiveKeysAfterDays;
@property (nonatomic) long long deleteIncompleteCredentialAfterDays;
@property (nonatomic) unsigned long long payloadProtectionPolicy;
@property (nonatomic) unsigned long long presentmentAuthPolicy;
@property (nonatomic) unsigned long long readerAuthenticationPolicy;

+ (bool)supportsSecureCoding;

- (long long)deleteInactiveKeysAfterDays;
- (long long)deleteIncompleteCredentialAfterDays;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)payloadProtectionPolicy;
- (unsigned long long)presentmentAuthPolicy;
- (unsigned long long)readerAuthenticationPolicy;
- (void)setDeleteInactiveKeysAfterDays:(long long)arg1;
- (void)setDeleteIncompleteCredentialAfterDays:(long long)arg1;
- (void)setPayloadProtectionPolicy:(unsigned long long)arg1;
- (void)setPresentmentAuthPolicy:(unsigned long long)arg1;
- (void)setReaderAuthenticationPolicy:(unsigned long long)arg1;

@end
