
@interface NCUserAlertActionRunner : NSObject <NCNotificationActionRunner> {
    SBAlertItem * _alertItem;
    bool  _shouldForwardAction;
}

@property (nonatomic, readonly) SBAlertItem *alertItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldForwardAction;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)alertItem;
- (void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(id /* block */)arg5;
- (id)initWithSBAlertItem:(id)arg1;
- (void)setShouldForwardAction:(bool)arg1;
- (bool)shouldForwardAction;

@end
