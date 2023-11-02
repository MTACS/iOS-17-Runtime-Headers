
@interface ACHAwardsWorkoutClient : NSObject <_HKXPCExportable> {
    NSUUID * _identifier;
    HKTaskServerProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSUUID *identifier;
@property (nonatomic, retain) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bestDistanceForFirstPartyWorkoutsWithType:(unsigned long long)arg1 endingBeforeDate:(id)arg2 error:(id*)arg3;
- (id)bestEnergyBurnedForFirstPartyWorkoutsWithType:(unsigned long long)arg1 endingBeforeDate:(id)arg2 error:(id*)arg3;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)identifier;
- (id)initWithHealthStore:(id)arg1;
- (id)mindfulMinutesForForDateInterval:(id)arg1 error:(id*)arg2;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 containedInInterval:(id)arg2 error:(id*)arg3;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 withType:(unsigned long long)arg2 andLocation:(unsigned long long)arg3 containedInInterval:(id)arg4 error:(id*)arg5;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)arg1 withType:(unsigned long long)arg2 endingOnOrBeforeDate:(id)arg3 error:(id*)arg4;
- (unsigned long long)numberOfWorkoutsWithDuration:(double)arg1 containedInInterval:(id)arg2 error:(id*)arg3;
- (id)proxyProvider;
- (id)remoteInterface;
- (void)setIdentifier:(id)arg1;
- (void)setProxyProvider:(id)arg1;
- (id)workoutsInDateInterval:(id)arg1 error:(id*)arg2;

@end
