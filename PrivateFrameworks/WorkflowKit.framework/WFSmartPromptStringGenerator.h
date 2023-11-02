
@interface WFSmartPromptStringGenerator : NSObject

+ (id)contentDescriptionWithAttributionSet:(id)arg1 contentItemCache:(id)arg2;
+ (id)localizedPromptForWorkflowName:(id)arg1 attributionSet:(id)arg2 contentCollection:(id)arg3 contentItemCache:(id)arg4 contentDestination:(id)arg5 action:(id)arg6 isWebpageCoercion:(bool)arg7;
+ (id)localizedSubtitleForWorkflowName:(id)arg1 attributionSet:(id)arg2 previousAttributions:(id)arg3 contentItemCache:(id)arg4 contentDestination:(id)arg5 action:(id)arg6 isWebpageCoercion:(bool)arg7;

@end
