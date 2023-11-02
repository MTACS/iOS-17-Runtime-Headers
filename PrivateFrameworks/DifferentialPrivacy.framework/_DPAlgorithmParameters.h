
@interface _DPAlgorithmParameters : NSObject {
    NSDictionary * _parameterDictionary;
}

@property (nonatomic, readonly) NSDictionary *parameterDictionary;

+ (id)algorithmParametersForKey:(id)arg1;
+ (id)algorithmParametersFromDictionary:(id)arg1;
+ (id)allAlgorithmNames;
+ (id)parametersFromFile:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)parameterDictionary;

@end
