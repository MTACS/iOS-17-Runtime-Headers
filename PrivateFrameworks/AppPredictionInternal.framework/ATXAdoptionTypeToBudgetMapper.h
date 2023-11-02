
@interface ATXAdoptionTypeToBudgetMapper : NSObject {
    ATXTimelineAbuseControlConfig * _abuseControlConfig;
}

- (void).cxx_destruct;
- (long long)durationLimitForAdoptionType:(unsigned long long)arg1;
- (long long)hardQuotaForAdoptionType:(unsigned long long)arg1;
- (id)initWithAbuseControlConfig:(id)arg1;
- (long long)softQuotaForAdoptionType:(unsigned long long)arg1;

@end
