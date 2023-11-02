
@interface TIMecabraCandidate : TIKeyboardCandidate {
    bool  _OTAWordListCandidate;
    bool  _asIsCandidate;
    bool  _bilingualCandidate;
    NSString * _candidate;
    bool  _continuousPathConversion;
    long long  _cursorMovement;
    unsigned long long  _deleteCount;
    bool  _emojiCandidate;
    bool  _extensionCandidate;
    NSString * _input;
    bool  _isAutocorrection;
    bool  _isForShortcutConversion;
    NSNumber * _mecabraCandidatePointerValue;
    bool  _partialCandidate;
    bool  _prefixMatched;
    NSString * _rawInput;
    bool  _regionalCandidate;
    bool  _responseKitCandidate;
    NSString * _responseKitCategory;
    bool  _shouldAccept;
    unsigned int  _sourceMask;
    bool  _wubixingConvertedByPinyin;
}

@property (getter=isContinuousPathConversion, nonatomic) bool continuousPathConversion;
@property (nonatomic, readonly) unsigned short flags;
@property (nonatomic, retain) NSNumber *mecabraCandidatePointerValue;
@property (getter=shouldAccept, nonatomic) bool shouldAccept;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (bool)supportsSecureCoding;
+ (int)type;

- (void).cxx_destruct;
- (id)candidate;
- (id)candidateByReplacingWithCandidate:(id)arg1;
- (id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2;
- (id)candidateByReplacingWithCandidate:(id)arg1 input:(id)arg2 rawInput:(id)arg3;
- (id)candidateByReplacingWithSourceMask:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cursorMovement;
- (unsigned long long)deleteCount;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned short)flags;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(unsigned short)arg4;
- (id)initWithCandidate:(id)arg1 forInput:(id)arg2 mecabraCandidatePointerValue:(id)arg3 withFlags:(unsigned short)arg4 deleteCount:(unsigned long long)arg5 cursorMovement:(long long)arg6;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseKitString:(id)arg1 responseKitCategory:(id)arg2 mecabraCandidatePointerValue:(id)arg3;
- (id)initWithSurface:(id)arg1 input:(id)arg2 mecabraCandidatePointerValue:(id)arg3;
- (id)input;
- (bool)isAsIsCandidate;
- (bool)isAutocorrection;
- (bool)isBilingualCandidate;
- (bool)isContinuousPathConversion;
- (bool)isEmojiCandidate;
- (bool)isEqual:(id)arg1;
- (bool)isExtensionCandidate;
- (bool)isForShortcutConversion;
- (bool)isFullwidthCandidate;
- (bool)isMecabraCandidate;
- (bool)isOTAWordListCandidate;
- (bool)isPartialCandidate;
- (bool)isPrefixMatched;
- (bool)isRegionalCandidate;
- (bool)isResponseKitCandidate;
- (bool)isWubixingConvertedByPinyin;
- (id)label;
- (id)mecabraCandidatePointerValue;
- (id)rawInput;
- (id)responseKitCategory;
- (void)setContinuousPathConversion:(bool)arg1;
- (void)setMecabraCandidatePointerValue:(id)arg1;
- (void)setShouldAccept:(bool)arg1;
- (void)setSourceMask:(unsigned int)arg1;
- (bool)shouldAccept;
- (unsigned int)sourceMask;

// Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore

+ (id)convertedInputFromMecabraCandidate:(void*)arg1;
+ (id)dictionaryReadingFromMecabraCandidate:(void*)arg1;
+ (id)displayReadingFromMecabraCandidate:(void*)arg1;
+ (id)mecabraCandidateWithCandidateRef:(const void*)arg1 autoconvertedCandidates:(id)arg2;

- (id)initWithMecabraCandidate:(const void*)arg1;
- (id)initWithMecabraCandidate:(const void*)arg1 cursorMovement:(long long)arg2;
- (id)initWithMecabraCandidate:(const void*)arg1 input:(id)arg2;
- (id)initWithMecabraCandidate:(const void*)arg1 input:(id)arg2 cursorMovement:(long long)arg3;

@end
