
@interface SBFDateTimeController : NSObject {
    NSHashTable * _observers;
    NSDate * _overrideDate;
    double  _overrideDateOffset;
}

@property (nonatomic, readonly, copy) NSDate *currentDate;
@property (nonatomic, copy) NSDate *overrideDate;
@property (nonatomic) double overrideDateOffset;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)currentDate;
- (id)overrideDate;
- (double)overrideDateOffset;
- (void)removeObserver:(id)arg1;
- (void)setOverrideDate:(id)arg1;
- (void)setOverrideDateOffset:(double)arg1;

@end
