
@interface APClientInfoUI : APClientInfo

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)initForTesting;
- (id)keyboards;
- (void)orientationChanged:(id)arg1;

@end
