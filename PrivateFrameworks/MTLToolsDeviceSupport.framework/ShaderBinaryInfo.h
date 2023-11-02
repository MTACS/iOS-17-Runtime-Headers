
@interface ShaderBinaryInfo : NSObject {
    DYShaderAnalyzerResult * _analyzerResult;
    NSData * _binary;
    NSNumber * _dylib;
    NSString * _type;
    NSMutableData * _uscSamples;
}

@property (nonatomic, retain) DYShaderAnalyzerResult *analyzerResult;
@property (nonatomic, retain) NSData *binary;
@property (nonatomic, retain) NSNumber *dylib;
@property (nonatomic, retain) NSString *type;
@property (nonatomic, retain) NSMutableData *uscSamples;

- (void).cxx_destruct;
- (id)analyzerResult;
- (id)binary;
- (id)dylib;
- (id)init;
- (void)setAnalyzerResult:(id)arg1;
- (void)setBinary:(id)arg1;
- (void)setDylib:(id)arg1;
- (void)setType:(id)arg1;
- (void)setUscSamples:(id)arg1;
- (id)type;
- (id)uscSamples;

@end
