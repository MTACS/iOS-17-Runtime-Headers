
@interface _PIAutoLoopAnalysisResult : _NURenderResult <PIAutoLoopAnalysisResult> {
    NSDictionary * _recipe;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSDictionary *recipe;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)recipe;
- (void)setRecipe:(id)arg1;

@end
