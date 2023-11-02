
@interface UIDictationTipController : NSObject <UIDictationTipHandlerDelegate> {
    id /* block */  _delayedTip;
    UIDictationTipDeletionHandler * _dictationDeletionTipHandler;
    UIDictationTipEmojiHandler * _dictationEmojiTipHandler;
    UIDictationTipInsertionHandler * _dictationInsertionTipHandler;
    UIDictationTipReplacementHandler * _dictationReplacementTipHandler;
    UIDictationTipSelectionHandler * _dictationSelectionTipHandler;
    UIDictationTipModelessInputHandler * _dictationTipModelessInputHandler;
    UIDictationTipPresentationHandler * _dictationTipPresentationHandler;
    unsigned long long  _dismissalReasonType;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ delayedTip;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDictationTipDeletionHandler *dictationDeletionTipHandler;
@property (nonatomic, retain) UIDictationTipEmojiHandler *dictationEmojiTipHandler;
@property (nonatomic, retain) UIDictationTipInsertionHandler *dictationInsertionTipHandler;
@property (nonatomic, retain) UIDictationTipReplacementHandler *dictationReplacementTipHandler;
@property (nonatomic, retain) UIDictationTipSelectionHandler *dictationSelectionTipHandler;
@property (nonatomic, retain) UIDictationTipModelessInputHandler *dictationTipModelessInputHandler;
@property (nonatomic, retain) UIDictationTipPresentationHandler *dictationTipPresentationHandler;
@property (nonatomic) unsigned long long dismissalReasonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)dictationTipPreferenceKey:(long long)arg1;

- (void).cxx_destruct;
- (void)addDeletionEventCount:(id)arg1 deletedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (long long)currentDeletionEventCount;
- (id /* block */)delayedTip;
- (void)dictationCommandUsed:(unsigned long long)arg1 firstTargetString:(id)arg2 secondTargetString:(id)arg3;
- (id)dictationDeletionTipHandler;
- (id)dictationEmojiTipHandler;
- (id)dictationInsertionTipHandler;
- (id)dictationReplacementTipHandler;
- (id)dictationSelectionTipHandler;
- (id)dictationTipModelessInputHandler;
- (id)dictationTipPresentationHandler;
- (bool)dictationTipShown:(long long)arg1;
- (unsigned long long)dismissalReasonType;
- (void)emitTipShowingInstrumentation:(long long)arg1;
- (void)finalizeSelectionTip;
- (void)finalizeTextWithTipType:(long long)arg1 title:(id)arg2 andTipDescription:(id)arg3;
- (long long)getDictationTipSignaled;
- (void)incrementDictationTipDisplayCount:(long long)arg1 stopFutureShowing:(bool)arg2;
- (id)init;
- (void)logDictationTipDimissialInstrumentation;
- (void)markDictationTipPreferenceToShown:(long long)arg1;
- (bool)modelessTipShown;
- (void)presentDelayedTipIfNeeded;
- (void)processSoftwareKeyboardInteraction;
- (void)processUserInteractionEnded;
- (void)recordDictationTipDeletionText:(id)arg1;
- (void)recordDictationTipReplacementText:(id)arg1;
- (id)replaceEmojiInStringWithEmojiDictationCommand:(id)arg1;
- (void)reset;
- (void)resetDeletionEventCount;
- (void)resetShowModelessTipSignal;
- (void)setDelayedTip:(id /* block */)arg1;
- (void)setDictationDeletionTipHandler:(id)arg1;
- (void)setDictationEmojiTipHandler:(id)arg1;
- (void)setDictationInsertionTipHandler:(id)arg1;
- (void)setDictationReplacementTipHandler:(id)arg1;
- (void)setDictationSelectionTipHandler:(id)arg1;
- (void)setDictationTipModelessInputHandler:(id)arg1;
- (void)setDictationTipPresentationHandler:(id)arg1;
- (void)setDismissalReasonType:(unsigned long long)arg1;
- (void)showDictationTipWithTitle:(id)arg1 description:(id)arg2 dictationTipType:(long long)arg3;
- (void)signalDictationClearAllTip;
- (void)signalDictationDeletionTip:(id)arg1;
- (void)signalDictationEmojiTip:(id)arg1;
- (void)signalDictationInsertionTip:(id)arg1;
- (void)signalDictationReplacementTip:(id)arg1;
- (void)signalDictationSelectionTip:(id)arg1;
- (void)signalDictationSendMessageTip;
- (void)signalShowModelessTipIfNeeded;
- (void)triggerModelessInputTipDictationStoppedSignal;

@end
