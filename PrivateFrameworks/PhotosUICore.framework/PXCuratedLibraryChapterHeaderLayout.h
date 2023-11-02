
@interface PXCuratedLibraryChapterHeaderLayout : PXGLayout <PXChangeObserver, PXGNamedImageSource, PXGStringSource> {
    long long  _alternateAppearanceFadeDirection;
    double  _alternateAppearanceFadeStartThresholdDistance;
    PXNumberAnimator * _alternateAppearanceMixAnimator;
    PXAssetCollectionReference * _assetCollectionReference;
    long long  _asyncDateGeneration;
    NSObject<OS_dispatch_queue> * _asyncDateQueue;
    NSAttributedString * _attributedTitle;
    struct CGSize { 
        double width; 
        double height; 
    }  _attributedTitleSize;
    NSMutableIndexSet * _axSpriteIndexes;
    struct CGSize { 
        double width; 
        double height; 
    }  _chevronSize;
    unsigned short  _chevronVersion;
    NSAttributedString * _floatingAttributedTitle;
    NSDictionary * _floatingTitleDeemphasizedAttributes;
    NSDictionary * _floatingTitleEmphasizedAttributes;
    NSArray * _itemIdentifierBySpriteIndex;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _padding;
    bool  _presentedAlternateAppearance;
    NSString * _rawTitle;
    struct PXSimpleIndexPath { 
        long long dataSourceIdentifier; 
        long long section; 
        long long item; 
        long long subitem; 
    }  _sectionIndexPath;
    PXCuratedLibraryChapterHeaderLayoutSpec * _spec;
    NSDictionary * _titleDeemphasizedAttributes;
    NSDictionary * _titleEmphasizedAttributes;
    unsigned short  _titleVersion;
    struct { 
        unsigned long long needsUpdate; 
        unsigned long long updated; 
        bool isPerformingUpdate; 
        bool willPerformUpdate; 
    }  _updateFlags;
}

@property (nonatomic, readonly) PXNumberAnimator *alternateAppearanceMixAnimator;
@property (nonatomic, retain) PXAssetCollectionReference *assetCollectionReference;
@property (nonatomic, readonly) NSAttributedString *attributedTitle;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } attributedTitleSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSAttributedString *floatingAttributedTitle;
@property (nonatomic, copy) NSDictionary *floatingTitleDeemphasizedAttributes;
@property (nonatomic, copy) NSDictionary *floatingTitleEmphasizedAttributes;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } padding;
@property (nonatomic) bool presentedAlternateAppearance;
@property (nonatomic, copy) NSString *rawTitle;
@property (nonatomic) struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; } sectionIndexPath;
@property (nonatomic, retain) PXCuratedLibraryChapterHeaderLayoutSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *titleDeemphasizedAttributes;
@property (nonatomic, copy) NSDictionary *titleEmphasizedAttributes;

- (void).cxx_destruct;
- (id)_createAttributedTitleWithEmphasizedAttributes:(id)arg1 deemphasizedAttributes:(id)arg2;
- (void)_handleAsyncRawTitle:(id)arg1 generation:(long long)arg2;
- (void)_invalidateAttributedTitle;
- (void)_invalidateChevron;
- (void)_updateSprites;
- (void)_updateTitle;
- (id)alternateAppearanceMixAnimator;
- (id)assetCollectionReference;
- (id)attributedStringForSpriteAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)attributedTitle;
- (struct CGSize { double x1; double x2; })attributedTitleSize;
- (unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg1 inDirection:(unsigned long long)arg2;
- (id)axSpriteIndexes;
- (id)axSpriteIndexesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)displayScaleDidChange;
- (id)floatingAttributedTitle;
- (id)floatingTitleDeemphasizedAttributes;
- (id)floatingTitleEmphasizedAttributes;
- (id)hitTestResultForSpriteIndex:(unsigned int)arg1;
- (id)imageConfigurationAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })padding;
- (bool)presentedAlternateAppearance;
- (id)rawTitle;
- (void)referenceOptionsDidChange;
- (void)referenceSizeDidChange;
- (struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })sectionIndexPath;
- (void)setAssetCollectionReference:(id)arg1;
- (void)setFloatingTitleDeemphasizedAttributes:(id)arg1;
- (void)setFloatingTitleEmphasizedAttributes:(id)arg1;
- (void)setPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setPresentedAlternateAppearance:(bool)arg1;
- (void)setRawTitle:(id)arg1;
- (void)setSectionIndexPath:(struct PXSimpleIndexPath { long long x1; long long x2; long long x3; long long x4; })arg1;
- (void)setSpec:(id)arg1;
- (void)setTitleDeemphasizedAttributes:(id)arg1;
- (void)setTitleEmphasizedAttributes:(id)arg1;
- (id)spec;
- (id)stringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)stringAttributesAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (id)titleDeemphasizedAttributes;
- (id)titleEmphasizedAttributes;
- (void)update;
- (long long)verticalAlignmentForStringAtIndex:(unsigned int)arg1 inLayout:(id)arg2;
- (void)viewEnvironmentDidChange;
- (void)visibleRectDidChange;

@end
