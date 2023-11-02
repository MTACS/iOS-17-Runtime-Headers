
@interface BWInferenceMetadataRequirement : BWInferenceDataRequirement <NSCopying> {
    short  _mappingOption;
    NSArray * _metadataKeys;
}

@property (nonatomic, readonly) short mappingOption;
@property (nonatomic, readonly, copy) NSArray *metadataKeys;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithMetadataKeys:(id)arg1;
- (id)initWithMetadataKeys:(id)arg1 mappingOption:(short)arg2;
- (id)initWithMetadataRequirement:(id)arg1;
- (short)mappingOption;
- (id)metadataKeys;

@end
