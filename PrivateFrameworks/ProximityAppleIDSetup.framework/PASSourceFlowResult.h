
@interface PASSourceFlowResult : PASFlowResult {
    void result;
}

@property (nonatomic, readonly) long long accountType;
@property (nonatomic, readonly) NSDictionary *authResults;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) FAFamilyMember *familyMember;
@property (nonatomic, readonly) ACAccount *personalAccount;

- (void).cxx_destruct;
- (long long)accountType;
- (id)authResults;
- (id)description;
- (id)error;
- (id)familyMember;
- (id)init;
- (id)personalAccount;

@end
