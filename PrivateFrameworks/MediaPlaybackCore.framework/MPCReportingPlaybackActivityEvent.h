
@interface MPCReportingPlaybackActivityEvent : NSObject <MPCReportingEvent> {
    ICPlayActivityEvent * _playActivityEvent;
    bool  _shouldReportToStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) ICPlayActivityEvent *playActivityEvent;
@property (nonatomic) bool shouldReportToStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (bool)isValidReportingEvent;
- (id)playActivityEvent;
- (unsigned long long)reportingEventType;
- (void)setPlayActivityEvent:(id)arg1;
- (void)setShouldReportToStore:(bool)arg1;
- (bool)shouldReportToStore;

@end
