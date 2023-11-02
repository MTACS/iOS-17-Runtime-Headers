
@protocol CVNLPTextDecoding <NSObject>

@required

- (CVNLPTextDecodingResult *)decodingResultForKBestPaths:(unsigned long long)arg1 withBeamWidth:(unsigned long long)arg2;
- (CVNLPTextDecodingResult *)decodingResultForKBestPaths:(unsigned long long)arg1 withBeamWidth:(unsigned long long)arg2 context:(CVNLPTextDecodingContext *)arg3;
- (CVNLPTextDecodingResult *)decodingResultWithConfiguration:(CVNLPTextDecodingBeamSearchConfiguration *)arg1 withContext:(CVNLPTextDecodingContext *)arg2;
- (CVNLPTextDecodingResult *)greedyDecodingResult;
- (CVNLPTextDecodingResult *)greedyDecodingResultWithConfiguration:(CVNLPTextDecodingConfiguration *)arg1;

@end
