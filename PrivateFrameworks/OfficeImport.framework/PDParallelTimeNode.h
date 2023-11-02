
@interface PDParallelTimeNode : PDTimeNode {
    PDParallelTimeNodeBuildInfo * mBuildInfo;
}

@property (retain) PDParallelTimeNodeBuildInfo *buildInfo;

- (void).cxx_destruct;
- (id)buildInfo;
- (void)setBuildInfo:(id)arg1;

@end
