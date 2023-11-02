
@interface CRCtcBeamSearch : NSObject {
    struct _LXLexicon { } * _dynamicLexicon;
    NSLocale * _locale;
}

@property (nonatomic) struct _LXLexicon { }*dynamicLexicon;
@property (nonatomic, readonly) NSLocale *locale;

- (void).cxx_destruct;
- (void)dealloc;
- (struct _LXLexicon { }*)dynamicLexicon;
- (id)initWithConfiguration:(id)arg1 error:(id*)arg2;
- (id)kBestPathsForInput:(id)arg1 k:(unsigned long long)arg2 beamWidth:(unsigned long long)arg3 outputProbs:(id*)arg4 outputWhitespaceRanges:(id*)arg5 error:(id*)arg6;
- (id)locale;
- (void)setDynamicLexicon:(struct _LXLexicon { }*)arg1;

@end
