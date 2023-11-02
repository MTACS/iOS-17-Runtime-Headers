
@interface SUInstallationConstraintMonitorMediaPlaying : SUInstallationConstraintMonitorBase {
    NSObject<OS_dispatch_queue> * _mediaRemoteQueue;
    bool  _queue_mediaPlaying;
}

- (void)_handlePlaybackChangeNotification:(id)arg1;
- (void)_queue_pollSatisfied;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (unsigned long long)unsatisfiedConstraints;

@end
