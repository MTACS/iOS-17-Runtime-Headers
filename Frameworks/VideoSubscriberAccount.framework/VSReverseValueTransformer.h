
@interface VSReverseValueTransformer : NSValueTransformer {
    NSValueTransformer * _valueTransformer;
}

@property (nonatomic, retain) NSValueTransformer *valueTransformer;

+ (id)reverseValueTransformerWithValueTransformer:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithValueTransformer:(id)arg1;
- (id)reverseTransformedValue:(id)arg1;
- (void)setValueTransformer:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)valueTransformer;

@end
