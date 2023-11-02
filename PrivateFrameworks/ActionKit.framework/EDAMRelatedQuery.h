
@interface EDAMRelatedQuery : FATObject {
    NSString * _cacheKey;
    NSString * _context;
    EDAMNoteFilter * _filter;
    NSString * _noteGuid;
    NSString * _plainText;
    NSString * _referenceUri;
}

@property (nonatomic, retain) NSString *cacheKey;
@property (nonatomic, retain) NSString *context;
@property (nonatomic, retain) EDAMNoteFilter *filter;
@property (nonatomic, retain) NSString *noteGuid;
@property (nonatomic, retain) NSString *plainText;
@property (nonatomic, retain) NSString *referenceUri;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)cacheKey;
- (id)context;
- (id)filter;
- (id)noteGuid;
- (id)plainText;
- (id)referenceUri;
- (void)setCacheKey:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setNoteGuid:(id)arg1;
- (void)setPlainText:(id)arg1;
- (void)setReferenceUri:(id)arg1;

@end
