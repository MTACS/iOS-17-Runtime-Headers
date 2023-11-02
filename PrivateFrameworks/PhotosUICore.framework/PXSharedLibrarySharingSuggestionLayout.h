
@interface PXSharedLibrarySharingSuggestionLayout : PXGLayout <PXGDisplayAssetSource, PXGSolidColorSource, PXGStringSource> {
    unsigned short  _assetContentVersion;
    unsigned short  _badgeContentVersion;
    unsigned int  _badgeSpriteIndex;
    unsigned int  _contentSpriteIndex;
    double  _cornerRadius;
    unsigned short  _labelContentVersion;
    PXGTextLegibilityEffect * _legibilityEffect;
    <PXSharedLibrarySharingSuggestion> * _sharingSuggestion;
    NSDictionary * _subtitleAttributes;
    NSString * _subtitleThatFits;
    unsigned int  _textSpriteIndex;
    NSDictionary * _titleAttributes;
    NSDictionary * _titleAttributesWithoutSubtitle;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <PXSharedLibrarySharingSuggestion> *sharingSuggestion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateAssetContentVersion;
- (void)_invalidateBadgeContentVersion;
- (void)_invalidateContent;
- (void)_invalidateLabelContentVersion;
- (void)_invalidateSubtitleThatFits;
- (void)_updateContent;
- (void)_updateSubtitleThatFits;
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)axSpriteIndexes;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (double)cornerRadius;
- (unsigned long long)desiredPlaceholderStyleInLayout:(id)arg1;
- (id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange { unsigned int x1; unsigned int x2; })arg1 inLayout:(id)arg2;
- (void)displayScaleDidChange;
- (void)entityManagerDidChange;
- (id)gradientForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)init;
- (void)referenceSizeDidChange;
- (void)setCornerRadius:(double)arg1;
- (void)setSharingSuggestion:(id)arg1;
- (id)sharingSuggestion;
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)update;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (Class)viewClassForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)viewUserDataForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;

@end
