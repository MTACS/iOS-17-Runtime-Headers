
@interface AppDelegate : NSObject <UIApplicationDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIWindow *window;

- (void)applicationDidFinishLaunching:(id)arg1;

@end
