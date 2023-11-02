
@interface IRTapToRadar : NSObject {
    bool  _pendingNotificationPresent;
    NSDate * _previousNotificationDate;
    NSObject<OS_dispatch_queue> * _queue;
}

@property bool pendingNotificationPresent;
@property (nonatomic, retain) NSDate *previousNotificationDate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)shared;

- (void).cxx_destruct;
- (id)_createErrorEventPromptIfAllowed:(id)arg1;
- (id)_createErrorEventsPromptsForMediaEvent:(id)arg1;
- (id)_createPeriodicPromptIfAllowed:(id)arg1;
- (id)_createPeriodicPromptsForMediaEvent:(id)arg1;
- (id)_errorEventQuestionaire:(id)arg1;
- (void)_initiatePopupAndTTR:(id)arg1;
- (id)_triggerUserPrompts:(id)arg1;
- (id)init;
- (bool)pendingNotificationPresent;
- (id)previousNotificationDate;
- (void)promptForTapToRadarIfAllowed:(id)arg1;
- (id)queue;
- (void)setPendingNotificationPresent:(bool)arg1;
- (void)setPreviousNotificationDate:(id)arg1;
- (void)setQueue:(id)arg1;

@end
