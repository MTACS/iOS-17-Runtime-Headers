
@interface CNAutocompleteSearchControllerOptions : NSObject <NSCopying> {
    NSNumber * _labelLeadingPadding;
    NSNumber * _labelTopPadding;
    NSNumber * _shouldAlwaysShowAddContactsButton;
    NSNumber * _shouldHideSeparator;
    NSNumber * _trailingButtonMidlineInsetFromLayoutMargin;
}

@property (nonatomic, retain) NSNumber *labelLeadingPadding;
@property (nonatomic, retain) NSNumber *labelTopPadding;
@property (nonatomic, retain) NSNumber *shouldAlwaysShowAddContactsButton;
@property (nonatomic, retain) NSNumber *shouldHideSeparator;
@property (nonatomic, retain) NSNumber *trailingButtonMidlineInsetFromLayoutMargin;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)labelLeadingPadding;
- (id)labelTopPadding;
- (void)setLabelLeadingPadding:(id)arg1;
- (void)setLabelTopPadding:(id)arg1;
- (void)setShouldAlwaysShowAddContactsButton:(id)arg1;
- (void)setShouldHideSeparator:(id)arg1;
- (void)setTrailingButtonMidlineInsetFromLayoutMargin:(id)arg1;
- (id)shouldAlwaysShowAddContactsButton;
- (id)shouldHideSeparator;
- (id)trailingButtonMidlineInsetFromLayoutMargin;

@end
