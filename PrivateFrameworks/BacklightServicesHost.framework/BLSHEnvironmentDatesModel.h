
@interface BLSHEnvironmentDatesModel : NSObject {
    NSDateInterval * _dateInterval;
    <BLSHBacklightSceneHostEnvironment> * _environment;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _specifiers;
}

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) <BLSHBacklightSceneHostEnvironment> *environment;
@property (nonatomic, readonly, copy) NSArray *specifiers;

- (void).cxx_destruct;
- (void)clearAllSpecifiers;
- (long long)count;
- (id)dateInterval;
- (id)environment;
- (id)initWithEnvironment:(id)arg1;
- (id)missingIntervalForDateInterval:(id)arg1;
- (void)purgeSpecifiersBefore:(id)arg1;
- (void)registerSpecifiers:(id)arg1 forDateInterval:(id)arg2;
- (id)specifierForDate:(id)arg1;
- (id)specifiers;

@end
