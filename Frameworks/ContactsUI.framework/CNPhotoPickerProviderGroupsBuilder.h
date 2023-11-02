
@interface CNPhotoPickerProviderGroupsBuilder : NSObject {
    <AVTAvatarStore> * _avatarStore;
    CNContactViewCache * _contactViewCache;
    CNUIContactsEnvironment * _environment;
    bool  _includeAddAnimojiItem;
    bool  _includeAddEmojiItem;
    bool  _includeAnimoji;
    bool  _includeContactImage;
    bool  _includeFaces;
    bool  _includeMonograms;
    bool  _includePhotoFromLibraryItem;
    bool  _includeRecents;
    bool  _includeTakePhotoItem;
    bool  _includeUnifiedContactImages;
    bool  _includesEmojiContent;
    bool  _shouldOrderEmojiBeforeAnimoji;
    CNVisualIdentity * _visualIdentity;
}

@property (nonatomic, readonly) <AVTAvatarStore> *avatarStore;
@property (nonatomic, readonly) CNContactViewCache *contactViewCache;
@property (nonatomic, readonly) CNUIContactsEnvironment *environment;
@property (nonatomic) bool includeAddAnimojiItem;
@property (nonatomic) bool includeAddEmojiItem;
@property (nonatomic) bool includeAnimoji;
@property (nonatomic) bool includeContactImage;
@property (nonatomic) bool includeFaces;
@property (nonatomic) bool includeMonograms;
@property (nonatomic) bool includePhotoFromLibraryItem;
@property (nonatomic) bool includeRecents;
@property (nonatomic) bool includeTakePhotoItem;
@property (nonatomic) bool includeUnifiedContactImages;
@property (nonatomic, readonly) bool includesAnyPhotoContent;
@property (nonatomic) bool includesEmojiContent;
@property (nonatomic) bool shouldOrderEmojiBeforeAnimoji;
@property (nonatomic, readonly) CNVisualIdentity *visualIdentity;

+ (id)builderWithVisualIdentity:(id)arg1 avatarStore:(id)arg2 environment:(id)arg3 contactViewCache:(id)arg4 photoPickerConfiguration:(id)arg5;

- (void).cxx_destruct;
- (id)addItemsContentGroup;
- (id)animojiContentGroup;
- (id)avatarStore;
- (id)build;
- (id)contactViewCache;
- (id)emojiContentGroup;
- (id)environment;
- (bool)includeAddAnimojiItem;
- (bool)includeAddEmojiItem;
- (bool)includeAnimoji;
- (bool)includeContactImage;
- (bool)includeFaces;
- (bool)includeMonograms;
- (bool)includePhotoFromLibraryItem;
- (bool)includeRecents;
- (bool)includeTakePhotoItem;
- (bool)includeUnifiedContactImages;
- (bool)includesAnyPhotoContent;
- (bool)includesEmojiContent;
- (id)initWithVisualIdentity:(id)arg1 avatarStore:(id)arg2 environment:(id)arg3 contactViewCache:(id)arg4;
- (id)injectedItemsGroup;
- (id)photoContentGroup;
- (void)setIncludeAddAnimojiItem:(bool)arg1;
- (void)setIncludeAddEmojiItem:(bool)arg1;
- (void)setIncludeAnimoji:(bool)arg1;
- (void)setIncludeContactImage:(bool)arg1;
- (void)setIncludeFaces:(bool)arg1;
- (void)setIncludeMonograms:(bool)arg1;
- (void)setIncludePhotoFromLibraryItem:(bool)arg1;
- (void)setIncludeRecents:(bool)arg1;
- (void)setIncludeTakePhotoItem:(bool)arg1;
- (void)setIncludeUnifiedContactImages:(bool)arg1;
- (void)setIncludesEmojiContent:(bool)arg1;
- (void)setShouldOrderEmojiBeforeAnimoji:(bool)arg1;
- (bool)shouldOrderEmojiBeforeAnimoji;
- (id)visualIdentity;

@end
