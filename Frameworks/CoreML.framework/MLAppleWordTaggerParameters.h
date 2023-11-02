
@interface MLAppleWordTaggerParameters : NSObject {
    NSString * _inputFeatureName;
    NSString * _language;
    NSDictionary * _metadata;
    NSData * _modelParameterData;
    unsigned long long  _revision;
    NSArray * _tagNames;
    NSString * _tokenLengthsOutputFeatureName;
    NSString * _tokenLocationsOutputFeatureName;
    NSString * _tokenTagsOutputFeatureName;
    NSString * _tokensOutputFeatureName;
}

@property (retain) NSString *inputFeatureName;
@property (retain) NSString *language;
@property (retain) NSDictionary *metadata;
@property (retain) NSData *modelParameterData;
@property unsigned long long revision;
@property (retain) NSArray *tagNames;
@property (retain) NSString *tokenLengthsOutputFeatureName;
@property (retain) NSString *tokenLocationsOutputFeatureName;
@property (retain) NSString *tokenTagsOutputFeatureName;
@property (retain) NSString *tokensOutputFeatureName;

- (void).cxx_destruct;
- (id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 tokensFeatureName:(id)arg4 tokenTagsFeatureName:(id)arg5 tokenLocationsFeatureName:(id)arg6 tokenLengthsFeatureName:(id)arg7 modelData:(id)arg8 tagNames:(id)arg9 error:(id*)arg10;
- (id)initWithData:(unsigned long long)arg1 language:(id)arg2 inputFeatureName:(id)arg3 tokensFeatureName:(id)arg4 tokenTagsFeatureName:(id)arg5 tokenLocationsFeatureName:(id)arg6 tokenLengthsFeatureName:(id)arg7 modelData:(id)arg8 tagNames:(id)arg9 metadata:(id)arg10 error:(id*)arg11;
- (id)inputFeatureName;
- (id)language;
- (id)metadata;
- (id)modelParameterData;
- (unsigned long long)revision;
- (void)setInputFeatureName:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setModelParameterData:(id)arg1;
- (void)setRevision:(unsigned long long)arg1;
- (void)setTagNames:(id)arg1;
- (void)setTokenLengthsOutputFeatureName:(id)arg1;
- (void)setTokenLocationsOutputFeatureName:(id)arg1;
- (void)setTokenTagsOutputFeatureName:(id)arg1;
- (void)setTokensOutputFeatureName:(id)arg1;
- (id)tagNames;
- (id)tokenLengthsOutputFeatureName;
- (id)tokenLocationsOutputFeatureName;
- (id)tokenTagsOutputFeatureName;
- (id)tokensOutputFeatureName;

@end
