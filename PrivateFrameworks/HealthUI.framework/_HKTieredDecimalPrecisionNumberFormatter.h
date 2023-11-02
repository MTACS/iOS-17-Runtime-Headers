
@interface _HKTieredDecimalPrecisionNumberFormatter : NSObject <HKNumberFormatter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)_numberFormatterForNumber:(id)arg1 displayType:(id)arg2;
- (bool)returnsUnitWithValueForDisplay;
- (id)stringFromNumber:(id)arg1 displayType:(id)arg2 unitController:(id)arg3;
- (unsigned long long)style;

@end
