
@interface MTRElectricalMeasurementClusterGetProfileInfoResponseCommandParams : NSObject <NSCopying> {
    NSArray * _listOfAttributes;
    NSNumber * _maxNumberOfIntervals;
    NSNumber * _profileCount;
    NSNumber * _profileIntervalPeriod;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSArray *listOfAttributes;
@property (nonatomic, copy) NSNumber *maxNumberOfIntervals;
@property (nonatomic, copy) NSNumber *profileCount;
@property (nonatomic, copy) NSNumber *profileIntervalPeriod;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (id)listOfAttributes;
- (id)maxNumberOfIntervals;
- (id)profileCount;
- (id)profileIntervalPeriod;
- (void)setListOfAttributes:(id)arg1;
- (void)setMaxNumberOfIntervals:(id)arg1;
- (void)setProfileCount:(id)arg1;
- (void)setProfileIntervalPeriod:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
