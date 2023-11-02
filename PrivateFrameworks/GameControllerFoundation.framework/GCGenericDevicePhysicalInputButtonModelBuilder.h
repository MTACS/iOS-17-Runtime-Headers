
@interface GCGenericDevicePhysicalInputButtonModelBuilder : GCGenericDevicePhysicalInputElementModelBuilder {
    long long  _sourceExtendedEventFieldIndex;
}

@property (nonatomic) long long sourceExtendedEventFieldIndex;

+ (Class)modelClass;

- (id)build;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
- (void)initializeWithModel:(id)arg1;
- (void)reset;
- (void)setSourceExtendedEventFieldIndex:(long long)arg1;
- (long long)sourceExtendedEventFieldIndex;

@end
