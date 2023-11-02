
@interface BWMetadataObjectFormat : BWFormat {
    NSArray * _metadataIdentifiers;
}

+ (id)formatWithMetadataIdentifiers:(id)arg1;
+ (void)initialize;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)mediaType;

@end
