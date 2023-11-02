
@interface HMDAnalyticsSignificantTimeEventData : HMFObject {
    bool  _offsetPresent;
    NSString * _significantEvent;
}

@property bool offsetPresent;
@property (nonatomic, copy) NSString *significantEvent;

- (void).cxx_destruct;
- (bool)offsetPresent;
- (void)setOffsetPresent:(bool)arg1;
- (void)setSignificantEvent:(id)arg1;
- (id)significantEvent;

@end
