
@protocol CSAttSiriSessionStateDelegate <NSObject>

@required

- (void)notifySiriSessionStateChange:(bool)arg1;

@optional

- (void)notifySiriSessionStateTTSOngoing:(bool)arg1;

@end
