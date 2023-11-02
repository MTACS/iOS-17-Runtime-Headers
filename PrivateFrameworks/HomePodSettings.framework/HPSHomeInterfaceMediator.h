
@interface HPSHomeInterfaceMediator : NSObject <HPSHomeSettingInterface> {
    HPSHomeInterface * _settingsInterface;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HPSHomeInterface *settingsInterface;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accessoryDidUpdateAttribute:(id)arg1 withContext:(id)arg2;
- (id)initWithInterface:(id)arg1;
- (id)settingsInterface;

@end
