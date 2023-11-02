
@interface TypistPathUtilities : NSObject

+ (struct CGPoint { double x1; double x2; })_addPoint:(struct CGPoint { double x1; double x2; })arg1 andPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (id)_connectPath:(id)arg1 forCharacters:(id)arg2 withRegion:(id)arg3;
+ (id)_decomposeCharactersWhereNeeded:(id)arg1;
+ (id)_decomposeGraphemeIntoSeparateCharactersIfNeeded:(id)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_determineShiftBasedOnDirection:(int)arg1;
+ (id)_determineWritingStyle:(id)arg1 forCharacters:(id)arg2;
+ (double)_dotProduct:(struct CGPoint { double x1; double x2; })arg1 and:(struct CGPoint { double x1; double x2; })arg2;
+ (int)_getScribbleRuleFromRegion:(id)arg1;
+ (id)_getTextClustersFrom:(id)arg1 forCharacters:(id)arg2;
+ (id)_getWidthAndHeight:(id)arg1 forCharacters:(id)arg2;
+ (id)_jamoShiftsForStructure:(int)arg1;
+ (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_makeTranslationWithOffset:(double)arg1;
+ (int)_mappingRegionToVariantID:(id)arg1;
+ (struct sqlite3 { }*)_openDatabaseFromFile:(id)arg1;
+ (id)_processArabicCharacter:(id)arg1 withPathMap:(id)arg2 forLocale:(unsigned long long)arg3;
+ (id)_processCharacters:(id)arg1 withPathMap:(id)arg2 forLocale:(int)arg3;
+ (id)_processHangulCharacter:(unsigned short)arg1 withPathMap:(id)arg2 forLocale:(unsigned long long)arg3;
+ (id)_processThaiCharacter:(id)arg1 withPathMap:(id)arg2 forLocale:(unsigned long long)arg3;
+ (unsigned long long)_queryDatabase:(struct sqlite3 { }*)arg1 withSql:(id)arg2 forRegion:(id)arg3;
+ (id)_queryHandwritingSourceForCharactersInString:(id)arg1 withRegion:(id)arg2;
+ (struct CGPoint { double x1; double x2; })_reflectPoint:(struct CGPoint { double x1; double x2; })arg1 origin:(struct CGPoint { double x1; double x2; })arg2;
+ (struct CGPoint { double x1; double x2; })_scalarMultiplyPoint:(struct CGPoint { double x1; double x2; })arg1 by:(double)arg2;
+ (id)_separateFinalFormCharacters:(id)arg1;
+ (id)_separateIsolatedCharacters:(id)arg1;
+ (id)_separateUniqueCharacters:(id)arg1;
+ (id)_shiftPath:(id)arg1 forCharacters:(id)arg2 withRule:(int)arg3;
+ (id)_shiftThaiStrokes:(id)arg1 withRatio:(double)arg2 ofHeight:(id)arg3;
+ (struct CGPoint { double x1; double x2; })_subtractPoint:(struct CGPoint { double x1; double x2; })arg1 byPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (bool)_validatePoints:(struct CGPoint { double x1; double x2; })arg1 To:(struct CGPoint { double x1; double x2; })arg2;
+ (id)convertCurveDeleteTouchPoints:(struct CGPoint { double x1; double x2; })arg1 endPoint:(struct CGPoint { double x1; double x2; })arg2 curveHeight:(double)arg3 curveDensity:(long long)arg4 tilt:(double)arg5;
+ (id)convertSVGPaths:(id)arg1 withTransformation:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
+ (id)convertSVGStringPathToUIBezierPath:(id)arg1;
+ (id)convertSingleSVGPaths:(id)arg1 withTransformation:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2;
+ (id)convertUIBezierPathToTouchPoints:(id)arg1;
+ (id)generatePathArgumentStringWithParameters:(id)arg1 fromPoints:(id)arg2;
+ (id)getPathData:(id)arg1 fromPathMap:(id)arg2;
+ (id)getPathDataForCharacters:(id)arg1 withRegion:(id)arg2 isCursive:(bool)arg3;
+ (id)getStrokesForJamo:(id)arg1 forVariant:(bool)arg2 ofType:(int)arg3 fromPath:(id)arg4 forLocale:(unsigned long long)arg5;
+ (id)getTextClustersFrom:(id)arg1 withRegion:(id)arg2;
+ (unsigned long long)getTotalWidthForText:(id)arg1 isCursive:(bool)arg2 withRegion:(id)arg3 fromPathMap:(id)arg4;
+ (double)getWidthOfFirstCharacterInString:(id)arg1;
+ (bool)isKoreanConsonantVariant:(unsigned short)arg1;
+ (struct CGPoint { double x1; double x2; })pointOnCurve:(id)arg1 atTime:(double)arg2;
+ (struct CGPoint { double x1; double x2; })pointOnSineCurve:(double)arg1 withHeight:(double)arg2 withStartPoint:(struct CGPoint { double x1; double x2; })arg3 withEndPoint:(struct CGPoint { double x1; double x2; })arg4 atTime:(double)arg5;
+ (id)shiftJamosInSyllable:(id)arg1 withPath:(id)arg2 forLocale:(unsigned long long)arg3;
+ (id)shiftStrokesForJamo:(id)arg1 withDirection:(int)arg2;

@end
