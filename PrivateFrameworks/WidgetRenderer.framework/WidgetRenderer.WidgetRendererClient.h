
@interface WidgetRenderer.WidgetRendererClient : NSObject <WRWidgetRendererServiceXPCClient> {
    void _calloutQueue;
    void _calloutQueue_configurationsDidChangePublisher;
    void _calloutQueue_extensionsDidChangePublisher;
    void _calloutQueue_placeholderReloadedPublisher;
    void _calloutQueue_snapshotReloadedPublisher;
    void _calloutQueue_systemEnvironmentDidChangePublisher;
    void _calloutQueue_timelineReloadedPublisher;
    void _lock;
    void _lock_configurationsByHostIdentifier;
    void _lock_extensionsByExtensionIdentity;
    void _lock_hasReceivedInitialEnvironment;
    void _lock_subscriptions;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _lock_systemEnvironment;
    void _queue;
    void _queue_connection;
    void _queue_placeholders;
    void _queue_snapshots;
    void _queue_timelines;
    void configurationsDidChangePublisher;
    void extensionsDidChangePublisher;
    void hasReceivedInitializationPayload;
    void placeholderReloadedPublisher;
    void snapshotReloadedPublisher;
    void systemEnvironmentDidChangePublisher;
    void timelineReloadedPublisher;
}

- (void).cxx_destruct;
- (void)clientConfigurationsDidChange:(id)arg1 forHost:(id)arg2;
- (void)extensionsDidChange:(id)arg1;
- (void)flushPowerlog;
- (id)init;
- (void)initializeConnection:(id)arg1;
- (void)placeholdersDidChange:(id)arg1;
- (void)snapshotsDidChange:(id)arg1;
- (void)systemEnvironmentDidChange:(id)arg1;
- (void)timelinesDidChange:(id)arg1;

@end
