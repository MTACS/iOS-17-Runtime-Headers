
@interface ATXProactiveSuggestionPartialIntentHandlingPublisher : NSObject {
    BMBookmarkablePublisher * _appLaunchPublisher;
    BMBookmarkablePublisher * _intentPublisher;
    BPSPublisher * _uiFeedbackPublisher;
}

@property (nonatomic, retain) BMBookmarkablePublisher *appLaunchPublisher;
@property (nonatomic, retain) BMBookmarkablePublisher *intentPublisher;
@property (nonatomic, retain) BPSPublisher *uiFeedbackPublisher;

- (void).cxx_destruct;
- (id)_timestampFromEvent:(id)arg1;
- (id)appLaunchPublisher;
- (id)initWithUIFeedbackPublisher:(id)arg1 appLaunchPublisher:(id)arg2 intentPublisher:(id)arg3;
- (id)intentPublisher;
- (id)partialIntentUIFeedbackPublisher;
- (void)setAppLaunchPublisher:(id)arg1;
- (void)setIntentPublisher:(id)arg1;
- (void)setUiFeedbackPublisher:(id)arg1;
- (id)uiFeedbackPublisher;

@end
