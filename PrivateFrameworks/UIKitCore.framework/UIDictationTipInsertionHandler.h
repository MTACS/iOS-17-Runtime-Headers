
@interface UIDictationTipInsertionHandler : NSObject <UIDictationTipRecordingProtocol> {
    <UIDictationTipHandlerDelegate> * _delegate;
    UIDelayedAction * _finalizeAction;
    NSMutableString * _insertionText;
    long long  _textRecorderStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDictationTipHandlerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDelayedAction *finalizeAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableString *insertionText;
@property (readonly) Class superclass;
@property (nonatomic) long long textRecorderStatus;

- (void).cxx_destruct;
- (id)delegate;
- (id)finalizeAction;
- (void)finalizeRecordedText;
- (id)initWithDelegate:(id)arg1;
- (id)insertionText;
- (void)recordDictationTipText:(id)arg1;
- (void)resetHandler;
- (void)setDelegate:(id)arg1;
- (void)setFinalizeAction:(id)arg1;
- (void)setInsertionText:(id)arg1;
- (void)setTextRecorderStatus:(long long)arg1;
- (void)startRecodingText:(id)arg1;
- (long long)textRecorderStatus;

@end
