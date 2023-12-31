
@interface VSFailableValueTransformer : NSValueTransformer {
    NSValueTransformer * _objectValueTransformer;
}

@property (nonatomic, retain) NSValueTransformer *objectValueTransformer;

+ (bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)objectValueTransformer;
- (void)setObjectValueTransformer:(id)arg1;
- (id)transformedValue:(id)arg1;

@end
