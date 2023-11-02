
@interface CNKGroupIdentityHeaderSNaPWrapper : NSObject <CNGroupIdentityHeaderViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)configureGroupIdentityHeaderViewController:(id)arg1 contact:(id)arg2;
- (void)groupIdentityHeaderViewController:(id)arg1 didDismissSharedProfileBannerWithUpdatedContact:(id)arg2 forAction:(unsigned long long)arg3;
- (void)groupIdentityHeaderViewController:(id)arg1 sharedProfileBannerDidUpdateContact:(id)arg2 forAction:(unsigned long long)arg3;
- (void)handleSharedProfileUpdateForController:(id)arg1 contact:(id)arg2;
- (void)setOracleUsingController:(id)arg1 contact:(id)arg2;

@end
