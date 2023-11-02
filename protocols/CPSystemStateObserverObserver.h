
@protocol CPSystemStateObserverObserver <NSObject>

@required

- (void)systemStateObserver:(id <CPSystemStateObserver>)arg1 sharePlayAllowedStateChanged:(bool)arg2;

@optional

- (void)systemStateObserver:(id <CPSystemStateObserver>)arg1 screenSharingAllowedStateChanged:(bool)arg2;

@end
