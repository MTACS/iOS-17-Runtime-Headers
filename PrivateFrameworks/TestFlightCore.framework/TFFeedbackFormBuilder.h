
@interface TFFeedbackFormBuilder : NSObject

- (id)_buildEmailGroupWithDeveloperName:(id)arg1 prefilledEmail:(id)arg2;
- (id)_buildUserFeedbackGroupWithContext:(unsigned long long)arg1 hasScreenshots:(bool)arg2;
- (id)_feedbackCommentPlaceholderStringForContext:(unsigned long long)arg1;
- (id)buildFormForContext:(unsigned long long)arg1 withDeveloperName:(id)arg2 prefilledEmail:(id)arg3 hasScreenshots:(bool)arg4;

@end
