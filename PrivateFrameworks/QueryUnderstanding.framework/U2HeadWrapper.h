
@interface U2HeadWrapper : NSObject {
    NSLocale * _locale;
    U2Head * _u2Head;
}

@property (nonatomic, readonly) NSDictionary *metadata;

+ (id)U2HeadBundle;
+ (id)log;
+ (void)setU2HeadBundle:(id)arg1;
+ (void)setUseSpotlightResources:(bool)arg1;
+ (id)signpostLog;
+ (bool)useSpotlightResources;

- (void).cxx_destruct;
- (id)argmaxWithIndex:(id)arg1;
- (id)assetURL;
- (struct vector<float, std::allocator<float>> { float *x1; float *x2; struct __compressed_pair<float *, std::allocator<float>> { float *x_3_1_1; } x3; })getTokenScoresfromScoreTensor:(id)arg1 intentIndex:(int)arg2 tokens:(id)arg3 subtokenLenForTokens:(id)arg4 subtokens:(id)arg5 scoreFromSubtokenScores:(id /* block */)arg6;
- (id)getU2PredictionsForEmbedding:(id)arg1 queryString:(id)arg2 tokens:(id)arg3 subtokenLenForTokens:(id)arg4 subtokens:(id)arg5 error:(id*)arg6;
- (id)initWithLocale:(id)arg1;
- (void)loadWithCompletionHandler:(id /* block */)arg1;
- (id)mapLogitsToLabels:(id)arg1 queryString:(id)arg2 tokens:(id)arg3 subtokenLenForTokens:(id)arg4 subtokens:(id)arg5;
- (id)metadata;

@end
