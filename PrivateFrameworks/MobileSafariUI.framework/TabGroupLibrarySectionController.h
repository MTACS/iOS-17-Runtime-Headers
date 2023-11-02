
@interface TabGroupLibrarySectionController : LibrarySectionController {
    bool  _showNamedGroups;
}

- (id)_allItemControllers;
- (id)initWithConfiguration:(id)arg1 forNamedGroups:(bool)arg2;
- (id)itemControllerToHandleDropItemsFromSession:(id)arg1 withProposedDestinationItemController:(id)arg2 atIndex:(long long)arg3;
- (id)itemControllers;

@end
