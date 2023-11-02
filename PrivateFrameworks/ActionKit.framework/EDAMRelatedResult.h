
@interface EDAMRelatedResult : FATObject {
    NSNumber * _cacheExpires;
    NSString * _cacheKey;
    NSArray * _containingNotebooks;
    NSString * _debugInfo;
    NSArray * _experts;
    NSArray * _notebooks;
    NSArray * _notes;
    NSArray * _relatedContent;
    NSArray * _tags;
}

@property (nonatomic, retain) NSNumber *cacheExpires;
@property (nonatomic, retain) NSString *cacheKey;
@property (nonatomic, retain) NSArray *containingNotebooks;
@property (nonatomic, retain) NSString *debugInfo;
@property (nonatomic, retain) NSArray *experts;
@property (nonatomic, retain) NSArray *notebooks;
@property (nonatomic, retain) NSArray *notes;
@property (nonatomic, retain) NSArray *relatedContent;
@property (nonatomic, retain) NSArray *tags;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)cacheExpires;
- (id)cacheKey;
- (id)containingNotebooks;
- (id)debugInfo;
- (id)experts;
- (id)notebooks;
- (id)notes;
- (id)relatedContent;
- (void)setCacheExpires:(id)arg1;
- (void)setCacheKey:(id)arg1;
- (void)setContainingNotebooks:(id)arg1;
- (void)setDebugInfo:(id)arg1;
- (void)setExperts:(id)arg1;
- (void)setNotebooks:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setRelatedContent:(id)arg1;
- (void)setTags:(id)arg1;
- (id)tags;

@end
