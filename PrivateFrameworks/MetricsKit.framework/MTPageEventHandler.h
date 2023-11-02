
@interface MTPageEventHandler : MTStandardEventHandler {
    NSMutableArray * _trackedPageHistory;
}

@property (nonatomic) <MTPageEventHandlerDelegate> *delegate;
@property (nonatomic, retain) NSMutableArray *trackedPageHistory;

- (void).cxx_destruct;
- (void)didCreateMetricsData:(id)arg1;
- (id)eventType;
- (id)eventVersion:(id)arg1;
- (id)knownFields;
- (id)pageHistory:(id)arg1;
- (void)setTrackedPageHistory:(id)arg1;
- (id)trackedPageHistory;
- (void)updatePageHistoryWithPage:(id)arg1;

@end
