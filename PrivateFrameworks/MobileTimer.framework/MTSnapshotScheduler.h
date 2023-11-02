
@interface MTSnapshotScheduler : NSObject {
    NSString * _bundleID;
}

+ (double)_quiescingWindow;

- (void).cxx_destruct;
- (void)_performScheduleSnapshot;
- (id)initWithBundleID:(id)arg1;
- (void)scheduleSnapshot;

@end
