
@interface PREditorNumberingSystemViewController : UIViewController {
    struct CGSize { 
        double width; 
        double height; 
    }  _cellSize;
    NSArray * _cellViews;
    double  _configuredViewWidth;
    <PREditorNumberingSystemViewControllerDelegate> * _delegate;
    UIFont * _font;
    NSArray * _heightCellConstraints;
    double  _largestItemHeight;
    NSDictionary * _numberSystemImages;
    PREditingPickerLabeledCellView * _selectedCellView;
    NSString * _selectedNumberingSystem;
    NSLayoutConstraint * _stackViewLeadingConstraint;
    NSLayoutConstraint * _stackViewTrailingConstraint;
    bool  _usingSmallerSizing;
    NSArray * _widthCellConstraints;
}

@property (nonatomic) struct CGSize { double x1; double x2; } cellSize;
@property (nonatomic, retain) NSArray *cellViews;
@property (nonatomic) double configuredViewWidth;
@property (nonatomic) <PREditorNumberingSystemViewControllerDelegate> *delegate;
@property (nonatomic, readonly, copy) NSLocale *displayLocale;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, copy) NSArray *heightCellConstraints;
@property (nonatomic) double largestItemHeight;
@property (nonatomic, retain) NSDictionary *numberSystemImages;
@property (nonatomic, retain) PREditingPickerLabeledCellView *selectedCellView;
@property (nonatomic, copy) NSString *selectedNumberingSystem;
@property (nonatomic, retain) NSLayoutConstraint *stackViewLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *stackViewTrailingConstraint;
@property (getter=isUsingSmallerSizing, nonatomic) bool usingSmallerSizing;
@property (nonatomic, copy) NSArray *widthCellConstraints;

+ (id)allNumberingSystems;
+ (id)displayFontForFont:(id)arg1;
+ (id)displayNameForNumberingSystem:(id)arg1;
+ (id)systemNumberingSystem;

- (void).cxx_destruct;
- (id)baseContentStringForLocale:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSize;
- (id)cellViews;
- (double)configuredViewWidth;
- (id)contentStringForFont:(id)arg1 locale:(id)arg2;
- (id)delegate;
- (void)didSelectNumberingSystem:(id)arg1;
- (id)displayFont;
- (id)displayLocale;
- (double)estimatedHeight;
- (id)font;
- (id)heightCellConstraints;
- (id)initWithSelectedNumberingSystem:(id)arg1 selectedFont:(id)arg2;
- (bool)isUsingSmallerSizing;
- (double)largestItemHeight;
- (id)localeWithNumberingSystem:(id)arg1;
- (id)numberSystemImages;
- (id)selectedCellView;
- (id)selectedNumberingSystem;
- (void)setCellSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setCellViews:(id)arg1;
- (void)setConfiguredViewWidth:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setHeightCellConstraints:(id)arg1;
- (void)setLargestItemHeight:(double)arg1;
- (void)setNumberSystemImages:(id)arg1;
- (void)setSelectedCellView:(id)arg1;
- (void)setSelectedNumberingSystem:(id)arg1;
- (void)setStackViewLeadingConstraint:(id)arg1;
- (void)setStackViewTrailingConstraint:(id)arg1;
- (void)setUsingSmallerSizing:(bool)arg1;
- (void)setWidthCellConstraints:(id)arg1;
- (id)stackViewLeadingConstraint;
- (id)stackViewTrailingConstraint;
- (void)updateLayoutForCurrentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)widthCellConstraints;

@end
