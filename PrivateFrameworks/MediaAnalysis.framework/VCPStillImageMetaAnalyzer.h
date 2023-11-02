
@interface VCPStillImageMetaAnalyzer : VCPVideoMetaAnalyzer {
    NSMutableArray * _results;
}

- (void).cxx_destruct;
- (id)initWithRequestAnalyses:(unsigned long long)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2;
- (id)privateResults;
- (int)processMetadataGroup:(id)arg1 flags:(unsigned long long*)arg2;

@end
