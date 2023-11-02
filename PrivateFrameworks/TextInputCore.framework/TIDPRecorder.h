
@interface TIDPRecorder : NSObject {
    HCHuffmanCoder * _characterCoder;
    <TIDPReportingDelegate> * _delegate;
    NSLock * _delegateLock;
    struct _LXLexicon { } * _lexiconPrimaryInputMode;
    struct _LXLexicon { } * _lexiconSecondaryInputMode;
    NSLock * _primaryLexiconLock;
    NSLock * _secondaryLexiconLock;
    TITypingSession * _typingSession;
    TITypingSessionAligned * _typingSessionAligned;
    HCHuffmanCoder * _wordCoder;
}

@property (nonatomic, readonly) HCHuffmanCoder *characterCoder;
@property (nonatomic, readonly) NSArray *characterExplodedRecords;
@property (nonatomic, retain) <TIDPReportingDelegate> *delegate;
@property (readonly) struct _LXLexicon { }*lexiconPrimaryInputMode;
@property (readonly) struct _LXLexicon { }*lexiconSecondaryInputMode;
@property (nonatomic, readonly) NSString *primaryInputModeLocaleIndentifier;
@property (nonatomic, readonly) NSString *recordingKey;
@property (nonatomic, readonly) NSString *recordingKeyLocaleSubstring;
@property (nonatomic, readonly) NSArray *records;
@property (nonatomic, readonly) NSString *secondaryInputModeLocaleIdentifier;
@property (nonatomic, readonly) TITypingSession *typingSession;
@property (nonatomic, readonly) TITypingSessionAligned *typingSessionAligned;
@property (nonatomic, readonly) HCHuffmanCoder *wordCoder;

- (void).cxx_destruct;
- (void)_prepareCharacterCoderMatchingSession;
- (void)_prepareWordCoderMatchingSession;
- (id)characterCoder;
- (id)characterExplodedRecords;
- (void)dealloc;
- (id)delegate;
- (id)initWithTypingSession:(id)arg1 aligned:(id)arg2;
- (bool)isWordEntryReallyOOV:(id)arg1 caseSensitive:(bool)arg2;
- (struct _LXLexicon { }*)lexiconPrimaryInputMode;
- (struct _LXLexicon { }*)lexiconSecondaryInputMode;
- (id)primaryInputModeLocaleIndentifier;
- (id)recordingKey;
- (id)recordingKeyLocaleSubstring;
- (id)records;
- (bool)report;
- (id)secondaryInputModeLocaleIdentifier;
- (void)setDelegate:(id)arg1;
- (id)typingSession;
- (id)typingSessionAligned;
- (id)wordCoder;

@end
