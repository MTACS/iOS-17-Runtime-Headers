
@interface CPSPointsOfInterestPickerExtendedCell : CPSPointsOfInterestPickerCell {
    UILabel * _extendedInformativeLabel;
    UILabel * _extendedSubtitleLabel;
    UILabel * _extendedTitleLabel;
    NSString * _subtitle;
    NSString * _text;
    NSString * _title;
}

@property (nonatomic, retain) UILabel *extendedInformativeLabel;
@property (nonatomic, retain) UILabel *extendedSubtitleLabel;
@property (nonatomic, retain) UILabel *extendedTitleLabel;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *text;
@property (nonatomic, retain) NSString *title;

+ (id)identifier;

- (void).cxx_destruct;
- (id)extendedInformativeLabel;
- (id)extendedSubtitleLabel;
- (id)extendedTitleLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })safeAreaInsets;
- (void)setExtendedInformativeLabel:(id)arg1;
- (void)setExtendedSubtitleLabel:(id)arg1;
- (void)setExtendedTitleLabel:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setupViews;
- (id)subtitle;
- (id)text;
- (id)title;

@end
