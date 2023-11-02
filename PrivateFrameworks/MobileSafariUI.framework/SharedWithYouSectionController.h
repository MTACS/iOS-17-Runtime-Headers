
@interface SharedWithYouSectionController : LibrarySectionController {
    CloudTabsLibraryItemController * _cloudTabsItemController;
    SharedWithYouLibraryItemController * _friendsItemController;
}

- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1;
- (id)itemControllers;
- (void)registerItemsWithRegistration:(id)arg1;
- (id)title;

@end
