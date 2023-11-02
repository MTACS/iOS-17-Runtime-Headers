
@interface MKPlaceActionItemCustomAppearanceProvider : MKPlaceActionItemAppearanceProvider {
    NSString * _overrideSymbolName;
    NSString * _overrideTitle;
}

- (void).cxx_destruct;
- (id)bestSymbolNameForDisplayStyle:(unsigned long long)arg1;
- (id)bestTitleForDisplayStyle:(unsigned long long)arg1;
- (id)initWithActionType:(unsigned long long)arg1 overrideTitle:(id)arg2 symbolName:(id)arg3;

@end
