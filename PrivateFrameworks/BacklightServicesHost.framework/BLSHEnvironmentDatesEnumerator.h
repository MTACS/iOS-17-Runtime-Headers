
@interface BLSHEnvironmentDatesEnumerator : NSObject {
    NSDateInterval * _dateInterval;
    NSEnumerator * _enumerator;
    <BLSHBacklightSceneHostEnvironment> * _environment;
    BLSHEnvironmentDatesModel * _sourceModel;
    BLSAlwaysOnDateSpecifier * _specifier;
}

@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, readonly) NSEnumerator *enumerator;
@property (nonatomic, readonly) <BLSHBacklightSceneHostEnvironment> *environment;
@property (nonatomic, readonly) BLSHEnvironmentDatesModel *sourceModel;
@property (nonatomic, retain) BLSAlwaysOnDateSpecifier *specifier;

+ (id)createWithInitialSpecifier:(id)arg1 enumerator:(id)arg2 dateInterval:(id)arg3 environment:(id)arg4 sourceModel:(id)arg5;

- (void).cxx_destruct;
- (id)dateInterval;
- (id)description;
- (id)enumerator;
- (id)environment;
- (void)setSpecifier:(id)arg1;
- (id)sourceModel;
- (id)specifier;

@end
