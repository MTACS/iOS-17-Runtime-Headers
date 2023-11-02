
@interface HFAnalyticsDiscoverTabTapEvent : HFAnalyticsEvent {
    NSNumber * _tapCount;
}

@property (nonatomic, retain) NSNumber *tapCount;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)payload;
- (void)setTapCount:(id)arg1;
- (id)tapCount;

@end
