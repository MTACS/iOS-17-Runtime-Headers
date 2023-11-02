
@interface LibraryItemController : NSObject {
    NSString * _accessibilityIdentifier;
    LibraryConfiguration * _configuration;
    bool  _isHidden;
    bool  _isSelected;
    LibrarySectionController * _sectionController;
    UISwipeActionsConfiguration * _swipeActionsConfiguration;
}

@property (nonatomic, readonly, copy) NSString *accessibilityIdentifier;
@property (nonatomic, readonly, copy) NSArray *accessories;
@property (nonatomic, readonly) LibraryConfiguration *configuration;
@property (nonatomic, readonly) NSArray *dragItems;
@property (getter=isExpanded, nonatomic, readonly) bool expanded;
@property (nonatomic, readonly) bool hasSubitems;
@property (nonatomic, readonly) bool isHidden;
@property (nonatomic, readonly) bool isSelected;
@property (nonatomic, readonly) bool isSpringLoaded;
@property (readonly) LibrarySectionController *sectionController;
@property (nonatomic, readonly) bool selectionFollowsFocus;
@property (nonatomic, readonly) bool shouldPersistSelection;
@property (nonatomic, readonly) NSArray *subitems;
@property (nonatomic, retain) UISwipeActionsConfiguration *swipeActionsConfiguration;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (id)accessories;
- (id)configuration;
- (void)contentDidChange;
- (void)didDeselectItem;
- (void)didSelectItem;
- (id)dragItems;
- (long long)dropIntentForSession:(id)arg1;
- (unsigned long long)dropOperationForSession:(id)arg1;
- (bool)hasSubitems;
- (id)initWithConfiguration:(id)arg1 sectionController:(id)arg2;
- (bool)isExpanded;
- (bool)isHidden;
- (bool)isSelected;
- (bool)isSpringLoaded;
- (void)performDropWithProposal:(id)arg1 session:(id)arg2;
- (id)sectionController;
- (bool)selectionFollowsFocus;
- (void)setSwipeActionsConfiguration:(id)arg1;
- (bool)shouldPersistSelection;
- (id)subitems;
- (id)swipeActionsConfiguration;
- (void)updateListContentConfiguration:(id)arg1;
- (void)updateToolbarIfNeeded;
- (id)viewController;
- (void)willToggleExpansionState;

@end
