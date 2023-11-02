
@protocol SBSSystemImplementer <NSObject>

@required

- (void)identifyWithOptions:(NSDictionary *)arg1;
- (void)intercomWithOptions:(NSDictionary *)arg1;
- (void)obliterate:(NSDictionary *)arg1;
- (void)reboot:(NSDictionary *)arg1;
- (void)requestDeferredReboot;
- (void)setTurnOffBrightnessFactor:(bool)arg1;

@end
