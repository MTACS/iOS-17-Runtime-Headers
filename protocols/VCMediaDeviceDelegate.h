
@protocol VCMediaDeviceDelegate <NSObject>

@required

- (bool)autoRunOnStart;
- (NSError *)onPause;
- (NSError *)onResume;
- (NSError *)onRun;
- (NSError *)onStart;
- (NSError *)onStop;

@end
