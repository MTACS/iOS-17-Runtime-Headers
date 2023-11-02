
@interface CKComposeNavbarBusinessCanvasViewController : CKComposeNavbarCanvasViewController <CKAvatarPickerViewControllerDelegate> {
    CKAvatarPickerViewController * _avatarController;
    CKConversation * _cachedConversation;
    CKLabel * _defaultLabel;
}

@property (nonatomic, retain) CKAvatarPickerViewController *avatarController;
@property (nonatomic, retain) CKConversation *cachedConversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) CKLabel *defaultLabel;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowAvatarView;
- (void)_handleAddressBookPartialChange:(id)arg1;
- (id)_titleItemViewForTraitCollection:(id)arg1;
- (void)_updateBrandingForConversation:(id)arg1;
- (void)_updateDefaultLabelForConversation:(id)arg1;
- (void)_updateTitleForConversation:(id)arg1 animated:(bool)arg2;
- (id)avatarController;
- (id)cachedConversation;
- (id)defaultLabel;
- (bool)hideChevron;
- (long long)navBarContext;
- (void)setAvatarController:(id)arg1;
- (void)setCachedConversation:(id)arg1;
- (void)setDefaultLabel:(id)arg1;
- (void)tappedAvatarPickerViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateContentsForConversation:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
