
@interface PXCMMInvitationGadget : NSObject <PXCMMInvitationViewDelegate, PXGadget> {
    <PXGadgetDelegate> * _delegate;
    bool  _didRequestCachingOfPosterImage;
    PXGadgetSpec * _gadgetSpec;
    <PXCMMInvitation> * _invitation;
    <PXCMMInvitationGadgetDelegate> * _invitationGadgetDelegate;
    PXCMMInvitationView * _invitationView;
    NSManagedObjectID * _objectID;
    struct CGSize { 
        double width; 
        double height; 
    }  _requestedPosterImageSize;
    double  _requestedWidth;
    PXCMMInvitationViewModelManager * _viewModelManager;
    <PXCMMWorkflowPresenting> * _workflowPresenter;
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
@property (nonatomic, retain) <PXCMMInvitation> *invitation;
@property (nonatomic) <PXCMMInvitationGadgetDelegate> *invitationGadgetDelegate;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, retain) NSManagedObjectID *objectID;
@property (nonatomic) long long priority;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;
@property (nonatomic, readonly) bool wantsMultilineTitle;
@property (nonatomic, readonly) <PXCMMWorkflowPresenting> *workflowPresenter;

+ (id)_imageRequestOptions;
+ (id)_sharedUserInitiatedQueue;

- (void).cxx_destruct;
- (void)_cachePosterImageWithWidth:(double)arg1;
- (void)_clearPosterImageCache;
- (void)_createViewModelManagerIfNecessary;
- (void)_presentDetailViewAnimated:(bool)arg1;
- (void)_updateOpaqueAncestorBackgroundColor;
- (Class)collectionViewItemClass;
- (void)commitPreviewViewController:(id)arg1;
- (void)contentHasBeenSeen;
- (id)delegate;
- (unsigned long long)gadgetCapabilities;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (id)init;
- (id)initWithWorkflowPresenter:(id)arg1;
- (id)invitation;
- (id)invitationGadgetDelegate;
- (void)invitationViewSizeThatFitsDidChange:(id)arg1;
- (id)objectID;
- (void)prefetchDuringScrollingForWidth:(double)arg1;
- (void)prepareCollectionViewItem:(id)arg1;
- (void)presentDetailViewAnimated:(bool)arg1;
- (void)presentDetailViewForInvitationView:(id)arg1 animated:(bool)arg2;
- (id)previewViewControllerAtLocation:(struct CGPoint { double x1; double x2; })arg1 fromSourceView:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setInvitation:(id)arg1;
- (void)setInvitationGadgetDelegate:(id)arg1;
- (void)setObjectID:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (bool)supportsHighlighting;
- (id)targetPreviewViewForLocation:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)uniqueGadgetIdentifier;
- (void)userDidSelectGadget;
- (id)workflowPresenter;

@end
