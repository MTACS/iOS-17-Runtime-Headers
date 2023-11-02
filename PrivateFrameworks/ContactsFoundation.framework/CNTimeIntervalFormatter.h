
@interface CNTimeIntervalFormatter : NSFormatter {
    NSNumberFormatter * _numberFormatterWith3SigFigs;
    NSNumberFormatter * _numberFormatterWith4SigFigs;
}

@property (nonatomic, readonly) NSNumberFormatter *numberFormatterWith3SigFigs;
@property (nonatomic, readonly) NSNumberFormatter *numberFormatterWith4SigFigs;

+ (id)multiplierForOrder:(long long)arg1;
+ (id)numberFormatterWithSignificantDigits:(unsigned long long)arg1;
+ (id)sharedFormatter;
+ (id)stringForTimeInterval:(double)arg1;

- (void).cxx_destruct;
- (id)numberFormatterWith3SigFigs;
- (id)numberFormatterWith4SigFigs;
- (id)stringForObjectValue:(id)arg1;
- (id)stringForTimeInterval:(double)arg1;

@end
