
@interface MLRTaskParameters : NSObject <NSSecureCoding> {
    unsigned long long  _count;
    NSDictionary * _recipeUserInfo;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly, copy) NSDictionary *recipeUserInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)boolValueForKey:(id)arg1 defaultValue:(bool)arg2;
- (unsigned long long)count;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValueForKey:(id)arg1 defaultValue:(double)arg2;
- (void)encodeWithCoder:(id)arg1;
- (float)floatValueForKey:(id)arg1 defaultValue:(float)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDESRecipe:(id)arg1;
- (id)initWithParametersDict:(id)arg1;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (long long)integerValueForKey:(id)arg1 defaultValue:(long long)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)recipeUserInfo;
- (id)stringValueForKey:(id)arg1 defaultValue:(id)arg2;
- (unsigned long long)unsignedIntegerValueForKey:(id)arg1 defaultValue:(unsigned long long)arg2;

@end
