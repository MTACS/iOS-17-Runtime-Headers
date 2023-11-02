
@interface FMDistanceCalculator : NSObject {
    NSObject<OS_dispatch_queue> * _calculationQueue;
    NSNumberFormatter * _formatter;
    NSLocale * _locale;
    NSObject<FMDistanceCalculatorLocalizationDelegate> * _localizationDelegate;
    NSLocale * _measurementSystemLocale;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *calculationQueue;
@property (nonatomic, retain) NSNumberFormatter *formatter;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic) NSObject<FMDistanceCalculatorLocalizationDelegate> *localizationDelegate;
@property (nonatomic) long long measurementSystem;
@property (nonatomic, retain) NSLocale *measurementSystemLocale;
@property (nonatomic, retain) NSUserDefaults *userDefaults;

- (void).cxx_destruct;
- (id)_localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)_localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2 fractionDigits:(unsigned long long)arg3;
- (id)_scaledAndConvertedMin:(double)arg1 andMax:(double)arg2;
- (double)averageDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)calculationQueue;
- (id)formatter;
- (id)futureLocalizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)init;
- (id)initWithDefaultsSuiteName:(id)arg1;
- (id)initWithDefaultsSuiteName:(id)arg1 locale:(id)arg2;
- (id)initWithDefaultsSuiteName:(id)arg1 locale:(id)arg2 measurementSystemLocale:(id)arg3;
- (id)locale;
- (id)localizationDelegate;
- (id)localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (long long)measurementSystem;
- (id)measurementSystemLocale;
- (void)setCalculationQueue:(id)arg1;
- (void)setFormatter:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setLocalizationDelegate:(id)arg1;
- (void)setMeasurementSystem:(long long)arg1;
- (void)setMeasurementSystemLocale:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (id)userDefaults;

@end
