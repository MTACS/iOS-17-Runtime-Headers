
@interface CNKCNMeCardSharingSettingsViewControllerObserver : NSObject <CNMeCardSharingSettingsViewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)sharingSettingsViewController:(id)arg1 didSelectSharingAudience:(unsigned long long)arg2;
- (void)sharingSettingsViewController:(id)arg1 didUpdateSharingState:(bool)arg2;
- (void)sharingSettingsViewController:(id)arg1 didUpdateWithSharingResult:(id)arg2;

@end
