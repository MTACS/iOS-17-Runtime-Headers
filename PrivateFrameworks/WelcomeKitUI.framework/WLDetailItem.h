
@interface WLDetailItem : NSObject {
    NSString * _secondaryText;
    NSString * _symbol;
    UIColor * _symbolTintColor;
    NSString * _text;
}

@property (nonatomic, copy) NSString *secondaryText;
@property (nonatomic, copy) NSString *symbol;
@property (nonatomic, retain) UIColor *symbolTintColor;
@property (nonatomic, copy) NSString *text;

+ (id)items:(id)arg1 size:(unsigned long long*)arg2;

- (void).cxx_destruct;
- (id)initWithType:(long long)arg1 count:(unsigned long long)arg2 secondaryText:(id)arg3 alternativeTextUsed:(bool)arg4 symbolFilled:(bool)arg5 symbolTintColor:(id)arg6;
- (id)secondaryText;
- (void)setSecondaryText:(id)arg1;
- (void)setSymbol:(id)arg1;
- (void)setSymbolTintColor:(id)arg1;
- (void)setText:(id)arg1;
- (id)symbol;
- (id)symbolTintColor;
- (id)text;

@end
