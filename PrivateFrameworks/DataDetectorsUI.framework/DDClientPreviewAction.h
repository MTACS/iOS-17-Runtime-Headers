
@interface DDClientPreviewAction : DDPreviewAction

+ (id)clientActionsDelegate;
+ (bool)clientCanPerformActionWithUrl:(id)arg1;
+ (void)setClientActionsDelegate:(id)arg1;

- (id)iconName;
- (id)localizedName;
- (id)menuActions;
- (void)performFromView:(id)arg1;
- (id)viewController;

@end
