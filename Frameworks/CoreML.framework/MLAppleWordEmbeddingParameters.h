
@interface MLAppleWordEmbeddingParameters : NSObject {
    NSString * _inputFeatureName;
    NSString * _language;
    NSDictionary * _metadata;
    NSData * _modelParameterData;
    NSString * _outputFeatureName;
    unsigned long long  _revision;
}

@property (retain) NSString *inputFeatureName;
@property (retain) NSString *language;
@property (retain) NSDictionary *metadata;
@property (retain) NSData *modelParameterData;
@property (retain) NSString *outputFeatureName;
@property unsigned long long revision;

- (void).cxx_destruct;
- (id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 outputFeatureName:(id)arg4 modelData:(id)arg5 error:(id*)arg6;
- (id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 outputFeatureName:(id)arg4 modelData:(id)arg5 metadata:(id)arg6 error:(id*)arg7;
- (id)inputFeatureName;
- (id)language;
- (id)metadata;
- (id)modelParameterData;
- (id)outputFeatureName;
- (unsigned long long)revision;
- (void)setInputFeatureName:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setModelParameterData:(id)arg1;
- (void)setOutputFeatureName:(id)arg1;
- (void)setRevision:(unsigned long long)arg1;

@end
