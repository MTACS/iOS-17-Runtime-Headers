
@interface PKPayLaterIconTextRow : NSObject <PKPayLaterDashboardIconRow> {
    unsigned long long  _accessory;
    UIFont * _amountFont;
    NSString * _amountText;
    UIColor * _amountTextColor;
    UIImage * _icon;
    NSString * _identifier;
    unsigned long long  _maskType;
    double  _minimumHeight;
    UIFont * _primaryFont;
    NSString * _primaryText;
    UIColor * _primaryTextColor;
    UIFont * _secondaryFont;
    NSString * _secondaryText;
    UIColor * _secondaryTextColor;
    id /* block */  _selectionHandler;
    UIFont * _tertiaryFont;
    NSString * _tertiaryText;
    UIColor * _tertiaryTextColor;
}

@property (nonatomic) unsigned long long accessory;
@property (nonatomic, retain) UIFont *amountFont;
@property (nonatomic, copy) NSString *amountText;
@property (nonatomic, retain) UIColor *amountTextColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic) unsigned long long maskType;
@property (nonatomic) double minimumHeight;
@property (nonatomic, retain) UIFont *primaryFont;
@property (nonatomic, copy) NSString *primaryText;
@property (nonatomic, retain) UIColor *primaryTextColor;
@property (nonatomic, retain) UIFont *secondaryFont;
@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, retain) UIColor *secondaryTextColor;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIFont *tertiaryFont;
@property (nonatomic, copy) NSString *tertiaryText;
@property (nonatomic, retain) UIColor *tertiaryTextColor;

+ (id)rowConfiguredForDisputeLayoutWithFinancingPlan:(id)arg1 payment:(id)arg2 selectionHandler:(id /* block */)arg3;

- (void).cxx_destruct;
- (unsigned long long)accessory;
- (id)amountFont;
- (id)amountText;
- (id)amountTextColor;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (void)handleCellSelectionWithContinueBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)icon;
- (id)identifier;
- (id)initWithPrimaryTitle:(id)arg1 identifier:(id)arg2 selectionHandler:(id /* block */)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)maskType;
- (double)minimumHeight;
- (id)primaryFont;
- (id)primaryText;
- (id)primaryTextColor;
- (id)secondaryFont;
- (id)secondaryText;
- (id)secondaryTextColor;
- (void)setAccessory:(unsigned long long)arg1;
- (void)setAmountFont:(id)arg1;
- (void)setAmountText:(id)arg1;
- (void)setAmountTextColor:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setMaskType:(unsigned long long)arg1;
- (void)setMinimumHeight:(double)arg1;
- (void)setPrimaryFont:(id)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setPrimaryTextColor:(id)arg1;
- (void)setSecondaryFont:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (void)setSecondaryTextColor:(id)arg1;
- (void)setTertiaryFont:(id)arg1;
- (void)setTertiaryText:(id)arg1;
- (void)setTertiaryTextColor:(id)arg1;
- (bool)shouldHighlightItem;
- (id)tertiaryFont;
- (id)tertiaryText;
- (id)tertiaryTextColor;

@end
