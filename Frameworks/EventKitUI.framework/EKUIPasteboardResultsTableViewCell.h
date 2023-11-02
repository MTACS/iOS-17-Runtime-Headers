
@interface EKUIPasteboardResultsTableViewCell : EKUIAutocompleteSearchResultCell {
    UILabel * _aggregateTextLabel;
    NSAttributedString * _aggregateTitle;
    NSArray * _cellConstraints;
    NSMutableArray * _colorDotViews;
    NSMutableArray * _eventCalendarColors;
    NSMutableArray * _eventTitles;
    NSMutableArray * _titleTextLabels;
    UILabel * _xMoreLabel;
}

+ (id)_aggregateTitleStringForAggregateResult:(id)arg1;
+ (id)_titleStringForResult:(id)arg1;
+ (double)cellHeightForResult:(id)arg1 forWidth:(double)arg2;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setLabelFonts;
- (void)setupConstraints;
- (void)updateWithResult:(id)arg1;

@end
