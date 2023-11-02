
@interface IMDFilePurgeabilityMonitor : NSObject <IMUserNotificationListener> {
    void purgeabilityQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)observeFileEvents:(id)arg1;
- (void)userNotificationDidFinish:(id)arg1;

@end
