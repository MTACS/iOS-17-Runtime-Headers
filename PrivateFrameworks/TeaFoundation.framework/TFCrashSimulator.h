
@interface TFCrashSimulator : NSObject

- (void)triggerSIGBUS;
- (void)triggerSIGILL;
- (void)triggerSIGSEGV;

@end
