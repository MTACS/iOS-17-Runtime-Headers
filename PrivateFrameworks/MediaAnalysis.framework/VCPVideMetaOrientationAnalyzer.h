
@interface VCPVideMetaOrientationAnalyzer : VCPVideoMetaAnalyzer {
    NSMutableArray * _results;
}

- (void).cxx_destruct;
- (id)init;
- (id)privateResults;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2;

@end
