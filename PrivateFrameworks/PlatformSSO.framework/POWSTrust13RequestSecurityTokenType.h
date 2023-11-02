
@interface POWSTrust13RequestSecurityTokenType : POWSTrustBaseRequestType {
    POWSTrustAppliesToType * _AppliesTo;
    NSString * _KeyType;
    NSString * _RequestType;
}

@property (nonatomic, retain) POWSTrustAppliesToType *AppliesTo;
@property (nonatomic, copy) NSString *KeyType;
@property (nonatomic, copy) NSString *RequestType;

+ (id)definition;

- (void).cxx_destruct;
- (id)AppliesTo;
- (id)KeyType;
- (id)RequestType;
- (id)description;
- (void)setAppliesTo:(id)arg1;
- (void)setKeyType:(id)arg1;
- (void)setRequestType:(id)arg1;

@end
