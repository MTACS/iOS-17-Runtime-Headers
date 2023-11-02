
@interface NDOLongValueCell : PSTableCell {
    NSArray * _constraints;
    UILabel * _primaryLabel;
    UILabel * _secondaryLabel;
    UIStackView * _stackView;
}

@property (nonatomic, retain) NSArray *constraints;
@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) UIStackView *stackView;

- (void).cxx_destruct;
- (id)constraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)primaryLabel;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)secondaryLabel;
- (void)setConstraints:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setStackView:(id)arg1;
- (id)stackView;
- (void)updateConstraints;

@end
