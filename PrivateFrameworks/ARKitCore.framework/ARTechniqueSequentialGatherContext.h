
@interface ARTechniqueSequentialGatherContext : ARTechniqueGatherContext <ARDaemonSecureCoding> {
    NSMutableArray * _gatheredData;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addResultData:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)gatheredData;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentContext:(id)arg1;
- (void)mergeResultsOfContext:(id)arg1 resultFilterBlock:(id /* block */)arg2;

@end
