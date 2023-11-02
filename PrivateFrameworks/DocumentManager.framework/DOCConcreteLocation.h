
@interface DOCConcreteLocation : NSObject <DOCLocation, NSSecureCoding> {
    bool  _canBeRestored;
    NSString * _composedTitleFormat;
    bool  _isFPV2;
    bool  _needsToResolveHierarchy;
    NSObject<DOCNode> * _node;
    NSString * _originalSourceIdentifier;
    NSString * _promptText;
    DOCTag * _representedTag;
    NSString * _sourceIdentifier;
    NSString * _title;
}

@property (readonly) NSSet *attachedTags;
@property bool canBeRestored;
@property (copy) NSString *composedTitleFormat;
@property (readonly, copy) NSString *displayName;
@property (readonly) FPItem *fileProviderItem;
@property (readonly) bool isContainer;
@property bool isFPV2;
@property (readonly) bool isRoot;
@property (readonly) bool isTaggedItemsSource;
@property (readonly) bool isTrash;
@property bool needsToResolveHierarchy;
@property (retain) NSObject<DOCNode> *node;
@property (copy) NSString *originalSourceIdentifier;
@property (copy) NSString *promptText;
@property (retain) DOCTag *representedTag;
@property (readonly) NSString *shortDescription;
@property (copy) NSString *sourceIdentifier;
@property (copy) NSString *title;

+ (id)browseStartingPointsLocation;
+ (id)defaultLocation;
+ (id)defaultSaveLocation;
+ (bool)disableWorkaroundFor88096763;
+ (id)emptyLocation;
+ (id)iCloudDriveLocation;
+ (id)recentDocumentsLocation;
+ (id)searchLocation;
+ (id)sharedItemsLocation;
+ (bool)supportsSecureCoding;
+ (id)trashedItemsLocation;

- (void).cxx_destruct;
- (id)attachedTags;
- (bool)canBeRestored;
- (id)composedTitleFormat;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)fileProviderItem;
- (id)fileProviderSourceDisplayName;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceIdentifier:(id)arg1 node:(id)arg2;
- (id)initWithSourceIdentifier:(id)arg1 title:(id)arg2;
- (id)initWithTaggedItemsSourceRepresentedTag:(id)arg1;
- (bool)isContainer;
- (bool)isEqual:(id)arg1;
- (bool)isFPV2;
- (bool)isRoot;
- (bool)isTaggedItemsSource;
- (bool)isTrash;
- (bool)needsToResolveHierarchy;
- (id)node;
- (id)originalSourceIdentifier;
- (id)placeholderLocation;
- (id)promptText;
- (id)representedTag;
- (void)setCanBeRestored:(bool)arg1;
- (void)setComposedTitleFormat:(id)arg1;
- (void)setIsFPV2:(bool)arg1;
- (void)setNeedsToResolveHierarchy:(bool)arg1;
- (void)setNode:(id)arg1;
- (void)setOriginalSourceIdentifier:(id)arg1;
- (void)setPromptText:(id)arg1;
- (void)setRepresentedTag:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)shortDescription;
- (id)sourceIdentifier;
- (id)title;
- (void)updateUnderlyingNodeToNode:(id)arg1;

@end
