
@interface PKCarKeyCredentialRegistrationMetadata : PKCredentialRegistrationMetadata {
    long long  _keyType;
    NSString * _make;
    NSString * _model;
}

@property (nonatomic, readonly) long long keyType;
@property (nonatomic, readonly) NSString *make;
@property (nonatomic, readonly) NSString *model;

- (void).cxx_destruct;
- (id)initWithMake:(id)arg1 model:(id)arg2 keyType:(long long)arg3;
- (long long)keyType;
- (id)make;
- (id)model;

@end
