
@interface AMDClassifierRecoModel : AMDBaseRecoModel

- (id)getPredictions:(unsigned long long)arg1 andInputBuilder:(id)arg2 andOutputBuilder:(id)arg3 withColdstartModelId:(id)arg4 error:(id*)arg5;
- (id)initWithId:(id)arg1 andVersion:(unsigned long long)arg2;

@end
