
@interface SWCollaborationCoordinatorBSActionResponder : NSObject <_UISceneBSActionResponding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedActionResponder;

- (void)_appDidFinishLaunching:(id)arg1;
- (id)_respondToActions:(id)arg1 forFBSScene:(id)arg2 inUIScene:(id)arg3 fromTransitionContext:(id)arg4;
- (id)init;

@end