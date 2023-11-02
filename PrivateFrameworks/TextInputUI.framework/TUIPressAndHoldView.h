
@interface TUIPressAndHoldView : UIView <TUIPressAndHoldGridDelegate> {
    NSArray * _accentVariants;
    NSString * _currentKeyString;
    <TUIPressAndHoldViewDelegate> * _delegate;
    TUIPressAndHoldGrid * _pressAndHoldGrid;
    NSIndexPath * _selectedIndexPath;
}

@property (nonatomic, readonly) NSArray *accentVariants;
@property (nonatomic, readonly) NSString *currentKeyString;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TUIPressAndHoldViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TUIPressAndHoldGrid *pressAndHoldGrid;
@property (nonatomic, readonly) NSString *selectedAccentVariant;
@property (nonatomic, retain) NSIndexPath *selectedIndexPath;
@property (readonly) Class superclass;

+ (id)accentedCharactersForKeyString:(id)arg1;
+ (struct CGSize { double x1; double x2; })requiredPopoverSizeForKeyString:(id)arg1;

- (void).cxx_destruct;
- (id)accentVariants;
- (id)currentKeyString;
- (id)delegate;
- (bool)handleNumberKey:(unsigned long long)arg1;
- (bool)handleSelection;
- (bool)hasAccentVariantInForwardDirection:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyString:(id)arg2;
- (id)pressAndHoldGrid;
- (void)pressAndHoldGridDidAcceptAccentVariant:(id)arg1 atIndexPath:(id)arg2;
- (bool)pressAndHoldGridHasSelectedIndexPath;
- (id)selectedAccentVariant;
- (id)selectedIndexPath;
- (void)setDelegate:(id)arg1;
- (void)setPressAndHoldGrid:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1;
- (void)showAccentVariantInForwardDirection:(bool)arg1;

@end
