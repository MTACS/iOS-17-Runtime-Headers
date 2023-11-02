
@interface PXSharedAlbumInvitationGadget : UIViewController <PXGadget, PXSettingsKeyObserver, PXSharedAlbumInvitationViewDelegate> {
    <PXGadgetDelegate> * _delegate;
    PXGadgetSpec * _gadgetSpec;
    PXSharedAlbumHeaderView * _headerView;
    PXFeedInvitationSectionInfo * _invitationSectionInfo;
    PXSharedAlbumInvitationView * _invitationView;
    bool  _loadedContentData;
    long long  _priority;
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
@property (nonatomic, retain) PXSharedAlbumHeaderView *headerView;
@property (nonatomic, retain) PXFeedInvitationSectionInfo *invitationSectionInfo;
@property (nonatomic, retain) PXSharedAlbumInvitationView *invitationView;
@property (nonatomic) bool loadedContentData;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic) long long priority;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleContentRect;
@property (nonatomic, readonly) bool wantsMultilineTitle;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (void)preloadResources;

- (void).cxx_destruct;
- (void)_attemptToNavigateToSharedAlbum:(id)arg1 hostingViewController:(id)arg2;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (struct CGSize { double x1; double x2; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateSubviewFrames:(bool)arg2;
- (void)_updateInvitationView;
- (id)contentViewController;
- (void)dealloc;
- (id)delegate;
- (unsigned long long)gadgetCapabilities;
- (id)gadgetSpec;
- (unsigned long long)gadgetType;
- (id)headerView;
- (id)init;
- (id)invitationSectionInfo;
- (id)invitationView;
- (bool)loadedContentData;
- (long long)priority;
- (void)setDelegate:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setInvitationSectionInfo:(id)arg1;
- (void)setInvitationView:(id)arg1;
- (void)setLoadedContentData:(bool)arg1;
- (void)setPriority:(long long)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (void)sharedAlbumInvitationView:(id)arg1 didAccept:(bool)arg2;
- (void)sharedAlbumInvitationView:(id)arg1 presentViewController:(id)arg2;
- (void)sharedAlbumInvitationViewDidReportAsJunk:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)uniqueGadgetIdentifier;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (id)px_gridPresentation;

@end
