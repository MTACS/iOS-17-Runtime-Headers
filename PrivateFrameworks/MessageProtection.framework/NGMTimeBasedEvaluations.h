
@interface NGMTimeBasedEvaluations : NSObject {
    NSDate * _date;
}

@property (retain) NSDate *date;

+ (id)debugDescriptionForAction:(unsigned long long)arg1;
+ (id)nowDate;
+ (id)oldestDateAllowedToSendTo;
+ (bool)prekeyCanBeDeleted:(id)arg1;
+ (bool)prekeyShouldBeRolled:(id)arg1;
+ (void)setNowDate:(id)arg1;
+ (id)sharedManager;
+ (double)timeIntervalAllowedForAction:(unsigned long long)arg1;
+ (bool)validateFetchedPrekeyTimestamp:(double)arg1 forEvaluationType:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)date;
- (void)setDate:(id)arg1;

@end
