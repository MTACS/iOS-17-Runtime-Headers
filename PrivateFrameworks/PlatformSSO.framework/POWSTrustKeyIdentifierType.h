
@interface POWSTrustKeyIdentifierType : POWSTrustBaseRequestType {
    NSString * _ValueType;
    NSString * _stringValue;
}

@property (nonatomic, copy) NSString *ValueType;
@property (nonatomic, copy) NSString *stringValue;

+ (id)definition;

- (void).cxx_destruct;
- (id)ValueType;
- (id)description;
- (void)setStringValue:(id)arg1;
- (void)setValueType:(id)arg1;
- (id)stringValue;

@end
