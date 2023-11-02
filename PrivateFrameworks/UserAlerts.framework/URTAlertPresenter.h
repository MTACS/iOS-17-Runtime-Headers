
@interface URTAlertPresenter : NSObject <URTDestinationPresentationDelegate> {
    int (* _compatibilityCallback;
    int  _compatibilityResponse;
    int  _compatibilityResponseButtonFlag;
    NSMutableDictionary * _presentationsForDestinations;
    NSObject<OS_dispatch_queue> * _presentationsQueue;
    URTUserNotificationPresentation * _userNotificationPresentation;
}

@property (nonatomic) int (*compatibilityCallback;
@property (nonatomic, readonly) int compatibilityResponse;
@property (nonatomic, readonly) int compatibilityResponseButtonFlag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *presentationsForDestinations;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *presentationsQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) URTUserNotificationPresentation *userNotificationPresentation;

- (void).cxx_destruct;
- (void)_addDefaultDestinationAlertFromUserNotificationContents:(id)arg1 flags:(unsigned long long)arg2;
- (void)_addFromUserNotificationContents:(id)arg1 toServiceDestination:(long long)arg2;
- (void)_handleUserNotificationResponse:(unsigned long long)arg1;
- (void)_invokeCallbackForResponseFlags:(unsigned long long)arg1;
- (void)_presentationQueue_dismiss;
- (void)_presentationQueue_invalidate;
- (void)_presentationQueue_invokeAction:(id)arg1 forPresentation:(id)arg2;
- (void)_presentationQueue_removePresentation:(id)arg1 forDestination:(long long)arg2;
- (void)addAlert:(id)arg1 forDestination:(long long)arg2;
- (void)addAlert:(id)arg1 forDestination:(long long)arg2 preferringStyle:(long long)arg3;
- (int (*)compatibilityCallback;
- (int)compatibilityResponse;
- (int)compatibilityResponseButtonFlag;
- (void)dismiss;
- (void)handleCancelActionForAlertPresentation:(id)arg1;
- (void)handleDefaultActionForAlertPresentation:(id)arg1;
- (void)handleOtherActionForAlertPresentation:(id)arg1;
- (id)init;
- (void)invalidate;
- (void)present;
- (id)presentationsForDestinations;
- (id)presentationsQueue;
- (void)setCompatibilityCallback:(int (*)arg1;
- (id)userNotificationPresentation;

@end
