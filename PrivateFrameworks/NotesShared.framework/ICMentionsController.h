
@interface ICMentionsController : NSObject <ICMentionsControllerApp, ICMentionsControllerUI> {
    <ICMentionsAnalyticsDelegate> * _analyticsDelegate;
    ICAttachmentInsertionController * _attachmentInsertionController;
    <NSObject> * _contactsChangedObserverToken;
    id /* block */  _contactsRequestBlock;
    NSObject<OS_dispatch_queue> * _contactsRequestQueue;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _editedRange;
    bool  _isUpdatingKeyboard;
    unsigned long long  _maxNameLength;
    <ICMentionsKeyboardDelegate> * _mentionsKeyboardDelegate;
    <ICMentionsKeyboardDelegate> * _mentionsTableKeyboardDelegate;
    ICNote * _note;
    NSMutableDictionary * _participantDictionary;
    NSMutableSet * _participantNames;
    NSMutableSet * _participantRecordNames;
    ICMentionsParticipantNode * _participantTree;
    ICTableColumnTextView * _tableTextView;
    UITextView * _textView;
}

@property (nonatomic, readonly) bool allowsMentions;
@property (nonatomic) <ICMentionsAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic) ICAttachmentInsertionController *attachmentInsertionController;
@property (nonatomic, retain) <NSObject> *contactsChangedObserverToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } editedRange;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isUpdatingKeyboard;
@property (nonatomic, readonly) unsigned long long maxLengthOfStringForCheckingMention;
@property (nonatomic) unsigned long long maxNameLength;
@property (nonatomic) <ICMentionsKeyboardDelegate> *mentionsKeyboardDelegate;
@property (nonatomic) <ICMentionsKeyboardDelegate> *mentionsTableKeyboardDelegate;
@property (nonatomic) ICNote *note;
@property (nonatomic, retain) NSMutableDictionary *participantDictionary;
@property (nonatomic, retain) NSMutableSet *participantNames;
@property (nonatomic, retain) NSMutableSet *participantRecordNames;
@property (nonatomic, retain) ICMentionsParticipantNode *participantTree;
@property (readonly) Class superclass;
@property (nonatomic) ICTableColumnTextView *tableTextView;
@property (nonatomic) UITextView *textView;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)allKeyword;
+ (id)allUserRecordName;
+ (bool)isBeginningExplicitMentionAtSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inString:(id)arg2 languageHasSpaces:(bool)arg3;
+ (bool)isValidPostfixCharacter:(unsigned short)arg1;
+ (bool)isValidPrefixCharacter:(unsigned short)arg1 languageHasSpaces:(bool)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 appendingSubstringRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (bool)range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 hasValidPostfixCharacterForString:(id)arg2;
+ (bool)range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 hasValidPrefixCharacterForString:(id)arg2 languageHasSpaces:(bool)arg3;
+ (bool)range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 isPrefixedWithAtForString:(id)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfLastCharacterInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

- (void).cxx_destruct;
- (void)addAllKeywordToParticipantTree;
- (bool)allowsMentions;
- (id)analyticsDelegate;
- (void)associateParticipant:(id)arg1 withKey:(id)arg2;
- (id)attachmentInsertionController;
- (id)checkForMentionsInString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 selectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 languageHasSpaces:(bool)arg4;
- (id)contactsChangedObserverToken;
- (void)dealloc;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })editedRange;
- (id)initWithNote:(id)arg1;
- (bool)isUpdatingKeyboard;
- (unsigned long long)maxLengthOfStringForCheckingMention;
- (unsigned long long)maxNameLength;
- (id)mentionsKeyboardDelegate;
- (id)mentionsTableKeyboardDelegate;
- (id)note;
- (id)participantDictionary;
- (id)participantNames;
- (id)participantRecordNames;
- (id)participantTree;
- (id)participantsForKey:(id)arg1;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setAttachmentInsertionController:(id)arg1;
- (void)setContactsChangedObserverToken:(id)arg1;
- (void)setEditedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setIsUpdatingKeyboard:(bool)arg1;
- (void)setMaxNameLength:(unsigned long long)arg1;
- (void)setMentionsKeyboardDelegate:(id)arg1;
- (void)setMentionsTableKeyboardDelegate:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setParticipantDictionary:(id)arg1;
- (void)setParticipantNames:(id)arg1;
- (void)setParticipantRecordNames:(id)arg1;
- (void)setParticipantTree:(id)arg1;
- (void)setTableTextView:(id)arg1;
- (void)setTextView:(id)arg1;
- (id)tableTextView;
- (id)textView;
- (void)updateMentionsAssociations;
- (void)updateNoteParticipants;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (void)insertMention:(id)arg1 toTextView:(id)arg2 atRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 viaAutoComplete:(bool)arg4;
- (void)insertMentionAttachment:(id)arg1 atRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 viaAutoComplete:(bool)arg3;
- (id)moveCurrentUserToLast:(id)arg1;
- (void)updateAutoCompletionView:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 textView:(id)arg3 mentionString:(id)arg4;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (bool)hasMentionInTextStorage:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeOfUnconfirmedMentionInTextStorage:(id)arg1;

- (void)applyUnconfirmedMentionToTextStorage:(id)arg1 participants:(id)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 textView:(id)arg4 mentionString:(id)arg5;
- (bool)checkForMentionInEditedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofTextStorage:(id)arg2 note:(id)arg3 textView:(id)arg4 allowAutoExplicitMention:(bool)arg5 isEndingEditing:(bool)arg6 languageHasSpaces:(bool)arg7 parentAttachment:(id)arg8;
- (void)clearUnconfirmedMentionInTextStorage:(id)arg1;
- (id)fetchContactNamesForParticipants:(id)arg1;
- (void)insertMentionWithText:(id)arg1 uuidString:(id)arg2 parentAttachment:(id)arg3;
- (void)newlineEnteredInNote:(id)arg1;
- (void)registerForContactsChangedNotification;
- (void)sendPendingNotificationsAfterDelay:(unsigned long long)arg1 forNote:(id)arg2;
- (void)tableCellFirstResponderChangedInNote:(id)arg1;

@end
