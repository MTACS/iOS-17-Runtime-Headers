
@interface DOCTagsCollectionItemContentView : UIView <DOCTagsCollectionCellMenuTarget> {
    bool  _adjustsFontForContentSizeCategory;
    double  _cornerRadius;
    <DOCTagsCollectionItemContentViewDelegate> * _delegate;
    bool  _isMixed;
    double  _maxWidth;
    UILabel * _tagNameLabel;
    DOCTag * _tagValue;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <DOCTagsCollectionItemContentViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isMixed;
@property (nonatomic) double maxWidth;
@property (nonatomic, readonly) UIMenu *menuForContextMenuPresentation;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *tagNameLabel;
@property (nonatomic, copy) DOCTag *tagValue;

- (void).cxx_destruct;
- (id)_tagCollectionAppearance;
- (bool)adjustsFontForContentSizeCategory;
- (double)cornerRadius;
- (id)delegate;
- (id)fontForTagSizing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isMixed;
- (void)layoutSubviews;
- (double)maxWidth;
- (id)menuForContextMenuPresentation;
- (void)removeTag:(id)arg1;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsMixed:(bool)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setTagValue:(id)arg1;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)tagNameLabel;
- (id)tagValue;
- (void)updateAttributedString;
- (void)updateColors;
- (void)updateForChangedTraitsAffectingFonts;
- (id)viewForLastBaselineLayout;

@end
