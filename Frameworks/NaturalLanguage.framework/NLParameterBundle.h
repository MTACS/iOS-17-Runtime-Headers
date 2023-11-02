
@interface NLParameterBundle : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _metadata;
    NSArray * _parameterNames;
    NSDictionary * _parameterValues;
    NSArray * _parameters;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSDictionary *metadata;
@property (nonatomic, readonly, copy) NSArray *parameterNames;
@property (nonatomic, readonly, copy) NSDictionary *parameterValues;
@property (nonatomic, readonly, copy) NSArray *parameters;

+ (id)parameterBundleWithContentsOfURL:(id)arg1 error:(id*)arg2;
+ (id)parameterBundleWithParameters:(id)arg1 values:(id)arg2 metadata:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)getContinuousParameterValueForName:(id)arg1 value:(double*)arg2;
- (bool)getIntegralParameterValueForName:(id)arg1 value:(long long*)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfURL:(id)arg1 error:(id*)arg2;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(id*)arg2;
- (id)initWithParameters:(id)arg1 values:(id)arg2 metadata:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)parameterForName:(id)arg1;
- (id)parameterNames;
- (id)parameterValueForName:(id)arg1;
- (id)parameterValues;
- (id)parameters;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
