
@interface _LTDisambiguableSentence : NSObject <NSCopying, NSSecureCoding, _LTDisambiguableSentenceHistoryProviding> {
    NSUUID * _UUID;
    <_LTDisambiguableSentenceDelegate> * _delegate;
    NSMutableArray * _history;
    <_LTDisambiguableSentenceHistoryProviding> * _historyProvider;
    unsigned long long  _selectedPhraseIndex;
    NSString * _sourceText;
    NSArray * _targetPhrases;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_LTDisambiguableSentenceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasDisambiguations;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *history;
@property (nonatomic) <_LTDisambiguableSentenceHistoryProviding> *historyProvider;
@property (nonatomic) unsigned long long selectedPhraseIndex;
@property (nonatomic, readonly) _LTDisambiguationNode *selectedTargetPhrase;
@property (nonatomic, readonly) NSString *sourceText;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *targetPhrases;
@property (nonatomic, readonly) NSString *targetText;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (void)_commonInit;
- (id)_directedEdgeFromUnvalidatedEdge:(id)arg1;
- (id)_genderForLinkIndex:(unsigned long long)arg1 inPhraseIndex:(unsigned long long)arg2;
- (id)_generateAttributedStringForLocation:(unsigned long long)arg1 result:(id)arg2 excludedTypes:(id)arg3 globalAttributes:(id)arg4 attributeProvider:(id /* block */)arg5;
- (bool)_hasOverlapInRangeArray:(id)arg1;
- (id)_historyForEncoding;
- (id)_includedTypesFromDelegate;
- (id)_includedTypesFromExcludedTypes:(id)arg1;
- (void)_insertPrefix:(id)arg1;
- (id)_preferredEdgeFromEdgesWithDuplicateMeaning:(id)arg1 forLinkIndex:(unsigned long long)arg2 inPhrase:(unsigned long long)arg3;
- (unsigned long long)_preferredGenderFromEdgesWithDuplicateMeaning:(id)arg1 forLinkIndex:(unsigned long long)arg2 inPhrase:(unsigned long long)arg3;
- (void)_removeUnvalidatedAdjacencyLists;
- (bool)_restoreChanges:(id)arg1;
- (id)_userSelectionFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)_validateAndPopulateEdges;
- (void)addNodeIndexToHistory:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDisambiguations;
- (bool)hasDisambiguationsOfType:(unsigned long long)arg1;
- (id)history;
- (id)historyProvider;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceText:(id)arg1 targetPhrases:(id)arg2 selectedPhraseIndex:(unsigned long long)arg3;
- (id)meaningDescriptionForLinkIndex:(unsigned long long)arg1 inTargetPhrase:(unsigned long long)arg2;
- (id)menuConfigurationsForLinkIndex:(unsigned long long)arg1;
- (unsigned long long)selectedPhraseIndex;
- (id)selectedTargetPhrase;
- (void)setDelegate:(id)arg1;
- (void)setHistoryProvider:(id)arg1;
- (void)setSelectedPhraseIndex:(unsigned long long)arg1;
- (id)sourceText;
- (id)sourceTextSnippetForLinkIndex:(unsigned long long)arg1;
- (id)targetPhrases;
- (id)targetText;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (id)_sentenceWithSourceString:(id)arg1 targetPhrases:(id)arg2 expectedNumberOfPhrases:(unsigned long long)arg3;
+ (id)sentenceFromFTSpeechResponse:(id)arg1 sourceText:(id)arg2 censorSpeech:(bool)arg3;
+ (id)sentenceFromOspreyBatchSentence:(id)arg1;
+ (id)sentenceFromOspreyResponse:(id)arg1;

@end
