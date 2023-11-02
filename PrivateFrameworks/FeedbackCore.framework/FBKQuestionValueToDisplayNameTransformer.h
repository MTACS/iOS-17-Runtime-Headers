
@interface FBKQuestionValueToDisplayNameTransformer : NSValueTransformer {
    NSDictionary * _dictionary;
}

@property (copy) NSDictionary *dictionary;

+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (void)setDictionary:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
