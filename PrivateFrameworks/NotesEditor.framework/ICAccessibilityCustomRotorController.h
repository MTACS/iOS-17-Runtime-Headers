
@interface ICAccessibilityCustomRotorController : NSObject {
    ICNoteEditorViewController * _noteEditorViewController;
    UIAccessibilityCustomRotor * _storedAttachmentsRotor;
    UIAccessibilityCustomRotor * _storedChecklistRotor;
    UIAccessibilityCustomRotor * _storedLinksRotor;
    UIAccessibilityCustomRotor * _storedMentionsRotor;
    UIAccessibilityCustomRotor * _storedTablesRotor;
    UIAccessibilityCustomRotor * _storedTagsRotor;
}

@property (nonatomic, readonly) UIAccessibilityCustomRotor *attachmentsRotor;
@property (nonatomic, readonly) UIAccessibilityCustomRotor *checklistRotor;
@property (nonatomic, readonly) UIAccessibilityCustomRotor *linksRotor;
@property (nonatomic, readonly) UIAccessibilityCustomRotor *mentionsRotor;
@property (nonatomic) ICNoteEditorViewController *noteEditorViewController;
@property (nonatomic, readonly) NSArray *sharedTextViewRotors;
@property (nonatomic, retain) UIAccessibilityCustomRotor *storedAttachmentsRotor;
@property (nonatomic, retain) UIAccessibilityCustomRotor *storedChecklistRotor;
@property (nonatomic, retain) UIAccessibilityCustomRotor *storedLinksRotor;
@property (nonatomic, retain) UIAccessibilityCustomRotor *storedMentionsRotor;
@property (nonatomic, retain) UIAccessibilityCustomRotor *storedTablesRotor;
@property (nonatomic, retain) UIAccessibilityCustomRotor *storedTagsRotor;
@property (nonatomic, readonly) UIAccessibilityCustomRotor *tablesRotor;
@property (nonatomic, readonly) UIAccessibilityCustomRotor *tagsRotor;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)attachmentsRotor;
- (id)checklistRotor;
- (id)linksRotor;
- (id)mentionsRotor;
- (id)noteEditorViewController;
- (id)searchForAXElementWithPredicate:(id)arg1 rotorType:(id)arg2;
- (void)setNoteEditorViewController:(id)arg1;
- (void)setStoredAttachmentsRotor:(id)arg1;
- (void)setStoredChecklistRotor:(id)arg1;
- (void)setStoredLinksRotor:(id)arg1;
- (void)setStoredMentionsRotor:(id)arg1;
- (void)setStoredTablesRotor:(id)arg1;
- (void)setStoredTagsRotor:(id)arg1;
- (id)sharedTextViewRotors;
- (id)storedAttachmentsRotor;
- (id)storedChecklistRotor;
- (id)storedLinksRotor;
- (id)storedMentionsRotor;
- (id)storedTablesRotor;
- (id)storedTagsRotor;
- (id)tablesRotor;
- (id)tagsRotor;

@end
