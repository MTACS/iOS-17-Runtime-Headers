
@interface WFWindowSceneManager : NSObject

+ (void)activateSceneForWorkflowReference:(id)arg1 sender:(id)arg2;
+ (id)existingSceneSessionForEditingWorkflowReference:(id)arg1;
+ (id)mainScene;
+ (void)setupSession:(id)arg1 forEditingWorkflow:(id)arg2;
+ (id)userActivityForEditingWorkflow:(id)arg1;
+ (id)workflowIdentifierFromUserActivity:(id)arg1;

@end
