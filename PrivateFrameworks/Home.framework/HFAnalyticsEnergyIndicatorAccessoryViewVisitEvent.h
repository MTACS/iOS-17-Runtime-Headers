
@interface HFAnalyticsEnergyIndicatorAccessoryViewVisitEvent : HFAnalyticsEvent {
    NSString * _adviceText;
    NSString * _gridID;
}

@property (nonatomic, retain) NSString *adviceText;
@property (nonatomic, retain) NSString *gridID;

- (void).cxx_destruct;
- (id)adviceText;
- (id)gridID;
- (id)initWithData:(id)arg1;
- (id)payload;
- (void)setAdviceText:(id)arg1;
- (void)setGridID:(id)arg1;

@end
