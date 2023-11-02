
@interface CPListTemplate : CPTemplate <CPBarButtonProviding, CPListClientTemplateDelegate> {
    CPAssistantCellConfiguration * _assistantCellConfiguration;
    <CPListTemplateDelegate> * _delegate;
    NSArray * _emptyViewSubtitleVariants;
    NSArray * _emptyViewTitleVariants;
    NSMutableSet * _itemsToReload;
    NSArray * _sections;
    NSString * _title;
}

@property (nonatomic, retain) CPAssistantCellConfiguration *assistantCellConfiguration;
@property (nonatomic, retain) CPBarButton *backButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPListTemplateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSArray *emptyViewSubtitleVariants;
@property (nonatomic, copy) NSArray *emptyViewTitleVariants;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long itemCount;
@property (nonatomic, retain) NSMutableSet *itemsToReload;
@property (nonatomic, retain) NSArray *leadingNavigationBarButtons;
@property (nonatomic, readonly) unsigned long long sectionCount;
@property (nonatomic, readonly, copy) NSArray *sections;
@property (readonly) Class superclass;
@property (nonatomic, retain) NAFuture *templateProviderFuture;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, retain) NSArray *trailingNavigationBarButtons;

+ (unsigned long long)maximumItemCount;
+ (unsigned long long)maximumSectionCount;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_itemForHostItemWithIdentifier:(id)arg1;
- (void)_linkItemsInSection:(id)arg1;
- (id)_sectionsByTrimmingAndLinkingSections:(id)arg1;
- (void)_setItemNeedsUpdate:(id)arg1;
- (id)assistantCellConfiguration;
- (id)delegate;
- (id)emptyViewSubtitleVariants;
- (id)emptyViewTitleVariants;
- (void)encodeWithCoder:(id)arg1;
- (void)handleActionForControlIdentifier:(id)arg1;
- (id)indexPathForItem:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 sections:(id)arg2;
- (id)initWithTitle:(id)arg1 sections:(id)arg2 assistantCellConfiguration:(id)arg3;
- (unsigned long long)itemCount;
- (id)itemsToReload;
- (void)listTemplateWithIdentifier:(id)arg1 didSelectImageAtIndex:(unsigned long long)arg2 inImageRowItemWithIdentifier:(id)arg3;
- (void)listTemplateWithIdentifier:(id)arg1 didSelectListItemWithIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)performUpdate;
- (unsigned long long)sectionCount;
- (id)sections;
- (void)setAssistantCellConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmptyViewSubtitleVariants:(id)arg1;
- (void)setEmptyViewTitleVariants:(id)arg1;
- (void)setItemsToReload:(id)arg1;
- (id)title;
- (void)updateHeaderImage:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)updateSections:(id)arg1;

@end
