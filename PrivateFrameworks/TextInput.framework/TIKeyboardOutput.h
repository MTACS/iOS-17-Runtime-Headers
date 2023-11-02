
@interface TIKeyboardOutput : NSObject <NSSecureCoding> {
    TIKeyboardCandidate * _acceptedCandidate;
    NSMutableDictionary * _customInfo;
    unsigned long long  _deletionCount;
    unsigned long long  _forwardDeletionCount;
    NSIndexSet * _handwritingStrokesToDelete;
    NSString * _insertionText;
    NSString * _insertionTextAfterSelection;
    long long  _positionOffset;
    bool  _producedByDeleteInput;
    TIKeyboardCandidate * _shortcutConversion;
    bool  _shouldSendCurrentLocation;
    NSString * _textToCommit;
    bool  _unmarkIfNecessary;
}

@property (getter=_isEmpty, nonatomic, readonly) bool _empty;
@property (nonatomic, retain) TIKeyboardCandidate *acceptedCandidate;
@property (nonatomic, retain) NSMutableDictionary *customInfo;
@property (nonatomic) unsigned long long deletionCount;
@property (nonatomic) unsigned long long forwardDeletionCount;
@property (nonatomic, copy) NSIndexSet *handwritingStrokesToDelete;
@property (nonatomic, copy) NSString *insertionText;
@property (nonatomic, copy) NSString *insertionTextAfterSelection;
@property (nonatomic) long long positionOffset;
@property (nonatomic) bool producedByDeleteInput;
@property (nonatomic, retain) TIKeyboardCandidate *shortcutConversion;
@property (nonatomic) bool shouldSendCurrentLocation;
@property (nonatomic, copy) NSString *textToCommit;
@property (nonatomic) bool unmarkIfNecessary;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)acceptedCandidate;
- (id)customInfo;
- (void)deleteBackward;
- (void)deleteBackward:(unsigned long long)arg1;
- (void)deleteForward;
- (void)deleteForward:(unsigned long long)arg1;
- (unsigned long long)deletionCount;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)forwardDeletionCount;
- (id)handwritingStrokesToDelete;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)insertText:(id)arg1;
- (void)insertTextAfterSelection:(id)arg1;
- (id)insertionText;
- (id)insertionTextAfterSelection;
- (bool)isEqual:(id)arg1;
- (long long)positionOffset;
- (bool)producedByDeleteInput;
- (void)setAcceptedCandidate:(id)arg1;
- (void)setCustomInfo:(id)arg1;
- (void)setDeletionCount:(unsigned long long)arg1;
- (void)setForwardDeletionCount:(unsigned long long)arg1;
- (void)setHandwritingStrokesToDelete:(id)arg1;
- (void)setInsertionText:(id)arg1;
- (void)setInsertionTextAfterSelection:(id)arg1;
- (void)setPositionOffset:(long long)arg1;
- (void)setProducedByDeleteInput:(bool)arg1;
- (void)setShortcutConversion:(id)arg1;
- (void)setShouldSendCurrentLocation:(bool)arg1;
- (void)setTextToCommit:(id)arg1;
- (void)setUnmarkIfNecessary:(bool)arg1;
- (id)shortcutConversion;
- (bool)shouldSendCurrentLocation;
- (id)textToCommit;
- (bool)unmarkIfNecessary;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void)_copyTo:(id)arg1;
- (bool)_isEmpty;

@end
