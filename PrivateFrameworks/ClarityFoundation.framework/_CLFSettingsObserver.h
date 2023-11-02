
@interface _CLFSettingsObserver : NSObject <BSInvalidatable> {
    CLFBaseSettings * _settings;
    SEL  _settingsSelector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) CLFBaseSettings *settings;
@property (nonatomic) SEL settingsSelector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSettings:(id)arg1 settingsSelector:(SEL)arg2;
- (void)invalidate;
- (void)setSettings:(id)arg1;
- (void)setSettingsSelector:(SEL)arg1;
- (id)settings;
- (SEL)settingsSelector;

@end
