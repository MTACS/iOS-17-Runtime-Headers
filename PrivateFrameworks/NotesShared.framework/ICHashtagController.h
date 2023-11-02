
@interface ICHashtagController : NSObject {
    <ICHashtagAnalyticsDelegate> * _analyticsDelegate;
    ICAttachmentInsertionController * _attachmentInsertionController;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _editedRange;
    <ICHashtagKeyboardDelegate> * _hashtagKeyboardDelegate;
    NSMutableDictionary * _hashtagSuggestionsDictionary;
    <ICHashtagKeyboardDelegate> * _hashtagTableKeyboardDelegate;
    NSMutableSet * _hashtagsNames;
    ICHashtagsNode * _hashtagsTree;
    bool  _isUpdatingKeyboard;
    unsigned long long  _maxNameLength;
    ICNote * _note;
    ICTableColumnTextView * _tableTextView;
    UITextView * _textView;
}

@property (nonatomic, readonly) bool allowsHashtag;
@property (nonatomic) <ICHashtagAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic) ICAttachmentInsertionController *attachmentInsertionController;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } editedRange;
@property (nonatomic) <ICHashtagKeyboardDelegate> *hashtagKeyboardDelegate;
@property (nonatomic, retain) NSMutableDictionary *hashtagSuggestionsDictionary;
@property (nonatomic) <ICHashtagKeyboardDelegate> *hashtagTableKeyboardDelegate;
@property (nonatomic, retain) NSMutableSet *hashtagsNames;
@property (nonatomic, retain) ICHashtagsNode *hashtagsTree;
@property (nonatomic) bool isUpdatingKeyboard;
@property (nonatomic, readonly) unsigned long long maxLengthOfStringForCheckingHashtag;
@property (nonatomic) unsigned long long maxNameLength;
@property (nonatomic) ICNote *note;
@property (nonatomic) ICTableColumnTextView *tableTextView;
@property (nonatomic) UITextView *textView;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (bool)isBeginningHashtagAtSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inString:(id)arg2 languageHasSpaces:(bool)arg3;
+ (bool)isValidPostfixCharacter:(unsigned short)arg1;
+ (bool)isValidPrefixCharacter:(unsigned short)arg1 languageHasSpaces:(bool)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 appendingSubstringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (bool)range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 hasValidPostfixCharacterForString:(id)arg2;
+ (bool)range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 hasValidPrefixCharacterForString:(id)arg2 languageHasSpaces:(bool)arg3;
+ (bool)range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 isPrefixedWithHashtagForString:(id)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfLastCharacterInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (void)setShouldAutoConvertToTag:(bool)arg1;
+ (bool)shouldAutoConvertToTag;

- (void).cxx_destruct;
- (void)accountWasDeleted:(id)arg1;
- (bool)allowsHashtag;
- (id)analyticsDelegate;
- (void)associateHashtagSuggestion:(id)arg1 withKey:(id)arg2;
- (id)attachmentInsertionController;
- (id)checkForHashtagInString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 selectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 languageHasSpaces:(bool)arg4;
- (void)crossAppHashtagDidChange:(id)arg1;
- (void)dealloc;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })editedRange;
- (id)hashtagKeyboardDelegate;
- (id)hashtagSuggestionsDictionary;
- (id)hashtagSuggestionsForKey:(id)arg1;
- (id)hashtagTableKeyboardDelegate;
- (id)hashtagsNames;
- (id)hashtagsTree;
- (id)initWithNote:(id)arg1;
- (bool)isUpdatingKeyboard;
- (unsigned long long)maxLengthOfStringForCheckingHashtag;
- (unsigned long long)maxNameLength;
- (id)note;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setAttachmentInsertionController:(id)arg1;
- (void)setEditedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setHashtagKeyboardDelegate:(id)arg1;
- (void)setHashtagSuggestionsDictionary:(id)arg1;
- (void)setHashtagTableKeyboardDelegate:(id)arg1;
- (void)setHashtagsNames:(id)arg1;
- (void)setHashtagsTree:(id)arg1;
- (void)setIsUpdatingKeyboard:(bool)arg1;
- (void)setMaxNameLength:(unsigned long long)arg1;
- (void)setNote:(id)arg1;
- (void)setTableTextView:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)tableTextView;
- (id)textView;
- (void)updateHashtagsAssociations;
- (void)updateNoteHashtags;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

+ (void)addUnconfirmedAttributeToTextStorage:(id)arg1 atRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfUnconfirmedHashtagInTextStorage:(id)arg1;

- (void)_checkForHashtagInEditedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofTextStorage:(id)arg2 note:(id)arg3 textView:(id)arg4 allowAutoExplicitHashtag:(bool)arg5 isEndingEditing:(bool)arg6 languageHasSpaces:(bool)arg7 parentAttachment:(id)arg8;
- (void)clearUnconfirmedHashtagInTextStorage:(id)arg1;
- (void)createNewHashtagIfNecessary:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 textStorage:(id)arg2 ignoreDelimiter:(bool)arg3 parentAttachment:(id)arg4;
- (id)currentUnconfirmedHashtagString:(id)arg1 textStorage:(id)arg2;
- (void)dismissAutoCompletionView;
- (void)insertHashtagAttachment:(id)arg1 toTextView:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 viaAutoComplete:(bool)arg4 delimiter:(id)arg5;
- (void)insertHashtagWithText:(id)arg1 viaAutoComplete:(bool)arg2 delimiter:(id)arg3 parentAttachment:(id)arg4;
- (void)insertHashtagWithText:(id)arg1 viaAutoComplete:(bool)arg2 parentAttachment:(id)arg3;
- (bool)isEmoji:(id)arg1;
- (bool)isExistingHashtag:(id)arg1 hashtagSuggestionsArray:(id)arg2;
- (bool)isValidElement:(unsigned short)arg1;
- (bool)isValidPostfixCharacter:(unsigned short)arg1;
- (bool)isValidPostfixString:(id)arg1;
- (bool)range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 hasValidPostfixCharacterForString:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeToCheckForHashtagCreation:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)updateAutoCompletionView:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 textView:(id)arg3 ofTextStorage:(id)arg4;
- (void)updatePredictiveBar:(id)arg1;
- (void)updateUIWhenAutoConversionOff:(id)arg1 textStorage:(id)arg2;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (void)checkForHashtagInEditedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofTextStorage:(id)arg2 note:(id)arg3 textView:(id)arg4 allowAutoExplicitHashtag:(bool)arg5 isEndingEditing:(bool)arg6 languageHasSpaces:(bool)arg7 parentAttachment:(id)arg8;

@end
