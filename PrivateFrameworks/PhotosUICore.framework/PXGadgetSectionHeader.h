
@interface PXGadgetSectionHeader : PXObservable <PXMutableGadgetSectionHeader> {
    id /* block */  _accessoryButtonPressed;
    unsigned long long  _buttonType;
    NSString * _customButtonTitle;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    PXGadgetSpec * _gadgetSpec;
    unsigned long long  _headerStyle;
    NSString * _headerTitle;
    bool  _isFirstSection;
    bool  _shouldShowDividerOnFirstSection;
    bool  _wantsMultilineTitle;
}

@property (nonatomic, copy) id /* block */ accessoryButtonPressed;
@property (nonatomic, readonly) UIFont *buttonFont;
@property (nonatomic, readonly) UIImage *buttonImage;
@property (nonatomic, readonly) NSString *buttonTitle;
@property (nonatomic) unsigned long long buttonType;
@property (nonatomic, copy) NSString *customButtonTitle;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic, retain) PXGadgetSpec *gadgetSpec;
@property (nonatomic, readonly) UIFont *headerFont;
@property (nonatomic, readonly) double headerHeight;
@property (nonatomic) unsigned long long headerStyle;
@property (nonatomic, readonly) NSString *headerTitle;
@property (nonatomic) bool isFirstSection;
@property (nonatomic, readonly) bool shouldShowAccessoryButton;
@property (nonatomic, readonly) bool shouldShowDivider;
@property (nonatomic) bool shouldShowDividerOnFirstSection;
@property (nonatomic, readonly) double titleBottomSpacing;
@property (nonatomic, readonly) double titleHeight;
@property (nonatomic, readonly) double titleTopSpacing;
@property (nonatomic, readonly) bool wantsMultilineTitle;

+ (id)_buttonImageNameForButtonType:(unsigned long long)arg1;
+ (id)buttonFontForButtonType:(unsigned long long)arg1;
+ (id)buttonImageForButtonType:(unsigned long long)arg1;
+ (id)titleFontForHeaderStyle:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_configureWithGadget:(id)arg1;
- (id /* block */)accessoryButtonPressed;
- (id)buttonFont;
- (id)buttonImage;
- (id)buttonTitle;
- (unsigned long long)buttonType;
- (id)customButtonTitle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)gadgetSpec;
- (id)headerFont;
- (double)headerHeight;
- (unsigned long long)headerStyle;
- (id)headerTitle;
- (id)initWithConfigurationBlock:(id /* block */)arg1;
- (id)initWithGadget:(id)arg1;
- (bool)isFirstSection;
- (void)performChanges:(id /* block */)arg1;
- (void)performChangesWithGadget:(id)arg1 additionalChanges:(id /* block */)arg2;
- (void)setAccessoryButtonPressed:(id /* block */)arg1;
- (void)setButtonType:(unsigned long long)arg1;
- (void)setCustomButtonTitle:(id)arg1;
- (void)setGadgetSpec:(id)arg1;
- (void)setHeaderStyle:(unsigned long long)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setIsFirstSection:(bool)arg1;
- (void)setShouldShowDividerOnFirstSection:(bool)arg1;
- (void)setWantsMultilineTitle:(bool)arg1;
- (bool)shouldShowAccessoryButton;
- (bool)shouldShowDivider;
- (bool)shouldShowDividerOnFirstSection;
- (double)titleBottomSpacing;
- (double)titleHeight;
- (double)titleTopSpacing;
- (bool)wantsMultilineTitle;

@end
