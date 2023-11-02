
@interface INAppResolverOptions : NSObject <NSSecureCoding> {
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) bool includeUserActivityTypes;
@property (nonatomic, readonly) bool skipSupportedIntentsCheck;

+ (id)optionsWithDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dictionary;
- (void)encodeWithCoder:(id)arg1;
- (bool)includeUserActivityTypes;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)skipSupportedIntentsCheck;

@end
