
@protocol PXMutableGadgetSectionHeader

@required

- (id /* block */)accessoryButtonPressed:(void *)arg1; // needs 1 arg types, found 5: id /* block */, NSObject<PXAnonymousView> *, void*, id, SEL
- (unsigned long long)buttonType;
- (NSString *)customButtonTitle;
- (PXGadgetSpec *)gadgetSpec;
- (unsigned long long)headerStyle;
- (NSString *)headerTitle;
- (bool)isFirstSection;
- (void)setAccessoryButtonPressed:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSObject<PXAnonymousView> *, void*
- (void)setButtonType:(unsigned long long)arg1;
- (void)setCustomButtonTitle:(NSString *)arg1;
- (void)setGadgetSpec:(PXGadgetSpec *)arg1;
- (void)setHeaderStyle:(unsigned long long)arg1;
- (void)setHeaderTitle:(NSString *)arg1;
- (void)setIsFirstSection:(bool)arg1;
- (void)setShouldShowDividerOnFirstSection:(bool)arg1;
- (void)setWantsMultilineTitle:(bool)arg1;
- (bool)shouldShowDividerOnFirstSection;
- (bool)wantsMultilineTitle;

@end
