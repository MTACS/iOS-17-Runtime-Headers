
@protocol MULabeledValueActionViewModelProviding <NSObject, MUAnalyticActionProviding>

@required

- (id /* block */)actionBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, UIView *, void*, id, SEL
- (long long)actionVariant;
- (NSString *)alternativeTitleString;
- (int)analyticsTarget;
- (bool)emphasizeValueString;
- (void)setActionBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIView *, void*
- (void)setActionVariant:(long long)arg1;
- (void)setAlternativeTitleString:(NSString *)arg1;
- (void)setAnalyticsTarget:(int)arg1;
- (void)setEmphasizeValueString:(bool)arg1;
- (void)setSymbolName:(NSString *)arg1;
- (void)setTitleString:(NSString *)arg1;
- (void)setValueString:(NSString *)arg1;
- (NSString *)symbolName;
- (NSString *)titleString;
- (NSString *)valueString;

@end
