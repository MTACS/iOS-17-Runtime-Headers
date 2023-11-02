
@protocol TLTimelineDelegate <NSObject>

@required

- (void)entriesDidChangeInTimeline:(TLTimeline *)arg1;
- (void)timeline:(TLTimeline *)arg1 didChangeNowEntryFrom:(id <TLTimelineEntry>)arg2 to:(id <TLTimelineEntry>)arg3;

@optional

- (void)nowEntryDidChangeFrom:(id <TLTimelineEntry>)arg1 to:(id <TLTimelineEntry>)arg2;
- (void)timelineTimerDidFire:(TLTimeline *)arg1;

@end
