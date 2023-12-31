
@interface CRKOrderedOneToManyKVOAccumulatorResults : NSObject {
    NSIndexSet * _deletions;
    NSIndexSet * _insertions;
    NSArray * _moves;
    NSIndexSet * _replacements;
}

@property (nonatomic, retain) NSIndexSet *deletions;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (nonatomic, retain) NSIndexSet *insertions;
@property (nonatomic, retain) NSArray *moves;
@property (nonatomic, readonly) long long netCountChange;
@property (nonatomic, retain) NSIndexSet *replacements;

- (void).cxx_destruct;
- (id)deletions;
- (id)description;
- (id)insertions;
- (bool)isEmpty;
- (id)moves;
- (long long)netCountChange;
- (id)replacements;
- (id)resultsByExcludingLocalDeletions:(id)arg1;
- (void)setDeletions:(id)arg1;
- (void)setInsertions:(id)arg1;
- (void)setMoves:(id)arg1;
- (void)setReplacements:(id)arg1;

@end
