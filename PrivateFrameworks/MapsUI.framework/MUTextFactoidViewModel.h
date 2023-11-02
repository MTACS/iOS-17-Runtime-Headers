
@interface MUTextFactoidViewModel : MUFactoidViewModel {
    UIColor * _darkSymbolColor;
    bool  _shouldReverseForRTLLayout;
    UIColor * _symbolColor;
    NSString * _symbolName;
    NSString * _titleString;
    NSString * _valueString;
}

- (void).cxx_destruct;
- (id)buildSymbolWithFont:(id)arg1;
- (id)darkSymbolColor;
- (id)initWithTitle:(id)arg1 valueString:(id)arg2 symbolName:(id)arg3 symbolColor:(id)arg4 darkSymbolColor:(id)arg5 shouldReverseForRTLLayout:(bool)arg6;
- (bool)shouldReverseForRTLLayout;
- (id)symbolColor;
- (id)symbolName;
- (id)titleString;
- (id)valueString;

@end
