
@protocol TSKStyleMapper <NSObject>

@required

- (TSSStyle *)mappedStyleForStyle:(TSSStyle *)arg1;
- (TSSStyle *)mappedStyleForStyle:(TSSStyle *)arg1 inThemeStylesheet:(bool)arg2;
- (void)popMappingContext:(id)arg1;
- (void)pushMappingContext:(id)arg1;
- (TSSStylesheet *)targetStylesheet;
- (void)varyInThemeStylesheetForDurationOfBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)varyInThemeStylesheetIf:(void *)arg1 forDurationOfBlock:(void *)arg2; // needs 2 arg types, found 6: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
