
@interface _PSMapsFeedback : NSObject {
    _PSMapsFeedbackAction * _action;
    _PSMapsPredictionContext * _context;
    bool  _dryRun;
    NSArray * _suggestions;
}

@property (nonatomic, readonly) _PSMapsFeedbackAction *action;
@property (nonatomic, readonly) _PSMapsPredictionContext *context;
@property (nonatomic) bool dryRun;
@property (nonatomic, readonly) unsigned long long indexOfEngagedSuggestion;
@property (nonatomic, readonly) NSArray *suggestions;

- (void).cxx_destruct;
- (id)action;
- (id)context;
- (bool)dryRun;
- (id)feedbackPayload;
- (id)getTrialID;
- (unsigned long long)indexOfEngagedSuggestion;
- (id)initWithFeedbackAction:(id)arg1 predictionContext:(id)arg2 suggestions:(id)arg3;
- (id)knowledgeEvent;
- (void)setDryRun:(bool)arg1;
- (id)suggestions;

@end
