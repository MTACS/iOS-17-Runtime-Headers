
@interface GCGenericDevicePhysicalInputDpadModelBuilder : GCGenericDevicePhysicalInputElementModelBuilder {
    long long  _sourceDownExtendedEventFieldIndex;
    long long  _sourceLeftExtendedEventFieldIndex;
    long long  _sourceRightExtendedEventFieldIndex;
    long long  _sourceUpExtendedEventFieldIndex;
}

@property (nonatomic) long long sourceDownExtendedEventFieldIndex;
@property (nonatomic) long long sourceLeftExtendedEventFieldIndex;
@property (nonatomic) long long sourceRightExtendedEventFieldIndex;
@property (nonatomic) long long sourceUpExtendedEventFieldIndex;

+ (Class)modelClass;

- (id)build;
- (id)initWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
- (void)initializeWithModel:(id)arg1;
- (void)reset;
- (void)setSourceDownExtendedEventFieldIndex:(long long)arg1;
- (void)setSourceLeftExtendedEventFieldIndex:(long long)arg1;
- (void)setSourceRightExtendedEventFieldIndex:(long long)arg1;
- (void)setSourceUpExtendedEventFieldIndex:(long long)arg1;
- (long long)sourceDownExtendedEventFieldIndex;
- (long long)sourceLeftExtendedEventFieldIndex;
- (long long)sourceRightExtendedEventFieldIndex;
- (long long)sourceUpExtendedEventFieldIndex;

@end
