
@interface CNWarningHeaderFooterView : CNContactTableViewHeaderFooterView {
    bool  _shouldDisplayWarningIcon;
    NSString * _warningText;
}

@property (nonatomic) bool shouldDisplayWarningIcon;
@property (nonatomic, retain) NSString *warningText;

+ (id)exclamationMark;

- (void).cxx_destruct;
- (void)setShouldDisplayWarningIcon:(bool)arg1;
- (void)setWarningText:(id)arg1;
- (bool)shouldDisplayWarningIcon;
- (id)warningAttributedText;
- (id)warningText;

@end
