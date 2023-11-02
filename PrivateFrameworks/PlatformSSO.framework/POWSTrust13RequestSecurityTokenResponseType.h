
@interface POWSTrust13RequestSecurityTokenResponseType : POWSTrustBaseRequestType {
    POWSTrustAppliesToType * _AppliesTo;
    NSString * _KeyType;
    POWSTrustTimestampType * _Lifetime;
    NSString * _RequestType;
    POWSTrustReferenceType * _RequestedAttachedReference;
    POWSTrustRequestedSecurityTokenType * _RequestedSecurityToken;
    POWSTrustReferenceType * _RequestedUnattachedReference;
    NSString * _TokenType;
}

@property (nonatomic, retain) POWSTrustAppliesToType *AppliesTo;
@property (nonatomic, copy) NSString *KeyType;
@property (nonatomic, retain) POWSTrustTimestampType *Lifetime;
@property (nonatomic, copy) NSString *RequestType;
@property (nonatomic, retain) POWSTrustReferenceType *RequestedAttachedReference;
@property (nonatomic, retain) POWSTrustRequestedSecurityTokenType *RequestedSecurityToken;
@property (nonatomic, retain) POWSTrustReferenceType *RequestedUnattachedReference;
@property (nonatomic, copy) NSString *TokenType;

+ (id)definition;

- (void).cxx_destruct;
- (id)AppliesTo;
- (id)KeyType;
- (id)Lifetime;
- (id)RequestType;
- (id)RequestedAttachedReference;
- (id)RequestedSecurityToken;
- (id)RequestedUnattachedReference;
- (id)TokenType;
- (id)description;
- (void)setAppliesTo:(id)arg1;
- (void)setKeyType:(id)arg1;
- (void)setLifetime:(id)arg1;
- (void)setRequestType:(id)arg1;
- (void)setRequestedAttachedReference:(id)arg1;
- (void)setRequestedSecurityToken:(id)arg1;
- (void)setRequestedUnattachedReference:(id)arg1;
- (void)setTokenType:(id)arg1;

@end
