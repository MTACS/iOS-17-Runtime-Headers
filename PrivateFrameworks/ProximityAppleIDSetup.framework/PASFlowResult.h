
@interface PASFlowResult : NSObject

@property (nonatomic, readonly) long long accountType;
@property (nonatomic, readonly) NSDictionary *authResults;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) FAFamilyMember *familyMember;
@property (nonatomic, readonly) ACAccount *personalAccount;

- (long long)accountType;
- (id)authResults;
- (id)error;
- (id)familyMember;
- (id)init;
- (id)personalAccount;

@end
