
@interface BRLTJaBrailleStateManager : NSObject {
    BRLTJaBrailleStateManagerInternal * _underlyingObject;
}

@property (nonatomic, copy) <BRLTJaBrailleStateManagerDelegate> *delegate;
@property (nonatomic, readonly) BRLTJaStagedString *displayedBraille;
@property (nonatomic, readonly) BRLTJaEditableString *displayedScript;
@property (nonatomic) bool isShowingAlert;
@property (nonatomic) bool isShowingTerminalOutput;
@property (nonatomic, copy) BRLTJaTranslator *translator;
@property (readonly) BRLTJaBrailleStateManagerInternal *underlyingObject;

+ (id)manager;

- (void).cxx_destruct;
- (id)delegate;
- (bool)delete;
- (id)displayedBraille;
- (id)displayedScript;
- (void)escapeCommand;
- (bool)forwardDelete;
- (id)initWithUnderlyingObject:(id)arg1;
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
- (void)setScript:(id)arg1;
- (void)setTranslator:(id)arg1;
- (void)showNextCandidate;
- (void)showNextWordDescription;
- (void)showPreviousCandidate;
- (void)showPreviousWordDescription;
- (void)startCandidateSelection;
- (id)translator;
- (id)underlyingObject;
- (void)wordDescriptionCommand;

@end
