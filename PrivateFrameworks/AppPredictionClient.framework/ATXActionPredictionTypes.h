
@interface ATXActionPredictionTypes : NSObject

+ (id)actionExperienceToString:(unsigned long long)arg1;
+ (id)actionFeedbackStageToString:(unsigned long long)arg1;
+ (id)actionFeedbackTypeToString:(unsigned long long)arg1;
+ (id)actionTypeToPETString:(unsigned long long)arg1;
+ (id)actionTypeToString:(unsigned long long)arg1;
+ (id)engagementTypeToString:(unsigned long long)arg1;
+ (id)inverseActionFeedbackTypeMapping;
+ (unsigned long long)stringToActionExperience:(id)arg1 found:(bool*)arg2;
+ (unsigned long long)stringToActionFeedbackStage:(id)arg1 found:(bool*)arg2;

@end
