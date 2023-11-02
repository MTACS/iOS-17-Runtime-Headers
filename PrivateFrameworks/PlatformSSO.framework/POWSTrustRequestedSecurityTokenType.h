
@interface POWSTrustRequestedSecurityTokenType : POWSTrustBaseRequestType {
    NSString * _stringValue;
}

@property (nonatomic, copy) NSString *stringValue;

+ (id)definition;

- (void).cxx_destruct;
- (id)description;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end
