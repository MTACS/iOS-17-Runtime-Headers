
@interface PXCMMInvitationViewModelManager : NSObject <PXChangeObserver> {
    long long  _bulletPrefix;
    <PXCMMInvitation> * _invitation;
    PXMomentShareStatusPresentation * _momentShareStatusPresentation;
    PXCMMInvitationSpec * _spec;
    PXCMMInvitationViewModel * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PXMomentShareStatusPresentation *momentShareStatusPresentation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXCMMInvitationViewModel *viewModel;

+ (id)_serialQueue;

- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_invitationsIsNewMonitorDidChange:(id)arg1;
- (void)_registerMomentShareStatusPresentation;
- (bool)_showIsNewStatusInAttributedTitle;
- (void)_updateExpirationTitle:(id)arg1;
- (void)_updateIsNew:(id)arg1;
- (void)_updatePosterTitle:(id)arg1;
- (void)_updateStatusString:(id)arg1;
- (void)_updateTitle:(id)arg1;
- (id)init;
- (id)initWithInvitation:(id)arg1 invitationSpec:(id)arg2 bulletPrefix:(long long)arg3;
- (id)momentShareStatusPresentation;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setMomentShareStatusPresentation:(id)arg1;
- (id)viewModel;

@end
