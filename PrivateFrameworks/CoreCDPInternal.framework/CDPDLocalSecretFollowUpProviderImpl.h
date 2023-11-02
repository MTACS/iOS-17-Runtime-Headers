
@interface CDPDLocalSecretFollowUpProviderImpl : NSObject <CDPLocalSecretFollowUpProvider> {
    NSString * _altDSID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)deleteConfirmExistingSecretFollowUp;
- (void)deleteCreatePasscodeFollowUp;
- (void)deleteLocalSecretChangeFollowUp;
- (id)init;
- (id)initWithAltDSID:(id)arg1;
- (void)postConfirmExistingSecretFollowUp;
- (void)postLocalSecretChangeFollowUp;
- (void)postRepairFollowUp;

@end
