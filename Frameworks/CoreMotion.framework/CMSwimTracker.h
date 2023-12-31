
@interface CMSwimTracker : NSObject {
    CMSwimTrackerInternal * _internal;
}

@property (nonatomic, readonly) CMSwimTrackerInternal *_internal;

+ (bool)isAvailable;
+ (unsigned long long)maxSwimDataEntries;

- (id)_internal;
- (void)dealloc;
- (id)init;
- (void)querySWOLFSummaryWithSessionID:(id)arg1 handler:(id /* block */)arg2;
- (void)querySwimUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)startUpdatesFromRecord:(id)arg1 handler:(id /* block */)arg2;
- (void)stopUpdates;

@end
