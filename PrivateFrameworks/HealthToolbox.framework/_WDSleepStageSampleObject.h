
@interface _WDSleepStageSampleObject : NSObject <WDDataListDataObjectSource> {
    HKCategorySample * _sample;
}

@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HKCategorySample *sample;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dateInterval;
- (id)device;
- (id)initWithSample:(id)arg1;
- (id)sample;
- (id)source;

@end
