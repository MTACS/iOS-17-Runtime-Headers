
@interface HKPersonWeightFormatter : NSObject {
    long long  _localWeightUnit;
    NSMassFormatter * _massFormatter;
}

@property (nonatomic, readonly) long long localWeightUnit;
@property (nonatomic, retain) NSMassFormatter *massFormatter;

+ (id)sharedFormatter;

- (void).cxx_destruct;
- (void)_commonInit;
- (void)_localeChanged:(id)arg1;
- (void)_updateRoundingIncrement;
- (void)dealloc;
- (id)init;
- (long long)localWeightUnit;
- (id)massFormatter;
- (void)setMassFormatter:(id)arg1;
- (id)stringFromWeightInKilograms:(id)arg1;
- (id)stringFromWeightValue:(double)arg1 inUnit:(long long)arg2;

@end
