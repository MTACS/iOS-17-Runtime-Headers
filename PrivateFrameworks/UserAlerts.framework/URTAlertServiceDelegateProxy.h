
@interface URTAlertServiceDelegateProxy : NSObject <URTAlertClientToServerInterface> {
    URTAlertService * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) URTAlertService *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)dismissAlert:(id)arg1;
- (id)initWithService:(id)arg1;
- (oneway void)presentAlert:(id)arg1 preferringPresentationStyle:(id)arg2;
- (id)service;

@end
