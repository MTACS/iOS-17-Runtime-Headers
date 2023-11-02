
@protocol VUIMetricsStorable

@required

- (NSArray *)allEvents;
- (NSArray *)allSessions;
- (void)clearAllData;
- (NSArray *)eventsForSession:(_TtC8VideosUI20MetricsRenderSession *)arg1;
- (_TtC8VideosUI20MetricsRenderSession *)sessionForEvent:(_TtC8VideosUI18MetricsRenderEvent *)arg1;
- (void)writeEvent:(_TtC8VideosUI18MetricsRenderEvent *)arg1;
- (void)writeSession:(_TtC8VideosUI20MetricsRenderSession *)arg1;

@end
