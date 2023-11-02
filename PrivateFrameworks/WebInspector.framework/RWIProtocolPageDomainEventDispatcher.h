
@interface RWIProtocolPageDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { int (**x1)(); } * _controller;
}

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (void)defaultUserPreferencesDidChangeWithPreferences:(id)arg1;
- (void)domContentEventFiredWithTimestamp:(double)arg1;
- (void)frameClearedScheduledNavigationWithFrameId:(id)arg1;
- (void)frameDetachedWithFrameId:(id)arg1;
- (void)frameNavigatedWithFrame:(id)arg1;
- (void)frameScheduledNavigationWithFrameId:(id)arg1 delay:(double)arg2;
- (void)frameStartedLoadingWithFrameId:(id)arg1;
- (void)frameStoppedLoadingWithFrameId:(id)arg1;
- (id)initWithController:(struct AugmentableInspectorController { int (**x1)(); }*)arg1;
- (void)loadEventFiredWithTimestamp:(double)arg1;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

- (void)safe_domContentEventFiredWithTimestamp:(double)arg1;
- (void)safe_frameClearedScheduledNavigationWithFrameId:(id)arg1;
- (void)safe_frameDetachedWithFrameId:(id)arg1;
- (void)safe_frameNavigatedWithFrame:(id)arg1;
- (void)safe_frameScheduledNavigationWithFrameId:(id)arg1 delay:(double)arg2;
- (void)safe_frameStartedLoadingWithFrameId:(id)arg1;
- (void)safe_frameStoppedLoadingWithFrameId:(id)arg1;
- (void)safe_loadEventFiredWithTimestamp:(double)arg1;

@end
