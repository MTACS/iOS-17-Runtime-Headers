
@interface TIAutocorrectionList : NSObject <NSSecureCoding> {
    bool  _containsProactiveTriggers;
    TICorrectionCandidates * _corrections;
    NSArray * _emojiList;
    NSArray * _inlineCompletions;
    NSArray * _predictions;
    bool  _proactiveSuggestionsEmpty;
    NSArray * _proactiveTriggers;
}

@property (nonatomic, readonly) NSArray *alternateCorrections;
@property (nonatomic, readonly) TIKeyboardCandidate *autocorrection;
@property (nonatomic, readonly) TIKeyboardCandidate *autocorrectionIfSupplemental;
@property (nonatomic, readonly) NSArray *candidates;
@property (nonatomic, readonly) bool containsAutofillCandidates;
@property (nonatomic, readonly) bool containsContinuousPathConversions;
@property (nonatomic) bool containsProactiveTriggers;
@property (nonatomic, readonly) TICorrectionCandidates *corrections;
@property (nonatomic, readonly) NSArray *emojiList;
@property (nonatomic, readonly) bool empty;
@property (nonatomic, readonly) bool hasSupplementalCandidates;
@property (nonatomic, readonly) NSArray *inlineCompletions;
@property (nonatomic, readonly) bool isShowingSuggestionForKeyboardCamera;
@property (nonatomic, readonly) bool notEmpty;
@property (nonatomic, readonly) NSArray *predictions;
@property (nonatomic, readonly) NSArray *predictionsIfSupplemental;
@property (nonatomic) bool proactiveSuggestionsEmpty;
@property (nonatomic, readonly) NSArray *proactiveTriggers;
@property (nonatomic, readonly) bool shouldAcceptTopCandidate;

// Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput

+ (id)autocorrectionListWithCandidates:(id)arg1 shouldAcceptTopCandidate:(bool)arg2;
+ (id)listWithAutocorrection:(id)arg1;
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2;
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3;
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 inlineCompletions:(id)arg4;
+ (id)listWithAutocorrection:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;
+ (id)listWithCorrections:(id)arg1;
+ (id)listWithCorrections:(id)arg1 inlineCompletionList:(id)arg2;
+ (id)listWithCorrections:(id)arg1 predictions:(id)arg2;
+ (id)listWithCorrections:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3;
+ (id)listWithCorrections:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 inlineCompletionList:(id)arg4 proactiveTriggers:(id)arg5;
+ (id)listWithCorrections:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 inlineCompletions:(id)arg4;
+ (id)listWithCorrections:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;
+ (id)listWithPredictions:(id)arg1 emojiList:(id)arg2 proactiveTriggers:(id)arg3;
+ (id)listWithPredictions:(id)arg1 proactiveTriggers:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alternateCorrections;
- (id)autocorrection;
- (id)autocorrectionIfSupplemental;
- (id)candidates;
- (bool)containsProactiveTriggers;
- (id)corrections;
- (id)description;
- (id)emojiList;
- (bool)empty;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSupplementalCandidates;
- (bool)hasSupplementalItems;
- (id)initListWithCorrections:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4 inlineCompletions:(id)arg5;
- (id)initWithCandidates:(id)arg1;
- (id)initWithCandidates:(id)arg1 shouldAcceptTopCandidate:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithCorrections:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4;
- (id)initWithCorrections:(id)arg1 predictions:(id)arg2 emojiList:(id)arg3 proactiveTriggers:(id)arg4 inlineCompletions:(id)arg5;
- (id)inlineCompletions;
- (bool)isSupplementalCandidateInPredictions:(id)arg1;
- (id)predictions;
- (id)predictionsIfSupplemental;
- (bool)proactiveSuggestionsEmpty;
- (id)proactiveTriggers;
- (void)setContainsProactiveTriggers:(bool)arg1;
- (void)setProactiveSuggestionsEmpty:(bool)arg1;
- (bool)shouldAcceptInlineCompletion;
- (bool)shouldAcceptTopCandidate;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (bool)containsAutofillCandidates;
- (bool)containsContinuousPathConversions;
- (bool)isShowingSuggestionForKeyboardCamera;
- (bool)notEmpty;
- (long long)sourceForAutocorrection;
- (id)ui_allSupplementalCandidates;
- (void)updateLabelsWithSmartPunctuation:(id)arg1;

@end
