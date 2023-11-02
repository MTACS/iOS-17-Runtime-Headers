
@interface ASTProfileResult : ASTSealablePayload {
    ASTIdentity * _identity;
    NSArray * _properties;
    NSArray * _tests;
}

@property (nonatomic, readonly) ASTIdentity *identity;
@property (nonatomic, retain) NSArray *properties;
@property (nonatomic, retain) NSArray *tests;

+ (id)resultWithIdentity:(id)arg1;
+ (id)sealedProfileResultWithPayload:(id)arg1 signature:(id)arg2;

- (void).cxx_destruct;
- (id)generatePayload;
- (id)identity;
- (id)init;
- (id)initWithIdentity:(id)arg1;
- (id)properties;
- (void)setProperties:(id)arg1;
- (void)setTests:(id)arg1;
- (id)tests;

@end
