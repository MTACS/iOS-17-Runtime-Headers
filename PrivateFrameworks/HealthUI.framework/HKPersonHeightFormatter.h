
@interface HKPersonHeightFormatter : NSObject {
    NSLengthFormatter * _heightFormatter;
    NSNumber * _usesImperialUnits;
}

@property (nonatomic, retain) NSLengthFormatter *heightFormatter;
@property (nonatomic, readonly) bool usesImperialUnits;

+ (id)sharedFormatter;

- (void).cxx_destruct;
- (void)_localeChanged:(id)arg1;
- (double)centimetersFromFeet:(double)arg1 inches:(double)arg2;
- (void)dealloc;
- (id)formattedValueForCentimeters:(double)arg1;
- (id)formattedValueForFeet:(double)arg1;
- (id)formattedValueForInches:(double)arg1;
- (void)getFeet:(long long*)arg1 inches:(long long*)arg2 fromCentimeters:(double)arg3;
- (id)heightFormatter;
- (id)init;
- (id)localizedStringFromHeightInCentimeters:(id)arg1;
- (void)setHeightFormatter:(id)arg1;
- (bool)usesImperialUnits;

@end
