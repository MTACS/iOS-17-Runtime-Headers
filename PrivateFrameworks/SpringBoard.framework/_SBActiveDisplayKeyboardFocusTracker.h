
@interface _SBActiveDisplayKeyboardFocusTracker : NSObject <SBActiveWindowSceneTracking>

@property (nonatomic, readonly) SBWindowScene *activeWindowScene;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)activeWindowScene;

@end
