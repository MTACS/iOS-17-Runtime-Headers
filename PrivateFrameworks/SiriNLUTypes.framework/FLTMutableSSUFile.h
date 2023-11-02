
@interface FLTMutableSSUFile : FLTSSUFile

@property (nonatomic, copy) NSArray *categories;
@property (nonatomic) unsigned short format_version;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) FLTSSUMetadata *metadata;

- (id)categories;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned short)format_version;
- (id)init;
- (id)locale;
- (id)metadata;
- (void)setCategories:(id)arg1;
- (void)setFormat_version:(unsigned short)arg1;
- (void)setLocale:(id)arg1;
- (void)setMetadata:(id)arg1;

@end
