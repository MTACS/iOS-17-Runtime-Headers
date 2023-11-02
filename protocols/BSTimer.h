
@protocol BSTimer <NSObject>

@required

+ (id)scheduledTimerWithFireInterval:(void *)arg1 queue:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 7: double, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

- (void)cancel;
- (double)fireInterval;
- (id)initWithFireInterval:(void *)arg1 queue:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 7: double, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)isScheduled;
- (void)schedule;
- (double)startTime;

@end
