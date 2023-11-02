
@interface _PSMessagesZkwFeedback : NSObject {
    NSString * _chatGuidEngaged;
    bool  _dryRun;
    NSArray * _suggestions;
}

@property (nonatomic, readonly, copy) NSString *chatGuidEngaged;
@property (nonatomic) bool dryRun;
@property (nonatomic, readonly, copy) NSArray *suggestions;

- (void).cxx_destruct;
- (id)chatGuidEngaged;
- (bool)dryRun;
- (long long)feedbackActionTypeForSuggestionIndex:(unsigned long long)arg1;
- (id)feedbackPayload;
- (id)getTrialID;
- (unsigned long long)indexOfEngagedSuggestionForChatGuidEngaged;
- (id)initWithChatGuidEngagaged:(id)arg1 suggestions:(id)arg2;
- (id)reasonForSuggestionIndex:(unsigned long long)arg1;
- (id)reasonTypeForSuggestionIndex:(unsigned long long)arg1;
- (void)setDryRun:(bool)arg1;
- (id)suggestions;

@end
