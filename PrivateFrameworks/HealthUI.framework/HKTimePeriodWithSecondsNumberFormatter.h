
@interface HKTimePeriodWithSecondsNumberFormatter : NSObject <HKNumberFormatter> {
    bool  _allowMillisecondPrecision;
    unsigned long long  _secondsRoundingMode;
}

@property (nonatomic) bool allowMillisecondPrecision;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long secondsRoundingMode;
@property (readonly) Class superclass;

- (bool)allowMillisecondPrecision;
- (id)init;
- (bool)returnsUnitWithValueForDisplay;
- (unsigned long long)secondsRoundingMode;
- (void)setAllowMillisecondPrecision:(bool)arg1;
- (void)setSecondsRoundingMode:(unsigned long long)arg1;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;

@end
