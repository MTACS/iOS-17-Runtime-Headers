
@interface WFHomeServicePickerParameterEditingController : WFUIKitParameterEditingController <WFHUShortcutsTriggerViewAccessoryViewControllerDelegate> {
    HMHome * _home;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)createViewControllerWithInitialState:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)home;
- (void)servicePickerDidCancel:(id)arg1;
- (void)servicePickerDidFinish:(id)arg1 selectedServices:(id)arg2;
- (void)setHome:(id)arg1;

@end
