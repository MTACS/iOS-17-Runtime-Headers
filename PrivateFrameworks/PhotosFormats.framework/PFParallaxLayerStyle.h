
@interface PFParallaxLayerStyle : NSObject <NSSecureCoding> {
    NSArray * _colorSuggestions;
    NSString * _kind;
    NSDictionary * _parameters;
}

@property (nonatomic, readonly, copy) NSArray *colorSuggestions;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly, copy) NSDictionary *parameters;

+ (id)deserializeColorSuggestions:(id)arg1 error:(id*)arg2;
+ (id)deserializeParameter:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
+ (id)deserializeParameters:(id)arg1 error:(id*)arg2;
+ (id)dictionaryWithStyle:(id)arg1;
+ (bool)isSegmentedStyle:(id)arg1;
+ (id)serializeColorSuggestions:(id)arg1;
+ (id)serializeParameter:(id)arg1 forKey:(id)arg2;
+ (id)serializeParameters:(id)arg1;
+ (bool)styleKind:(id)arg1 supportsParameter:(id)arg2;
+ (id)styleWithDictionary:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;
+ (bool)validateParameterKey:(id)arg1 value:(id)arg2 error:(id*)arg3;
+ (bool)validateParameters:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)colorSuggestions;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKind:(id)arg1 parameters:(id)arg2 colorSuggestions:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToParallaxLayerStyle:(id)arg1;
- (id)kind;
- (id)parameters;

@end
