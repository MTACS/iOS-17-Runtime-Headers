
@interface ECHeaderAuthenticationResults : NSObject {
    NSString * _authenticationServiceIdentifier;
    NSArray * _statements;
    long long  _version;
}

@property (nonatomic, readonly, copy) NSString *authenticationServiceIdentifier;
@property (nonatomic, readonly, copy) NSArray *statements;
@property (nonatomic, readonly) long long version;

+ (id)authenticationResultsForHeaders:(id)arg1;

- (void).cxx_destruct;
- (id)authenticationServiceIdentifier;
- (id)firstStatementForMethod:(id)arg1;
- (id)initWithAuthenticationServiceIdentifier:(id)arg1 version:(long long)arg2 statements:(id)arg3;
- (id)statements;
- (long long)version;

@end
