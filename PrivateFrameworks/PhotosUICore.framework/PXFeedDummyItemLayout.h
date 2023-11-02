
@interface PXFeedDummyItemLayout : PXGLayout <PXGSolidColorSource, PXGStringSource> {
    unsigned int  _backgroundSpriteIndex;
    unsigned short  _contentVersion;
    id  _representedObject;
    unsigned int  _textSpriteIndex;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) id representedObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateContent;
- (void)_invalidateContentVersion;
- (void)_updateContent;
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)axSpriteIndexes;
- (id)colorAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)displayScaleDidChange;
- (id)init;
- (void)referenceSizeDidChange;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)update;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;

@end
