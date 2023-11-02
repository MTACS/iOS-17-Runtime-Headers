
@interface HFAnalyticsEnergyDashboardVisitEvent : HFAnalyticsEvent {
    NSString * _gridID;
    bool  _isDoublePaneEnabled;
    NSNumber * _status;
}

@property (nonatomic, retain) NSString *gridID;
@property (nonatomic) bool isDoublePaneEnabled;
@property (nonatomic) NSNumber *status;

- (void).cxx_destruct;
- (id)gridID;
- (id)initWithData:(id)arg1;
- (bool)isDoublePaneEnabled;
- (id)payload;
- (void)setGridID:(id)arg1;
- (void)setIsDoublePaneEnabled:(bool)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
