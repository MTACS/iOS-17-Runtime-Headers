
@interface MLRTrialDediscoRecipe : NSObject {
    NSString * _baseKeyFormat;
    NSDictionary * _dediscoTaskConfig;
    NSDictionary * _dpConfig;
    NSDictionary * _encodingSchema;
}

@property (nonatomic, readonly) NSString *baseKeyFormat;
@property (nonatomic, readonly) NSDictionary *dediscoTaskConfig;
@property (nonatomic, readonly) NSDictionary *dpConfig;
@property (nonatomic, readonly) NSDictionary *encodingSchema;

- (void).cxx_destruct;
- (id)baseKeyFormat;
- (id)dediscoTaskConfig;
- (id)description;
- (id)dpConfig;
- (id)encodingSchema;
- (id)initWithAssetURL:(id)arg1 configOverride:(id)arg2 error:(id*)arg3;
- (id)mlrDediscoMetadata;

@end
