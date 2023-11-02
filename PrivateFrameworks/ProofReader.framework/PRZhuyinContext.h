
@interface PRZhuyinContext : PRAutocorrectionContext {
    NSMutableArray * _addedModifications;
    NSMutableArray * _addedRemovedModifications;
    char * _buffer;
    void * _connection;
    unsigned long long  _endIndex;
    unsigned long long  _lastIndexes;
    bool  _lastSyllableIsPartial;
    unsigned long long  _length;
    unsigned long long  _lengthBeforeApostrophes;
    NSMutableArray * _modifications;
    unsigned long long  _nextIndexes;
    NSMutableArray * _prefixes;
    NSMutableArray * _removedModifications;
    unsigned long long  _startIndex;
    unsigned long long  _startingPoint;
    unsigned long long * _syllableLengthArray;
}

- (void)_addDeletions;
- (void)_addInsertions;
- (void)_addReplacements;
- (void)_addTranspositions;
- (void)_advanceIndexes;
- (void)_filterModifications;
- (void)_removeModificationsAndMoveStartingPoint;
- (void)addInputCharacter:(unsigned short)arg1 geometryModel:(void*)arg2 geometryData:(id)arg3;
- (id)addedModifications;
- (id)currentModifications;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)removeNumberOfInputCharacters:(unsigned long long)arg1;
- (id)removedModifications;
- (void)reset;

@end