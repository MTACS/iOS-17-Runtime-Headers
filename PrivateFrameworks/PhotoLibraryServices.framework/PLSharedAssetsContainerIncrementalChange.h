
@interface PLSharedAssetsContainerIncrementalChange : NSObject <NSSecureCoding> {
    long long  _collectionChangeType;
    bool  _hasNoOtherAssetChangesRequiringMomentGeneration;
    NSArray * _highlightContainerChanges;
    unsigned char  _mediaType;
    long long  _sharingChange;
    unsigned char  _suggestionStateChange;
}

@property (nonatomic) long long collectionChangeType;
@property (nonatomic) bool hasNoOtherAssetChangesRequiringMomentGeneration;
@property (nonatomic, retain) NSArray *highlightContainerChanges;
@property (nonatomic) unsigned char mediaType;
@property (nonatomic) long long sharingChange;
@property (nonatomic) unsigned char suggestionStateChange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addHighlightContainerChange:(id)arg1 sourceHighlightID:(id)arg2 destinationHighlightID:(id)arg3;
- (long long)collectionChangeType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasChanges;
- (bool)hasChangesAffectingSharingComposition;
- (bool)hasNoOtherAssetChangesRequiringMomentGeneration;
- (bool)hasSharingChanges;
- (bool)hasSharingOrSuggestionChanges;
- (bool)hasSuggestionChanges;
- (unsigned long long)hash;
- (id)highlightContainerChanges;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned char)mediaType;
- (void)mergeChangesFrom:(id)arg1;
- (void)setCollectionChangeType:(long long)arg1;
- (void)setHasNoOtherAssetChangesRequiringMomentGeneration:(bool)arg1;
- (void)setHighlightContainerChanges:(id)arg1;
- (void)setMediaType:(unsigned char)arg1;
- (void)setSharingChange:(long long)arg1;
- (void)setSuggestionStateChange:(unsigned char)arg1;
- (long long)sharingChange;
- (unsigned char)suggestionStateChange;

@end
