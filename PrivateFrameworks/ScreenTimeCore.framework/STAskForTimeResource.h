
@interface STAskForTimeResource : NSObject {
    STAskForTimeClient * _askForTimeClient;
    id /* block */  _changeHandler;
    int  _notificationToken;
    STAskForTimeRequest * _request;
}

@property (nonatomic, retain) STAskForTimeClient *askForTimeClient;
@property (nonatomic, readonly) id /* block */ changeHandler;
@property (nonatomic, readonly) int notificationToken;
@property (nonatomic, readonly) STAskForTimeRequest *request;

- (void).cxx_destruct;
- (void)_approveExceptionForRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)approveAdditionalTime:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)approveOneMoreMinuteWithCompletionHandler:(id /* block */)arg1;
- (id)askForTimeClient;
- (void)cancelOutstandingRequestsWithCompletion:(id /* block */)arg1;
- (id /* block */)changeHandler;
- (void)checkRequestForAdditionalTimeWithResponseHandler:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithResourceIdentifier:(id)arg1 resourceDisplayName:(id)arg2 usageType:(long long)arg3 changeHandler:(id /* block */)arg4;
- (int)notificationToken;
- (id)request;
- (void)requestAdditionalTime:(double)arg1 completionHandler:(id /* block */)arg2;
- (void)setAskForTimeClient:(id)arg1;

@end
