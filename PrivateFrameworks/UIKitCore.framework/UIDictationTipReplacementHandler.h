
@interface UIDictationTipReplacementHandler : NSObject <UIDictationTipRecordingProtocol> {
    <UIDictationTipHandlerDelegate> * _delegate;
    UIDelayedAction * _finalizeAction;
    NSString * _replacementTargetText;
    NSMutableString * _replacementText;
    long long  _textRecorderStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDictationTipHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDelayedAction *finalizeAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *replacementTargetText;
@property (nonatomic, retain) NSMutableString *replacementText;
@property (readonly) Class superclass;
@property (nonatomic) long long textRecorderStatus;

- (void).cxx_destruct;
- (id)delegate;
- (id)finalizeAction;
- (void)finalizeRecordedText;
- (id)initWithDelegate:(id)arg1;
- (void)recordDictationTipReplacementText:(id)arg1;
- (void)recordDictationTipText:(id)arg1;
- (id)replacementTargetText;
- (id)replacementText;
- (void)resetHandler;
- (void)setDelegate:(id)arg1;
- (void)setFinalizeAction:(id)arg1;
- (void)setReplacementTargetText:(id)arg1;
- (void)setReplacementText:(id)arg1;
- (void)setTextRecorderStatus:(long long)arg1;
- (void)startRecodingReplacementText:(id)arg1;
- (void)startRecodingText:(id)arg1;
- (long long)textRecorderStatus;

@end
