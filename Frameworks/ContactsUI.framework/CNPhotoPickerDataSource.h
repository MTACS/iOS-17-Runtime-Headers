
@interface CNPhotoPickerDataSource : NSObject <CNPhotoPickerProviderGroupDelegate> {
    NSIndexPath * _activePhotoIndexPath;
    bool  _allowsPhotoLibraryAccess;
    <AVTAvatarStore> * _avatarStore;
    CNContactViewCache * _contactViewCache;
    <CNPhotoPickerProviderGroupDelegate> * _delegate;
    NSArray * _emojiSuggestionItems;
    NSMutableArray * _groupIsCollapsedState;
    NSArray * _providerGroups;
    CNPhotoPickerVariantsManager * _variantsManager;
    CNVisualIdentity * _visualIdentity;
}

@property (nonatomic, retain) NSIndexPath *activePhotoIndexPath;
@property (nonatomic) bool allowsPhotoLibraryAccess;
@property (nonatomic, readonly) <AVTAvatarStore> *avatarStore;
@property (nonatomic, readonly) CNContactViewCache *contactViewCache;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNPhotoPickerProviderGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *emojiSuggestionItems;
@property (nonatomic, retain) NSMutableArray *groupIsCollapsedState;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long itemsPerRow;
@property (nonatomic, readonly) NSArray *providerGroups;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CNPhotoPickerVariantsManager *variantsManager;
@property (nonatomic, retain) CNVisualIdentity *visualIdentity;

+ (id)avatarStore;

- (void).cxx_destruct;
- (id)actionTitleForSection:(long long)arg1;
- (id)activePhotoIndexPath;
- (bool)allowsPhotoLibraryAccess;
- (id)avatarStore;
- (id)contactViewCache;
- (id)delegate;
- (id)emojiSuggestionItems;
- (id)findActiveIndexPathInGroup:(id)arg1 withImageData:(id)arg2;
- (id)groupIsCollapsedState;
- (id)indexOfAddedItem:(id)arg1 inGroupOfType:(long long)arg2;
- (id)indexPathsToReloadForUpdatedGroup:(id)arg1;
- (id)initWithVisualIdentity:(id)arg1 contactViewCache:(id)arg2 photoPickerConfiguration:(id)arg3;
- (id)initWithVisualIdentity:(id)arg1 contactViewCache:(id)arg2 providerGroups:(id)arg3 avatarStore:(id)arg4;
- (id)injectedItemsGroup;
- (bool)isItemAtIndexPathAddItem:(id)arg1;
- (unsigned long long)itemsPerRow;
- (unsigned long long)itemsPerRowForSection:(long long)arg1;
- (void)loadProviderGroupsItemsForSize:(struct CGSize { double x1; double x2; })arg1 itemsPerRow:(double)arg2 scale:(double)arg3 RTL:(bool)arg4;
- (id)monogramProviderDefaultItemWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)monogramProviderMonogramItemWithSize:(struct CGSize { double x1; double x2; })arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)photoPickerProviderGroup:(id)arg1 didUpdateItem:(id)arg2;
- (void)photoPickerProviderGroupDidUpdate:(id)arg1 requiresFullReload:(bool)arg2;
- (id)providerGroupAtIndexPath:(id)arg1;
- (id)providerGroupAtSection:(long long)arg1;
- (id)providerGroups;
- (id)providerItemAtIndexPath:(id)arg1;
- (id)removeItem:(id)arg1;
- (long long)sectionIndexForProviderGroup:(id)arg1;
- (long long)sectionIndexForProviderGroupType:(long long)arg1;
- (void)setActivePhotoIndexPath:(id)arg1;
- (void)setAllowsPhotoLibraryAccess:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmojiSuggestionItems:(id)arg1;
- (void)setGroupIsCollapsedState:(id)arg1;
- (void)setItemsPerRow:(unsigned long long)arg1;
- (void)setItemsPerRow:(unsigned long long)arg1 requiresFullReload:(bool)arg2;
- (void)setVisualIdentity:(id)arg1;
- (id)suggestionsGroup;
- (id)titleForSection:(long long)arg1;
- (id)uniqueEmojiSuggestionItems:(id)arg1;
- (void)updateGroupCollapsedStateForSection:(long long)arg1;
- (id)variantsManager;
- (id)visualIdentity;

@end
