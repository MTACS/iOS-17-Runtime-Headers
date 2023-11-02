
@interface PXSAInboxDetailViewControllerProvider : NSObject <PXInboxModelDetailViewControllerProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_sharedAlbumViewControllerForSectionInfo:(id)arg1 fromViewController:(id)arg2;
- (void)navigateToInboxModel:(id)arg1 inSharedAlbumActivityFeedViewController:(id)arg2;
- (long long)presentationTypeForInboxModel:(id)arg1;
- (id)viewControllerForInboxModel:(id)arg1 fromViewController:(id)arg2;

@end
