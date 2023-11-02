
@interface MKPlaceActionItemAppearanceProvider : NSObject {
    unsigned long long  _actionType;
    <MKPlaceActionItemAppearanceDataProvider> * _dataProvider;
}

- (void).cxx_destruct;
- (id)_compactTitle;
- (bool)_isDestructiveForMenu;
- (bool)_isDestructiveForTableCell;
- (id)_longTitle;
- (id)_menuSymbol;
- (id)_tableCellSymbol;
- (id)bestSymbolNameForDisplayStyle:(unsigned long long)arg1;
- (id)bestTitleForDisplayStyle:(unsigned long long)arg1;
- (id)initWithActionType:(unsigned long long)arg1 dataProvider:(id)arg2;
- (bool)isDestructiveForDisplayStyle:(unsigned long long)arg1;

@end
