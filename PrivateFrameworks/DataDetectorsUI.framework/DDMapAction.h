
@interface DDMapAction : DDRemoteAction

+ (bool)actionAvailableForContact:(id)arg1;
+ (bool)handlesUrl:(id)arg1 result:(struct __DDResult { }*)arg2;
+ (id)viewControllerProviderClass;

- (id)commitURL;
- (id)initWithURL:(id)arg1 result:(struct __DDResult { }*)arg2 context:(id)arg3;
- (id)menuActionClasses;
- (id)previewActions;

@end
