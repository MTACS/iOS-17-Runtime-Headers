
@interface PUImportSectionedGridLayout : PUSectionedGridLayout {
    bool  _delegateSupportsPerSectionHighlight;
    UIColor * _emphasizedSectionBackgroundColor;
    UIColor * _emphasizedSectionBottomStrokeColor;
    double  _emphasizedSectionBottomStrokeWidth;
    NSMutableDictionary * _preUpdateSectionDecorationAttributesBySection;
    NSMutableDictionary * _sectionDecorationAttributesBySection;
    NSArray * _sectionIndexPathsBeingDeleted;
}

@property (nonatomic) <PUImportSectionedGridLayoutDelegate> *delegate;
@property (nonatomic, retain) UIColor *emphasizedSectionBackgroundColor;
@property (nonatomic, retain) UIColor *emphasizedSectionBottomStrokeColor;
@property (nonatomic) double emphasizedSectionBottomStrokeWidth;
@property (nonatomic, retain) NSMutableDictionary *preUpdateSectionDecorationAttributesBySection;
@property (nonatomic, retain) NSMutableDictionary *sectionDecorationAttributesBySection;
@property (nonatomic, retain) NSArray *sectionIndexPathsBeingDeleted;

+ (Class)layoutAttributesClass;

- (void).cxx_destruct;
- (id)createLayoutAttributesForSectionBackgroundAtSection:(unsigned long long)arg1;
- (id)emphasizedSectionBackgroundColor;
- (id)emphasizedSectionBottomStrokeColor;
- (double)emphasizedSectionBottomStrokeWidth;
- (void)finalizeCollectionViewUpdates;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)arg1;
- (id)init;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)preUpdateSectionDecorationAttributesBySection;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (void)recreateSectionDecorationAttributes;
- (id)sectionDecorationAttributesBySection;
- (id)sectionIndexPathsBeingDeleted;
- (void)setDelegate:(id)arg1;
- (void)setEmphasizedSectionBackgroundColor:(id)arg1;
- (void)setEmphasizedSectionBottomStrokeColor:(id)arg1;
- (void)setEmphasizedSectionBottomStrokeWidth:(double)arg1;
- (void)setPreUpdateSectionDecorationAttributesBySection:(id)arg1;
- (void)setSectionDecorationAttributesBySection:(id)arg1;
- (void)setSectionIndexPathsBeingDeleted:(id)arg1;

@end
