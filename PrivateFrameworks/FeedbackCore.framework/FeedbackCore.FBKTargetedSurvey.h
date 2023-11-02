
@interface FeedbackCore.FBKTargetedSurvey : NSObject {
    void identifier;
    void teamId;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) long long teamId;

+ (void)clearCachedUserSession;
+ (void)didFinishSubmissionWithFormIdentifier:(id)arg1 feedbackId:(id)arg2 isSurvey:(bool)arg3 error:(id)arg4;
+ (id)inboxTargetedSurveysWithTeamType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTeamId:(long long)arg1;
- (long long)teamId;

@end
