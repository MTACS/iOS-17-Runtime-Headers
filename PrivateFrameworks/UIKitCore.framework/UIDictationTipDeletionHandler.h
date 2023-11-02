
@interface UIDictationTipDeletionHandler : NSObject <UIDictationTipRecordingProtocol> {
    NSMutableString * _cachedDeletedText;
    <UIDictationTipHandlerDelegate> * _delegate;
    long long  _deletionEventCount;
    NSMutableString * _deletionText;
    UIDelayedAction * _finalizeAction;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _lastSelectedDeletionRange;
    long long  _textRecorderStatus;
}

@property (nonatomic, retain) NSMutableString *cachedDeletedText;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIDictationTipHandlerDelegate> *delegate;
@property (nonatomic) long long deletionEventCount;
@property (nonatomic, retain) NSMutableString *deletionText;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDelayedAction *finalizeAction;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } lastSelectedDeletionRange;
@property (readonly) Class superclass;
@property (nonatomic) long long textRecorderStatus;

- (void).cxx_destruct;
- (void)addDeletionEventCount:(id)arg1 deletedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)cachedDeletedText;
- (long long)currentDeletionEventCount;
- (id)delegate;
- (long long)deletionEventCount;
- (id)deletionText;
- (id)finalizeAction;
- (void)finalizeRecordedText;
- (id)initWithDelegate:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })lastSelectedDeletionRange;
- (void)recordDictationTipDeletionText:(id)arg1;
- (void)recordDictationTipText:(id)arg1;
- (void)resetDeletionEventCount;
- (void)resetHandler;
- (void)resetRecorder;
- (void)setCachedDeletedText:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeletionEventCount:(long long)arg1;
- (void)setDeletionText:(id)arg1;
- (void)setFinalizeAction:(id)arg1;
- (void)setLastSelectedDeletionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextRecorderStatus:(long long)arg1;
- (void)setlastDeletionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)startRecodingDeletionText:(id)arg1;
- (void)startRecodingText:(id)arg1;
- (long long)textRecorderStatus;

@end
