
@interface PXSharedLibraryInvitationView : UICollectionViewCell <UIContextMenuInteractionDelegate> {
    <PXSharedLibraryInvitationViewDelegate> * _delegate;
    PXSharedLibraryInvitationContentView * _invitationContentView;
    UITraitCollection * _overrideTraitCollection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXSharedLibraryInvitationViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UITraitCollection *overrideTraitCollection;
@property (nonatomic, retain) <PXSharedLibraryParticipant> *owner;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)delegate;
- (id)focusEffect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)overrideTraitCollection;
- (id)owner;
- (void)setDelegate:(id)arg1;
- (void)setOverrideTraitCollection:(id)arg1;
- (void)setOwner:(id)arg1;
- (id)traitCollection;
- (void)traitCollectionDidChange:(id)arg1;

@end
