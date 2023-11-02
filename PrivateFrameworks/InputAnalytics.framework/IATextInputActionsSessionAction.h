
@interface IATextInputActionsSessionAction : NSObject {
    NSString * _appBundleId;
    long long  _flagOptions;
    long long  _inputActionCountFromMergedActions;
    NSString * _keyboardLayout;
    NSString * _keyboardType;
    NSString * _keyboardVariant;
    NSString * _language;
    NSString * _region;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _relativeRangeBefore;
    long long  _source;
    long long  _textInputActionsType;
}

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, readonly) IATextInputActionsSessionBeganAction *asBegan;
@property (nonatomic, readonly) IATextInputActionsSessionCopyAction *asCopy;
@property (nonatomic, readonly) IATextInputActionsSessionCutAction *asCut;
@property (nonatomic, readonly) IATextInputActionsSessionDeletionAction *asDeletion;
@property (nonatomic, readonly) IATextInputActionsSessionDictationBeganAction *asDictationBegan;
@property (nonatomic, readonly) IATextInputActionsSessionDictationEndedAction *asDictationEnded;
@property (nonatomic, readonly) IATextInputActionsSessionEndAction *asEnd;
@property (nonatomic, readonly) IATextInputActionsSessionInsertionAction *asInsertion;
@property (nonatomic, readonly) IATextInputActionsSessionPasteAction *asPaste;
@property (nonatomic, readonly) IATextInputActionsSessionRedoAction *asRedo;
@property (nonatomic, readonly) IATextInputActionsSessionReplaceTextAction *asReplaceText;
@property (nonatomic, readonly) IATextInputActionsSessionSelectionAction *asSelection;
@property (nonatomic, readonly) IATextInputActionsSessionUndoAction *asUndo;
@property (nonatomic, readonly) bool changedContent;
@property (nonatomic) long long flagOptions;
@property (nonatomic, readonly) long long inputActionCount;
@property (nonatomic) long long inputActionCountFromMergedActions;
@property (nonatomic, copy) NSString *keyboardLayout;
@property (nonatomic, copy) NSString *keyboardType;
@property (nonatomic, copy) NSString *keyboardVariant;
@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSString *region;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } relativeRangeBefore;
@property (nonatomic) long long source;
@property (nonatomic) long long textInputActionsType;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)asBegan;
- (id)asCopy;
- (id)asCut;
- (id)asDeletion;
- (id)asDictationBegan;
- (id)asDictationEnded;
- (id)asEnd;
- (id)asInsertion;
- (id)asPaste;
- (id)asRedo;
- (id)asReplaceText;
- (id)asSelection;
- (id)asUndo;
- (bool)changedContent;
- (id)description;
- (long long)flagOptions;
- (long long)inputActionCount;
- (long long)inputActionCountFromMergedActions;
- (id)inputModeUniqueString;
- (bool)isMergeableWith:(id)arg1;
- (id)keyboardLayout;
- (id)keyboardType;
- (id)keyboardVariant;
- (id)language;
- (long long)mergeActionIfPossible:(id)arg1;
- (id)region;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })relativeRangeBefore;
- (void)setAppBundleId:(id)arg1;
- (void)setFlagOptions:(long long)arg1;
- (void)setInputActionCountFromMergedActions:(long long)arg1;
- (void)setKeyboardLayout:(id)arg1;
- (void)setKeyboardType:(id)arg1;
- (void)setKeyboardVariant:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setRelativeRangeBefore:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSource:(long long)arg1;
- (void)setTextInputActionsType:(long long)arg1;
- (long long)source;
- (long long)textInputActionsType;

@end
