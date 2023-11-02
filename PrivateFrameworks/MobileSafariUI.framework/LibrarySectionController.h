
@interface LibrarySectionController : NSObject {
    LibraryConfiguration * _configuration;
    <LibraryContentObserver> * _contentObserver;
    NSArray * _itemControllers;
    UIViewController * _presentingViewController;
    NSString * _title;
}

@property (nonatomic, readonly) LibraryConfiguration *configuration;
@property <LibraryContentObserver> *contentObserver;
@property (nonatomic, readonly) NSArray *filteredItemControllers;
@property (nonatomic, readonly) NSArray *itemControllers;
@property UIViewController *presentingViewController;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)configuration;
- (void)contentDidChange;
- (id)contentObserver;
- (id)filteredItemControllers;
- (id)initWithConfiguration:(id)arg1;
- (id)itemControllerToHandleDropItemsFromSession:(id)arg1 withProposedDestinationItemController:(id)arg2 atIndex:(long long)arg3;
- (id)itemControllers;
- (id)presentingViewController;
- (void)registerItemsWithRegistration:(id)arg1;
- (void)setContentObserver:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (id)title;
- (void)updateToolbarIfNeeded;

@end
