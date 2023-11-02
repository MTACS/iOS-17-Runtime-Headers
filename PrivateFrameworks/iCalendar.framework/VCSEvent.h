
@interface VCSEvent : VCSEntity {
    bool  _fullDayEvent;
}

@property (nonatomic, retain) VCSDate *endDate;
@property (nonatomic) bool fullDayEvent;
@property (nonatomic, retain) VCSDate *startDate;

- (id)endDate;
- (void)ensureDurationAlarms;
- (unsigned long long)entityType;
- (bool)fullDayEvent;
- (bool)isValidStatus:(unsigned long long)arg1;
- (void)setEndDate:(id)arg1;
- (void)setFullDayEvent:(bool)arg1;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
