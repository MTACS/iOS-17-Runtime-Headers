
@interface PSIWordEmbeddingTable : PSITable {
    PSIStatement * _checkStatement;
    PSIStatement * _deletePrefixStatement;
    PSIStatement * _deleteStatement;
    void * _embeddingRef;
    PSIStatement * _insertPrefixStatement;
    PSIStatement * _insertStatement;
    struct __CFLocale { } * _locale;
    PSIStatement * _selectMatchesStatement;
    PSIStatement * _selectStatement;
}

- (void).cxx_destruct;
- (void)cacheSearchableStatements;
- (void)cacheWritableStatements;
- (void)clear;
- (id)dumpWordEmbeddingTable;
- (void)finalizze;
- (id)initWithDelegate:(id)arg1 searchable:(bool)arg2 writable:(bool)arg3 locale:(id)arg4;
- (void)insertWord:(id)arg1 synonyms:(id)arg2;
- (bool)isInsertedWithWord:(id)arg1;
- (id)matchesForToken:(id)arg1;
- (void)removeWord:(id)arg1;
- (id)wordEmbeddingsForToken:(id)arg1;

@end
