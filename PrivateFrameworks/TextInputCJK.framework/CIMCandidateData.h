
@interface CIMCandidateData : NSObject {
    NSMutableDictionary * _candidateInfoCache;
    TIInputMode * _inputMode;
    int  _sortingMethod;
    NSArray * _storedCandidates;
}

@property (nonatomic, retain) NSMutableDictionary *candidateInfoCache;
@property (nonatomic, readonly) TIInputMode *inputMode;
@property (nonatomic) int sortingMethod;
@property (nonatomic, retain) NSArray *storedCandidates;

+ (bool)shouldShowZhuyinSortingMethod;
+ (id)sortTitleFromSortingMethod:(int)arg1;

- (void).cxx_destruct;
- (void)addCharacter:(id)arg1 groupLabel:(id)arg2 dictionary:(id)arg3 isSecondary:(bool)arg4;
- (id)candidateGroupsFromDictionary:(id)arg1 sortedKeys:(id)arg2;
- (id)candidateInfoCache;
- (id)candidatesSortedByEmoji:(id)arg1;
- (id)candidatesSortedByFrequency:(id)arg1 omittingEmoji:(bool)arg2;
- (id)candidatesSortedByMethod:(int)arg1 omittingEmoji:(bool)arg2;
- (id)candidatesSortedByPinyinOrZhuyin:(id)arg1 simplified:(bool)arg2 zhuyin:(bool)arg3;
- (id)candidatesSortedByRadical:(id)arg1 simplified:(bool)arg2 collationLocale:(id)arg3;
- (id)candidatesSortedByStrokes:(id)arg1 simplified:(bool)arg2;
- (id)candidatesSortedByWubi:(id)arg1 omittingEmoji:(bool)arg2;
- (void)clearCache;
- (id)init;
- (id)initWithInputMode:(id)arg1;
- (id)inputMode;
- (void)setCandidateInfoCache:(id)arg1;
- (void)setCandidates:(id)arg1;
- (void)setSortingMethod:(int)arg1;
- (void)setStoredCandidates:(id)arg1;
- (void)sortCharactersByStrokeCount:(id)arg1 wordPropertiesDictionary:(id)arg2;
- (int)sortingMethod;
- (id)storedCandidates;
- (id)wordPropertyDictionaryForCandidates:(id)arg1 isSimplified:(bool)arg2;

@end
