
@protocol DBSZoomAndProSpecifiersDelegate <NSObject>

@required

- (NSNumber *)getProModeEnabled;
- (void)presentModalFineTuneController;
- (void)presentModalMagnifyController;
- (bool)proModeSupported;
- (void)setProModeEnabled:(bool)arg1;

@optional

- (NSString *)localizedMagnifyModeName;

@end
