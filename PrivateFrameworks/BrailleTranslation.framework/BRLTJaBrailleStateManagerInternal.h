
@interface BRLTJaBrailleStateManagerInternal : NSObject {
    void alertBraille;
    void alertScript;
    void braille;
    void brailleCache;
    void brailleForScriptTranslationResult;
    void candidateManager;
    void delegate;
    void isShowingAlert;
    void isShowingTerminalOutput;
    void isWordDescriptionActive;
    void script;
    void stageScriptForStageResult;
    void translator;
    void wordDescriptionManager;
}

@property (nonatomic, retain) <BRLTJaBrailleStateManagerDelegate> *delegate;
@property (nonatomic, readonly) BRLTJaStagedStringInternal *displayedBraille;
@property (nonatomic, readonly) BRLTJaEditableStringInternal *displayedScript;
@property (nonatomic, readonly) bool isCandidateSelectionActive;
@property (nonatomic, readonly) bool isEditing;
@property (nonatomic) bool isShowingAlert;
@property (nonatomic) bool isShowingTerminalOutput;
@property (nonatomic) bool isWordDescriptionActive;
@property (nonatomic, retain) BRLTJaTranslatorInternal *translator;

+ (id)manager;

- (void).cxx_destruct;
- (id)delegate;
- (bool)delete;
- (id)displayedBraille;
- (id)displayedScript;
- (void)escapeCommand;
- (bool)forwardDelete;
- (id)init;
- (void)insertBrailleChar:(id)arg1;
- (bool)isCandidateSelectionActive;
- (bool)isEditing;
- (bool)isShowingAlert;
- (bool)isShowingTerminalOutput;
- (bool)isWordDescriptionActive;
- (bool)returnCommand;
- (long long)scriptLocationForBrailleLocation:(long long)arg1;
- (void)selectCandidate;
- (void)setBrailleSelection:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setIsShowingAlert:(bool)arg1;
- (void)setIsShowingTerminalOutput:(bool)arg1;
- (void)setIsWordDescriptionActive:(bool)arg1;
- (void)setScript:(id)arg1;
- (void)setTranslator:(id)arg1;
- (void)showNextCandidate;
- (void)showNextWordDescription;
- (void)showPreviousCandidate;
- (void)showPreviousWordDescription;
- (void)startCandidateSelection;
- (id)translator;
- (void)wordDescriptionCommand;

@end
