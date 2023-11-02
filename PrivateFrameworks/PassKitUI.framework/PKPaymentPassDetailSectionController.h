
@interface PKPaymentPassDetailSectionController : NSObject <PKTableViewSectionController> {
    unsigned long long  _currentSegment;
    UIColor * _detailTextColor;
    long long  _detailViewStyle;
    UIColor * _highlightColor;
    UIColor * _linkTextColor;
    UIColor * _primaryTextColor;
    UIColor * _warningTextColor;
}

@property (nonatomic, readonly) NSArray *allSectionIdentifiers;
@property (nonatomic) unsigned long long currentSegment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIColor *detailTextColor;
@property (nonatomic) long long detailViewStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIColor *highlightColor;
@property (nonatomic, retain) UIColor *linkTextColor;
@property (nonatomic, retain) UIColor *primaryTextColor;
@property (nonatomic, readonly) NSArray *sectionIdentifiers;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIColor *warningTextColor;

+ (bool)validForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (void)_applyDefaultDynamicStylingToCell:(id)arg1;
- (void)_applyDefaultStaticStylingToCell:(id)arg1;
- (id)allSectionIdentifiers;
- (id)checkmarkCellWithText:(id)arg1 forTableView:(id)arg2;
- (unsigned long long)currentSegment;
- (id)defaultCellWithTextColor:(id)arg1 forTableView:(id)arg2;
- (id)detailTextColor;
- (long long)detailViewStyle;
- (id)disabledCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)disclosureCellWithTitle:(id)arg1 forTableView:(id)arg2;
- (id)highlightColor;
- (id)imageViewCellForImage:(id)arg1 contentMode:(long long)arg2 forTableView:(id)arg3;
- (id)infoCellWithDescription:(id)arg1 forTableView:(id)arg2;
- (id)infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4;
- (id)infoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 reuseIdentifier:(id)arg4 forTableView:(id)arg5;
- (id)init;
- (id)linkCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)linkTextColor;
- (void)preflight:(id /* block */)arg1;
- (id)primaryTextColor;
- (void)reportPassDetailsAnalyticsForTappedButtonTag:(id)arg1 additionalAnalytics:(id)arg2 pass:(id)arg3;
- (void)reportPassDetailsAnalyticsForTappedRowTag:(id)arg1 additionalAnalytics:(id)arg2 pass:(id)arg3;
- (void)reportPassDetailsAnalyticsForToggleTag:(id)arg1 toggleResult:(bool)arg2 additionalAnalytics:(id)arg3 pass:(id)arg4;
- (id)sectionIdentifiers;
- (void)setCurrentSegment:(unsigned long long)arg1;
- (void)setDetailTextColor:(id)arg1;
- (void)setDetailViewStyle:(long long)arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setLinkTextColor:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setWarningTextColor:(id)arg1;
- (id)settingsTableCellWithTitle:(id)arg1 action:(SEL)arg2 setOn:(bool)arg3 enabled:(bool)arg4;
- (void)showSpinner:(bool)arg1 inCell:(id)arg2 detailText:(id)arg3;
- (void)showSpinner:(bool)arg1 inCell:(id)arg2 overrideTextColor:(id)arg3;
- (id)spinnerCellForTableView:(id)arg1;
- (id)stackedInfoCellWithPrimaryText:(id)arg1 detailText:(id)arg2 cellStyle:(long long)arg3 forTableView:(id)arg4;
- (id)subtitleCellForTableView:(id)arg1;
- (id)switchCellWithText:(id)arg1 forTableView:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;
- (id)textFieldTableCellWithTitle:(id)arg1 textValue:(id)arg2 action:(SEL)arg3 keyboardType:(long long)arg4;
- (id)value1CellWithTextColor:(id)arg1 forTableView:(id)arg2;
- (id)warningTextColor;

@end
