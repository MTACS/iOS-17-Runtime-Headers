
@interface ENNote : NSObject <WFNaming> {
    NSString * _cachedENMLContent;
    ENNoteContent * _content;
    NSDictionary * _edamAttributes;
    bool  _isReminder;
    NSMutableArray * _resources;
    EDAMNote * _serviceNote;
    NSString * _sourceUrl;
    NSArray * _tagNames;
    NSString * _title;
}

@property (nonatomic, copy) NSString *cachedENMLContent;
@property (nonatomic, retain) ENNoteContent *content;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, retain) NSDictionary *edamAttributes;
@property (nonatomic) bool isReminder;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) NSArray *resources;
@property (nonatomic, retain) EDAMNote *serviceNote;
@property (nonatomic, copy) NSString *sourceUrl;
@property (nonatomic, copy) NSArray *tagNames;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *wfName;

- (void).cxx_destruct;
- (id)EDAMNote;
- (id)EDAMNoteToReplaceServiceNoteGUID:(id)arg1;
- (void)addResource:(id)arg1;
- (id)cachedENMLContent;
- (id)content;
- (id)creationDate;
- (id)edamAttributes;
- (id)enmlContent;
- (id)generateENMLContent;
- (void)generateHTMLData:(id /* block */)arg1;
- (void)generateWebArchiveData:(id /* block */)arg1;
- (id)init;
- (id)initWithServiceNote:(id)arg1;
- (void)invalidateCachedENML;
- (bool)isReminder;
- (id)modificationDate;
- (void)removeAllResources;
- (id)resources;
- (id)serviceNote;
- (void)setCachedENMLContent:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setEdamAttributes:(id)arg1;
- (void)setIsReminder:(bool)arg1;
- (void)setResources:(id)arg1;
- (void)setServiceNote:(id)arg1;
- (void)setSourceUrl:(id)arg1;
- (void)setTagNames:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sourceUrl;
- (id)tagNames;
- (id)title;
- (bool)validateForLimits;
- (id)wfName;

@end
