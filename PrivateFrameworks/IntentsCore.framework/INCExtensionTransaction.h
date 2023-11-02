
@interface INCExtensionTransaction : NSObject {
    INIntent * _currentIntent;
    INIntentResponse * _currentIntentResponse;
    NSUserActivity * _currentUserActivity;
    bool  _donateInteraction;
    NSString * _groupIdentifier;
    NSObject<OS_dispatch_queue> * _queue;
    INCExtensionRequest * _request;
    bool  _shouldResetRequestAfterHandle;
    INCExtensionTransactionState * _state;
    NSMutableDictionary * _userActivitiesByIdentifier;
}

@property (setter=_setCurrentIntent:, nonatomic, retain) INIntent *currentIntent;
@property (setter=_setCurrentIntentResponse:, nonatomic, retain) INIntentResponse *currentIntentResponse;
@property (nonatomic, readonly, copy) NSUserActivity *currentUserActivity;
@property (nonatomic, readonly) bool donateInteraction;
@property (nonatomic, readonly, copy) NSString *groupIdentifier;
@property (nonatomic, readonly) INCExtensionRequest *request;
@property (nonatomic) bool shouldResetRequestAfterHandle;
@property (nonatomic, retain) INCExtensionTransactionState *state;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_addUserActivities:(id)arg1;
- (void)_setCurrentIntent:(id)arg1;
- (void)_setCurrentIntentResponse:(id)arg1;
- (void)_updateCurrentUserActivityForType:(long long)arg1 intent:(id)arg2 intentResponse:(id)arg3;
- (id)currentIntent;
- (id)currentIntentResponse;
- (id)currentUserActivity;
- (id)description;
- (bool)donateInteraction;
- (id)groupIdentifier;
- (id)initWithIntent:(id)arg1 donateInteraction:(bool)arg2 groupIdentifier:(id)arg3;
- (id)request;
- (void)setShouldResetRequestAfterHandle:(bool)arg1;
- (void)setState:(id)arg1;
- (bool)shouldResetRequestAfterHandle;
- (id)state;
- (id)userActivityWithIdentifier:(id)arg1;

@end
