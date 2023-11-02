
@interface BWMetadataFormat : BWFormat {
    struct opaqueCMFormatDescription { } * _desc;
}

+ (id)formatWithMetadataFormatDescription:(struct opaqueCMFormatDescription { }*)arg1;
+ (void)initialize;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (unsigned int)mediaType;

@end
