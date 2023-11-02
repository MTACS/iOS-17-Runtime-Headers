
@interface StockDataFormatter : NSObject {
    NSNumberFormatter * _decimalFormatter;
    NSObject<OS_dispatch_queue> * _decimalFormatterQueue;
    bool  _localeUsesASCII;
    NSNumberFormatter * _percentFormatter;
    NSObject<OS_dispatch_queue> * _percentFormatterQueue;
}

@property (nonatomic, retain) NSNumberFormatter *decimalFormatter;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *decimalFormatterQueue;
@property (getter=doesLocaleUseASCII, nonatomic, readonly) bool localeUsesASCII;
@property (nonatomic, retain) NSNumberFormatter *percentFormatter;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *percentFormatterQueue;
@property (nonatomic, readonly) NSString *percentSymbol;

+ (id)sharedDataFormatter;

- (void).cxx_destruct;
- (id)_locked_formatNumber:(id)arg1 withPrecision:(unsigned long long)arg2 useGroupSeparator:(bool)arg3;
- (id)_locked_formatPercent:(id)arg1 withPrecision:(unsigned long long)arg2;
- (void)_resetLocale:(id)arg1;
- (void)dealloc;
- (id)decimalFormatter;
- (id)decimalFormatterQueue;
- (bool)doesLocaleUseASCII;
- (id)formattedChangeInPercentForStock:(id)arg1;
- (id)formattedChangeInPointsForStock:(id)arg1 withPrecision:(unsigned long long)arg2;
- (id)formattedChangeInPointsForStock:(id)arg1 withPrecision:(unsigned long long)arg2 droppingFractionDigitsIfLengthExceeds:(unsigned long long)arg3;
- (id)formattedNumber:(id)arg1 withPrecision:(unsigned long long)arg2 useGroupSeparator:(bool)arg3;
- (id)formattedNumber:(id)arg1 withPrecision:(unsigned long long)arg2 useGroupSeparator:(bool)arg3 droppingFractionDigitsIfLengthExceeds:(unsigned long long)arg4;
- (id)formattedPercent:(id)arg1;
- (id)formattedPercent:(id)arg1 withPrecision:(unsigned long long)arg2;
- (id)formattedPriceForStock:(id)arg1 withPrecision:(unsigned long long)arg2;
- (id)formattedPriceForStock:(id)arg1 withPrecision:(unsigned long long)arg2 droppingFractionDigitsIfLengthExceeds:(unsigned long long)arg3;
- (id)initPrivate;
- (id)percentFormatter;
- (id)percentFormatterQueue;
- (id)percentSymbol;
- (void)setDecimalFormatter:(id)arg1;
- (void)setDecimalFormatterQueue:(id)arg1;
- (void)setPercentFormatter:(id)arg1;
- (void)setPercentFormatterQueue:(id)arg1;

@end
