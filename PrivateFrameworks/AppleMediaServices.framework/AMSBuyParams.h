
@interface AMSBuyParams : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary * _backingDictionary;
}

@property (readonly, copy) NSDictionary *dictionary;
@property (nonatomic, readonly, copy) NSDictionary *normalizedDictionary;
@property (nonatomic, readonly) double price;

+ (id)buyParamsWithString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_normalizedDictionary;
- (void)_parseBuyParams:(id)arg1;
- (void)_parseBuyParamsArray:(id)arg1;
- (void)clear;
- (bool)containsKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithArray:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)normalizedDictionary;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)parameterForKey:(id)arg1;
- (double)price;
- (id)propertyForKey:(id)arg1;
- (id)requestDataWithError:(id*)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setParameter:(id)arg1 forKey:(id)arg2;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (id)stringValue;

@end
