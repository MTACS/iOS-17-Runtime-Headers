
@interface AFEnablementConfiguration : NSObject {
    id /* block */  _completionLoggingBlock;
    bool  _requiresVoiceSelection;
    NSDictionary * _voiceCountForRecognitionLanguage;
    bool  _voiceSelectionAllowsRandomSelection;
}

@property (nonatomic, readonly, retain) id /* block */ completionLoggingBlock;
@property (nonatomic, readonly) bool requiresVoiceSelection;
@property (nonatomic, readonly) NSDictionary *voiceCountForRecognitionLanguage;
@property (nonatomic, readonly) bool voiceSelectionAllowsRandomSelection;

- (void).cxx_destruct;
- (id /* block */)completionLoggingBlock;
- (id)initWithRequiresVoiceSelection:(bool)arg1 voiceSelectionAllowsChooseForMe:(bool)arg2 voiceCountForRecognitionLanguage:(id)arg3 completionLoggingBlock:(id /* block */)arg4;
- (bool)requiresVoiceSelection;
- (bool)requiresVoiceSelectionForRecognitionLanguage:(id)arg1;
- (id)voiceCountForRecognitionLanguage;
- (bool)voiceSelectionAllowsRandomSelection;

@end
