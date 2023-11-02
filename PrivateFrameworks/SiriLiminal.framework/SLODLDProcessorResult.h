
@interface SLODLDProcessorResult : NSObject {
    NSString * _configVersion;
    NSDictionary * _features;
    float  _odldScore;
    float  _outputAnchor;
    NSData * _outputEmb;
    NSArray * _tokens;
}

@property (nonatomic, readonly) NSString *configVersion;
@property (nonatomic, readonly) NSDictionary *features;
@property (nonatomic, readonly) float odldScore;
@property (nonatomic, readonly) float outputAnchor;
@property (nonatomic, readonly) NSData *outputEmb;
@property (nonatomic, readonly) NSArray *tokens;

- (void).cxx_destruct;
- (id)configVersion;
- (id)description;
- (id)features;
- (id)initWithScore:(float)arg1 withVersion:(id)arg2 tokens:(id)arg3 features:(id)arg4 outputEmb:(id)arg5 outputAnchor:(float)arg6;
- (float)odldScore;
- (float)outputAnchor;
- (id)outputEmb;
- (id)tokens;

@end
