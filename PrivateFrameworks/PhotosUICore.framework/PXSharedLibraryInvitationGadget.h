
@interface PXSharedLibraryInvitationGadget : NSObject <PXGadget, PXSharedLibraryInvitationViewDelegate> {
    <PXGadgetDelegate> * _delegate;
    bool  _didLoadSharedLibrary;
    PXGadgetSpec * _gadgetSpec;
    <PXSharedLibrary> * _invitation;
    PXSharedLibraryInvitationView * _invitationView;
    PXSharedLibraryStatusProvider * _statusProvider;
}

@property (nonatomic, readonly) NSString *accessoryButtonTitle;
@property (nonatomic, readonly) unsigned long long accessoryButtonType;
@property (nonatomic, readonly) Class collectionViewItemClass;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXGadgetDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long gadgetCapabilities;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) unsigned long long gadgetType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long headerStyle;
@property (nonatomic, retain) <PXSharedLibrary> *invitation;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) PXSharedLibraryStatusProvider *statusProvider;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;
@property (nonatomic, readonly) bool wantsMultilineTitle;

- (void).cxx_destruct;
- (Class)collectionViewItemClass;
- (id)contextMenuActionsForInvitationView:(id)arg1;
- (id)delegate;
- (unsigned long long)gadgetCapabilities;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (id)init;
- (id)initWithSharedLibraryStatusProvider:(id)arg1 invitation:(id)arg2;
- (id)invitation;
- (void)invitationViewSizeThatFitsDidChange:(id)arg1;
- (void)prepareCollectionViewItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setInvitation:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)statusProvider;
- (bool)supportsHighlighting;
- (id)uniqueGadgetIdentifier;
- (void)userDidSelectGadget;

@end
