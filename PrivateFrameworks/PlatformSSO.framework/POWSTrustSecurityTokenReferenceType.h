
@interface POWSTrustSecurityTokenReferenceType : POWSTrustBaseRequestType {
    POWSTrustKeyIdentifierType * _KeyIdentifier;
    NSString * _TokenType;
}

@property (nonatomic, retain) POWSTrustKeyIdentifierType *KeyIdentifier;
@property (nonatomic, copy) NSString *TokenType;

+ (id)definition;

- (void).cxx_destruct;
- (id)KeyIdentifier;
- (id)TokenType;
- (id)description;
- (void)setKeyIdentifier:(id)arg1;
- (void)setTokenType:(id)arg1;

@end
