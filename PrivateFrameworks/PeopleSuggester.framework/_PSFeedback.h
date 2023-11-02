
@interface _PSFeedback : NSObject {
    _PSFeedbackAction * _action;
    _PSPredictionContext * _context;
    double  _delay;
    bool  _dryRun;
    bool  _isAirDropEvent;
    float  _numberOfVisibleSuggestions;
    NSString * _sessionIdentifier;
    NSArray * _suggestions;
    bool  _wasAirDropShown;
}

@property (nonatomic, readonly) _PSFeedbackAction *action;
@property (nonatomic, readonly) _PSPredictionContext *context;
@property (nonatomic, readonly) double delay;
@property (nonatomic) bool dryRun;
@property (nonatomic, readonly) unsigned long long indexOfEngagedSuggestion;
@property (nonatomic, readonly) bool isAirDropEvent;
@property (nonatomic, readonly) float numberOfVisibleSuggestions;
@property (nonatomic, readonly, copy) NSString *sessionIdentifier;
@property (nonatomic, readonly) NSArray *suggestions;
@property (nonatomic, readonly) bool wasAirDropShown;

+ (id)feedbackForAction:(id)arg1 delay:(double)arg2 context:(id)arg3 suggestions:(id)arg4 numberOfVisibleSuggestions:(float)arg5 sessionIdentifier:(id)arg6;
+ (id)feedbackForActionWithAirdrop:(id)arg1 delay:(double)arg2 context:(id)arg3 suggestions:(id)arg4 numberOfVisibleSuggestions:(float)arg5 sessionIdentifier:(id)arg6 isAirDropEvent:(bool)arg7 wasAirDropShown:(bool)arg8;

- (void).cxx_destruct;
- (id)action;
- (id)context;
- (double)delay;
- (bool)dryRun;
- (id)feedbackPayloadShowFamily:(id)arg1;
- (id)getTrialID;
- (unsigned long long)indexOfEngagedSuggestion;
- (id)initWithAction:(id)arg1 delay:(double)arg2 context:(id)arg3 suggestions:(id)arg4 numberOfVisibleSuggestions:(float)arg5 sessionIdentifier:(id)arg6 isAirDropEvent:(bool)arg7 wasAirDropShown:(bool)arg8;
- (bool)isAirDropEvent;
- (id)knowledgeEvent;
- (float)numberOfVisibleSuggestions;
- (id)sessionIdentifier;
- (void)setDryRun:(bool)arg1;
- (id)suggestions;
- (bool)wasAirDropShown;

@end
