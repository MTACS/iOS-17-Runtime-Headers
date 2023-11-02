
@interface PREditingFontPickerCellView : PREditingPickerCellView {
    UIFont * _contentFont;
    NSString * _contentText;
    NSLayoutConstraint * _heightCellConstraint;
    bool  _usingSmallerSizing;
    NSLayoutConstraint * _widthCellConstraint;
}

@property (nonatomic, retain) UIFont *contentFont;
@property (nonatomic, retain) NSString *contentText;
@property (nonatomic, retain) NSLayoutConstraint *heightCellConstraint;
@property (getter=isUsingSmallerSizing, nonatomic) bool usingSmallerSizing;
@property (nonatomic, retain) NSLayoutConstraint *widthCellConstraint;

+ (struct CGSize { double x1; double x2; })defaultCellSizeUsingSmallerSizing:(bool)arg1;
+ (Class)fontPickerCellViewClassForRole:(id)arg1;

- (void).cxx_destruct;
- (void)_refreshHeightConstraint;
- (void)_refreshWidthConstraint;
- (struct CGSize { double x1; double x2; })cellSize;
- (void)configureWithAttributedString:(id)arg1;
- (void)configureWithFont:(id)arg1 text:(id)arg2;
- (id)contentFont;
- (id)contentText;
- (id)heightCellConstraint;
- (bool)isUsingSmallerSizing;
- (void)setContentFont:(id)arg1;
- (void)setContentText:(id)arg1;
- (void)setHeightCellConstraint:(id)arg1;
- (void)setUsingSmallerSizing:(bool)arg1;
- (void)setWidthCellConstraint:(id)arg1;
- (id)widthCellConstraint;

@end
