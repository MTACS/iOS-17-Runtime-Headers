
@interface ATXMicrolocationVisitDuetEvent : ATXDuetEvent {
    NSUUID * _dominantMicrolocationUUID;
    NSDictionary * _microlocationUUIDProbabilities;
}

@property (nonatomic, readonly) NSUUID *dominantMicrolocationUUID;
@property (nonatomic, readonly) NSDictionary *microlocationUUIDProbabilities;

- (void).cxx_destruct;
- (id)description;
- (id)dominantMicrolocationUUID;
- (id)identifier;
- (id)initWithCurrentContextStoreValues;
- (id)initWithCurrentContextStoreValuesWithTwoHourLimit:(bool)arg1;
- (id)initWithDKEvent:(id)arg1;
- (id)initWithDominantMicrolocationUUID:(id)arg1 microlocationProbabilities:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;
- (id)microlocationUUIDProbabilities;

@end
