
@interface CVNLPDecodingLexicons : CVNLPInformationStream {
    int (* _inputNormalizationFunction;
    NSArray * _sortedLexicons;
}

@property (nonatomic, readonly) int (*inputNormalizationFunction;

- (void).cxx_destruct;
- (unsigned long long)count;
- (void)enumerateLexiconsSortedByPriorityWithBlock:(id /* block */)arg1;
- (id)initWithLexicons:(id)arg1;
- (id)initWithLexicons:(id)arg1 decodingWeight:(id)arg2;
- (id)initWithLexicons:(id)arg1 decodingWeight:(id)arg2 lowerBoundLogProbability:(id)arg3;
- (id)initWithLexicons:(id)arg1 decodingWeight:(id)arg2 lowerBoundLogProbability:(id)arg3 inputNormalizationFunction:(int (*)arg4;
- (int (*)inputNormalizationFunction;
- (id)lexiconsForPriority:(unsigned long long)arg1;
- (id)packagedLexiconCursorsUsingTextDecodingContext:(id)arg1;
- (id)packagedLexiconRootCursors;

@end
