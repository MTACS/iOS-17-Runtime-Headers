
@interface VSCompoundValueTransformer : NSValueTransformer {
    NSArray * _valueTransformers;
}

@property (nonatomic, copy) NSArray *valueTransformers;

- (void).cxx_destruct;
- (id)init;
- (id)reverseTransformedValue:(id)arg1;
- (void)setValueTransformers:(id)arg1;
- (id)transformedValue:(id)arg1;
- (id)valueTransformers;

@end
