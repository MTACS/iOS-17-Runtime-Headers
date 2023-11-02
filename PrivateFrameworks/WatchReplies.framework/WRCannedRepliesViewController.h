
@interface WRCannedRepliesViewController : PSListController {
    UIImage * _accessoryImage;
    PSSpecifier * _addNewSpecifier;
    unsigned long long  _category;
    UIImage * _highlightedAccessoryImage;
    WRCannedRepliesStore * _repliesStore;
    PSSpecifier * _smartRepliesSpecifier;
    bool  _supportedEnhancedEditing;
}

@property (nonatomic, readonly) unsigned long long category;

- (void).cxx_destruct;
- (void)_returnKeyPressed:(id)arg1;
- (void)addNewReply:(id)arg1;
- (id)cannedReplies;
- (id)cannedRepliesFromSpecifiers;
- (unsigned long long)category;
- (void)configureCellAccessoryImage:(id)arg1;
- (id)customReply:(id)arg1;
- (id)includeSmartReplies;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadRepliesStoreIfNeeded;
- (id)newCannedReplySpecifier;
- (unsigned long long)numberOfDefaultReplySpecifiers;
- (void)returnPressedAtEnd;
- (void)saveReplies;
- (void)setCustomReply:(id)arg1 specifier:(id)arg2;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setIncludeSmartReplies:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)updateEditDoneButton;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end