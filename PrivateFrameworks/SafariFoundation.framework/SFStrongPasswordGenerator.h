
@interface SFStrongPasswordGenerator : NSObject {
    WBSPasswordGenerationManager * _passwordGenerationManager;
}

- (void).cxx_destruct;
- (id)generatedPasswordForAppWithAppID:(id)arg1 associatedDomains:(id)arg2 passwordRules:(id)arg3 confirmPasswordRules:(id)arg4;
- (id)generatedPasswordForAppWithAssociatedDomains:(id)arg1 passwordRules:(id)arg2 confirmPasswordRules:(id)arg3;
- (id)init;

@end
