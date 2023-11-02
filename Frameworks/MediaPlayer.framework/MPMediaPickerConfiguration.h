
@interface MPMediaPickerConfiguration : NSObject <NSSecureCoding> {
    bool  _allowsPickingMultipleItems;
    bool  _alwaysShowSearchBarInLibrary;
    bool  _automaticallyDrillsToLibrary;
    unsigned long long  _mediaTypes;
    bool  _pickingForExternalPlayer;
    bool  _picksSingleCollectionEntity;
    MPPlaybackArchiveConfiguration * _playbackArchiveConfiguration;
    NSString * _prompt;
    long long  _selectionMode;
    bool  _showsCloudItems;
    bool  _showsItemsWithProtectedAssets;
    long long  _supportedContentOptions;
    NSArray * _typeIdentifiers;
    unsigned int  _watchCompatibilityVersion;
}

@property (nonatomic) bool allowsPickingMultipleItems;
@property (nonatomic) bool alwaysShowSearchBarInLibrary;
@property (nonatomic) bool automaticallyDrillsToLibrary;
@property (nonatomic) unsigned long long mediaTypes;
@property (nonatomic) bool pickingForExternalPlayer;
@property (nonatomic) bool picksSingleCollectionEntity;
@property (nonatomic, retain) MPPlaybackArchiveConfiguration *playbackArchiveConfiguration;
@property (nonatomic, copy) NSString *prompt;
@property (nonatomic) long long selectionMode;
@property (nonatomic) bool showsCatalogContent;
@property (nonatomic) bool showsCloudItems;
@property (nonatomic) bool showsItemsWithProtectedAssets;
@property (nonatomic) bool showsLibraryContent;
@property (nonatomic) long long supportedContentOptions;
@property (nonatomic) bool supportsUnavailableContent;
@property (nonatomic, copy) NSArray *typeIdentifiers;
@property (nonatomic) unsigned int watchCompatibilityVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsPickingMultipleItems;
- (bool)alwaysShowSearchBarInLibrary;
- (bool)automaticallyDrillsToLibrary;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)mediaTypes;
- (bool)pickingForExternalPlayer;
- (bool)picksSingleCollectionEntity;
- (id)playbackArchiveConfiguration;
- (id)prompt;
- (long long)selectionMode;
- (void)setAllowsPickingMultipleItems:(bool)arg1;
- (void)setAlwaysShowSearchBarInLibrary:(bool)arg1;
- (void)setAutomaticallyDrillsToLibrary:(bool)arg1;
- (void)setMediaTypes:(unsigned long long)arg1;
- (void)setPickingForExternalPlayer:(bool)arg1;
- (void)setPicksSingleCollectionEntity:(bool)arg1;
- (void)setPlaybackArchiveConfiguration:(id)arg1;
- (void)setPrompt:(id)arg1;
- (void)setSelectionMode:(long long)arg1;
- (void)setShowsCatalogContent:(bool)arg1;
- (void)setShowsCloudItems:(bool)arg1;
- (void)setShowsItemsWithProtectedAssets:(bool)arg1;
- (void)setShowsLibraryContent:(bool)arg1;
- (void)setSupportedContentOptions:(long long)arg1;
- (void)setSupportsUnavailableContent:(bool)arg1;
- (void)setTypeIdentifiers:(id)arg1;
- (void)setWatchCompatibilityVersion:(unsigned int)arg1;
- (bool)showsCatalogContent;
- (bool)showsCloudItems;
- (bool)showsItemsWithProtectedAssets;
- (bool)showsLibraryContent;
- (long long)supportedContentOptions;
- (bool)supportsUnavailableContent;
- (id)typeIdentifiers;
- (unsigned int)watchCompatibilityVersion;

@end
