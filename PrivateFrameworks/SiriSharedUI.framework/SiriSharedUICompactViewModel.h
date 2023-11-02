
@interface SiriSharedUICompactViewModel : NSObject <NSCopying> {
    NSArray * _additionalPlatterTranscriptItems;
    NSArray * _conversationTranscriptItems;
    long long  _inputType;
    NSArray * _resultTranscriptItems;
    NSArray * _serverUtterances;
    SRUIFSpeechRecognitionHypothesis * _speechRecognitionHypothesis;
}

@property (nonatomic, readonly, copy) NSArray *additionalPlatterTranscriptItems;
@property (nonatomic, readonly, copy) NSArray *conversationTranscriptItems;
@property (nonatomic, readonly) long long inputType;
@property (nonatomic, readonly, copy) NSArray *resultTranscriptItems;
@property (nonatomic, readonly, copy) NSArray *serverUtterances;
@property (nonatomic, readonly, copy) SRUIFSpeechRecognitionHypothesis *speechRecognitionHypothesis;

- (void).cxx_destruct;
- (id)additionalPlatterTranscriptItems;
- (id)conversationTranscriptItems;
- (id)copyWithAdditionalPlatterTranscriptItems:(id)arg1;
- (id)copyWithConversationTranscriptItems:(id)arg1 serverUtterances:(id)arg2 speechRecognitionHypothesis:(id)arg3;
- (id)copyWithInputType:(long long)arg1;
- (id)copyWithInputType:(long long)arg1 resultTranscriptItems:(id)arg2 conversationTranscriptItems:(id)arg3 additionalPlatterTranscriptItems:(id)arg4 serverUtterances:(id)arg5 speechRecognitionHypothesis:(id)arg6;
- (id)copyWithInputType:(long long)arg1 resultTranscriptItems:(id)arg2 conversationTranscriptItems:(id)arg3 serverUtterances:(id)arg4 speechRecognitionHypothesis:(id)arg5;
- (id)copyWithResultTranscriptItems:(id)arg1;
- (id)copyWithResultTranscriptItems:(id)arg1 conversationTranscriptItems:(id)arg2 serverUtterances:(id)arg3 speechRecognitionHypothesis:(id)arg4;
- (id)copyWithServerUtterances:(id)arg1 speechRecognitionHypothesis:(id)arg2;
- (id)copyWithSpeechRecognitionHypothesis:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithInputType:(long long)arg1 resultTranscriptItems:(id)arg2 conversationTranscriptItems:(id)arg3 additionalPlatterTranscriptItems:(id)arg4 serverUtterances:(id)arg5 speechRecognitionHypothesis:(id)arg6;
- (id)initWithInputType:(long long)arg1 speechRecognitionHypothesis:(id)arg2;
- (long long)inputType;
- (id)resultTranscriptItems;
- (id)serverUtterances;
- (id)speechRecognitionHypothesis;

@end
