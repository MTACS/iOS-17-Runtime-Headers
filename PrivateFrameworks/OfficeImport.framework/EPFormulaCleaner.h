
@interface EPFormulaCleaner : EDProcessor {
    EDRowBlocks * mBaseFormulaRowBlocks;
    int  mColumnOffset;
    EDSheet * mCurrentSheet;
    EDFormula * mFormula;
    NSMutableDictionary * mNameArrayedTestCache;
    NSMutableDictionary * mNameCircularReferenceTestCache;
    EDName * mParentName;
    int  mRowOffset;
    EDFormula * mTokensToClean;
}

- (void).cxx_destruct;
- (void)addOffsetsToRow:(int*)arg1 rowRelative:(bool)arg2 column:(int*)arg3 columnRelative:(bool)arg4;
- (void)applyMaxCellsInName:(id)arg1;
- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (bool)checkCustomFunction:(unsigned int)arg1;
- (bool)checkFunctionId:(int)arg1 tokenIndex:(unsigned int)arg2;
- (bool)checkSupportedAddInName:(id)arg1 externalLink:(bool)arg2;
- (bool)cleanArea3D:(unsigned int)arg1;
- (bool)cleanArea:(unsigned int)arg1 updateSheet:(bool)arg2;
- (bool)cleanArray:(unsigned int)arg1;
- (void)cleanFormula:(id)arg1 name:(id)arg2;
- (void)cleanFormula:(id)arg1 sheet:(id)arg2;
- (void)cleanFormula:(id)arg1 sheet:(id)arg2 name:(id)arg3;
- (bool)cleanFunc:(unsigned int)arg1;
- (bool)cleanFuncVar:(unsigned int)arg1;
- (bool)cleanName:(unsigned int)arg1 nameIndex:(unsigned int)arg2 sheetIndex:(unsigned long long)arg3 tokenOffset:(int*)arg4;
- (bool)cleanName:(unsigned int)arg1 tokenOffset:(int*)arg2;
- (bool)cleanNameX:(unsigned int)arg1 tokenOffset:(int*)arg2;
- (bool)cleanRange:(unsigned int)arg1 tokenOffset:(int*)arg2;
- (bool)cleanRef3D:(unsigned int)arg1;
- (bool)cleanRef:(unsigned int)arg1 updateSheet:(bool)arg2;
- (bool)cleanTokenAtIndex:(unsigned int)arg1 tokenOffset:(int*)arg2;
- (bool)cleanUnion:(unsigned int)arg1;
- (bool)combineCellReferences:(unsigned int)arg1 tokenOffset:(int*)arg2;
- (bool)doesNameIndexContainCircularReferences:(unsigned int)arg1 sheetIndex:(unsigned long long)arg2 previousNameIndexes:(void*)arg3;
- (bool)isArrayedFormulaSupported:(id)arg1 allowSimpleRanges:(bool)arg2 formulasBeingEvaluated:(id)arg3;
- (bool)isLinkReferenceIndexSupported:(unsigned int)arg1 allowExternal:(bool)arg2;
- (bool)isObjectSupported:(id)arg1;
- (bool)isReferenceValidInLassoForRow:(int)arg1 rowRelative:(bool)arg2 column:(int)arg3 columnRelative:(bool)arg4;
- (bool)isReferenceValidInLassoForSheet:(id)arg1 rowMin:(int)arg2 rowMinRelative:(bool)arg3 rowMax:(int)arg4 rowMaxRelative:(bool)arg5 columnMin:(int)arg6 columnMinRelative:(bool)arg7 columnMax:(int)arg8 columnMaxRelative:(bool)arg9;
- (bool)isThereContentOutsideOfLassoBoundsForSheet:(id)arg1 rowMin:(int)arg2 rowMax:(int)arg3 columnMin:(int)arg4 columnMax:(int)arg5;
- (id)newFormulaToCleanFromSharedFormula:(id)arg1;
- (void)prepareToProcessFormula:(id)arg1 sheet:(id)arg2 name:(id)arg3;
- (void)reportWarning:(int)arg1;
- (void)reportWarning:(int)arg1 parameter:(id)arg2;
- (void)reset;
- (void)updateSheet:(id)arg1 row:(int)arg2 rowRelative:(bool)arg3 column:(int)arg4 columnRelative:(bool)arg5;
- (void)updateSheet:(id)arg1 rowMin:(int)arg2 rowMinRelative:(bool)arg3 rowMax:(int)arg4 rowMaxRelative:(bool)arg5 columnMin:(int)arg6 columnMinRelative:(bool)arg7 columnMax:(int)arg8 columnMaxRelative:(bool)arg9;
- (void)updateWorksheet:(id)arg1 row:(int)arg2 column:(int)arg3 inDictionary:(id)arg4;
- (bool)useEvaluationStackToCheckFunctionId:(int)arg1 functionName:(id)arg2 tokenIndex:(unsigned int)arg3;
- (unsigned int)useEvaluationStackToGetParameter:(unsigned int)arg1 tokenIndex:(unsigned int)arg2;
- (id)useEvaluationStackToGetParameter:(unsigned int)arg1 tokenIndex:(unsigned int)arg2 allReferencesAllowed:(bool)arg3 success:(bool*)arg4;
- (int)useEvaluationStackToGetParameterTokenType:(unsigned int)arg1 tokenIndex:(unsigned int)arg2 success:(bool*)arg3;
- (id)worksheetFromLinkReferenceIndex:(unsigned int)arg1;
- (id)worksheetsFromLinkReferenceIndex:(unsigned int)arg1;

@end
