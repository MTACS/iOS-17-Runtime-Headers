
@interface WBSAppleAccountInformationProvider : NSObject <WBSAppleAccountInformationProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isSafariSyncEnabled;
@property (readonly) Class superclass;

- (unsigned long long)_primaryAppleAccountSecurityLevel;
- (long long)appleAccountSecurityState;
- (void)getAppleAccountSecurityStateWithCompletion:(id /* block */)arg1;
- (bool)isSafariSyncEnabled;

@end
