
@interface MLAppleGazetteerParameters : NSObject {
    NSString * _inputFeatureName;
    NSArray * _labelNames;
    NSString * _language;
    NSDictionary * _metadata;
    NSData * _modelParameterData;
    NSString * _outputFeatureName;
    unsigned long long  _revision;
}

@property (retain) NSString *inputFeatureName;
@property (retain) NSArray *labelNames;
@property (retain) NSString *language;
@property (retain) NSDictionary *metadata;
@property (retain) NSData *modelParameterData;
@property (retain) NSString *outputFeatureName;
@property unsigned long long revision;

- (void).cxx_destruct;
- (id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 outputFeatureName:(id)arg4 modelData:(id)arg5 labelNames:(id)arg6 metadata:(id)arg7 error:(id*)arg8;
- (id)inputFeatureName;
- (id)labelNames;
- (id)language;
- (id)metadata;
- (id)modelParameterData;
- (id)outputFeatureName;
- (unsigned long long)revision;
- (void)setInputFeatureName:(id)arg1;
- (void)setLabelNames:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setModelParameterData:(id)arg1;
- (void)setOutputFeatureName:(id)arg1;
- (void)setRevision:(unsigned long long)arg1;

@end
