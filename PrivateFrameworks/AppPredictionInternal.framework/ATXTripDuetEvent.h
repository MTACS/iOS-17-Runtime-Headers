
@interface ATXTripDuetEvent : ATXDuetEvent {
    unsigned long long  _destination;
    double  _durationAtOrigin;
    unsigned long long  _origin;
}

@property (nonatomic, readonly) unsigned long long destination;
@property (nonatomic, readonly) double durationAtOrigin;
@property (nonatomic, readonly) unsigned long long origin;

- (id)convertToUpcomingCommuteEventWithWindowDuration:(double)arg1;
- (id)description;
- (unsigned long long)destination;
- (double)durationAtOrigin;
- (id)identifier;
- (id)initWithCurrentContextStoreValues;
- (id)initWithCurrentContextStoreValuesWithOriginLOI:(id)arg1 ignoreBeforeDate:(id)arg2;
- (id)initWithOrigin:(unsigned long long)arg1 destination:(unsigned long long)arg2 durationAtOrigin:(double)arg3 startDate:(id)arg4 endDate:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXTripDuetEvent:(id)arg1;
- (unsigned long long)origin;
- (unsigned long long)rtLocationToBMSemanticLocation:(long long)arg1;

@end
