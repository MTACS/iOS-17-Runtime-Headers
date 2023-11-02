
@interface _SFReportTranslationIssueCell : UICollectionViewListCell {
    UICellAccessory * _cellAccessoryCheckmark;
}

@property (nonatomic) bool checked;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (bool)checked;
- (void)setChecked:(bool)arg1;
- (void)setUpTranslationIssueCellWithString:(id)arg1;
- (void)updateConfigurationUsingState:(id)arg1;

@end
