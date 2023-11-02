
@interface HMDAnalyticsPresenceEventData : HMFObject {
    int  _presenceEventGranularity;
    int  _presenceEventType;
}

@property (nonatomic) int presenceEventGranularity;
@property (nonatomic) int presenceEventType;

- (int)presenceEventGranularity;
- (int)presenceEventType;
- (void)setPresenceEventGranularity:(int)arg1;
- (void)setPresenceEventType:(int)arg1;

@end
