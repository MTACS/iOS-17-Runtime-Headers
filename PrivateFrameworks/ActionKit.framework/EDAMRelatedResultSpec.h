
@interface EDAMRelatedResultSpec : FATObject {
    NSNumber * _includeContainingNotebooks;
    NSNumber * _includeDebugInfo;
    NSNumber * _maxExperts;
    NSNumber * _maxNotebooks;
    NSNumber * _maxNotes;
    NSNumber * _maxRelatedContent;
    NSNumber * _maxTags;
    NSSet * _relatedContentTypes;
    NSNumber * _writableNotebooksOnly;
}

@property (nonatomic, retain) NSNumber *includeContainingNotebooks;
@property (nonatomic, retain) NSNumber *includeDebugInfo;
@property (nonatomic, retain) NSNumber *maxExperts;
@property (nonatomic, retain) NSNumber *maxNotebooks;
@property (nonatomic, retain) NSNumber *maxNotes;
@property (nonatomic, retain) NSNumber *maxRelatedContent;
@property (nonatomic, retain) NSNumber *maxTags;
@property (nonatomic, retain) NSSet *relatedContentTypes;
@property (nonatomic, retain) NSNumber *writableNotebooksOnly;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)includeContainingNotebooks;
- (id)includeDebugInfo;
- (id)maxExperts;
- (id)maxNotebooks;
- (id)maxNotes;
- (id)maxRelatedContent;
- (id)maxTags;
- (id)relatedContentTypes;
- (void)setIncludeContainingNotebooks:(id)arg1;
- (void)setIncludeDebugInfo:(id)arg1;
- (void)setMaxExperts:(id)arg1;
- (void)setMaxNotebooks:(id)arg1;
- (void)setMaxNotes:(id)arg1;
- (void)setMaxRelatedContent:(id)arg1;
- (void)setMaxTags:(id)arg1;
- (void)setRelatedContentTypes:(id)arg1;
- (void)setWritableNotebooksOnly:(id)arg1;
- (id)writableNotebooksOnly;

@end
