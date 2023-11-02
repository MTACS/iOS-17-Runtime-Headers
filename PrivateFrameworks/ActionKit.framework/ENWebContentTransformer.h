
@interface ENWebContentTransformer : NSValueTransformer <ENXMLSaxParserDelegate> {
    NSURL * _archiveBaseURL;
    NSURL * _baseURL;
    ENXMLDTD * _enmlDTD;
    ENMLWriter * _enmlWriter;
    ENXMLSaxParser * _htmlParser;
    NSArray * _ignorableAttributes;
    NSArray * _ignorableTags;
    unsigned long long  _ignoreElementCount;
    bool  _inTitleElement;
    NSArray * _inlineElements;
    NSString * _mimeType;
    ENNote * _note;
    NSArray * _skipTags;
    NSString * _title;
    ENWebArchive * _webArchive;
}

@property (nonatomic, retain) NSURL *archiveBaseURL;
@property (nonatomic, retain) NSURL *baseURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ENXMLDTD *enmlDTD;
@property (nonatomic, retain) ENMLWriter *enmlWriter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ENXMLSaxParser *htmlParser;
@property (nonatomic, retain) NSArray *ignorableAttributes;
@property (nonatomic, retain) NSArray *ignorableTags;
@property (nonatomic) unsigned long long ignoreElementCount;
@property (nonatomic) bool inTitleElement;
@property (nonatomic, retain) NSArray *inlineElements;
@property (nonatomic, retain) NSString *mimeType;
@property (nonatomic, retain) ENNote *note;
@property (nonatomic, retain) NSArray *skipTags;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) ENWebArchive *webArchive;

+ (bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id)archiveBaseURL;
- (id)archiveBaseURLFromURL:(id)arg1;
- (id)baseURL;
- (id)enmlDTD;
- (id)enmlWriter;
- (id)filenameFromURL:(id)arg1;
- (id)htmlFromWebArchive:(id)arg1;
- (id)htmlParser;
- (id)ignorableAttributes;
- (id)ignorableTags;
- (unsigned long long)ignoreElementCount;
- (bool)inTitleElement;
- (id)init;
- (id)inlineElements;
- (id)mimeType;
- (id)mimeTypeFromFilename:(id)arg1;
- (id)note;
- (void)parser:(id)arg1 didEndElement:(id)arg2;
- (void)parser:(id)arg1 didFailWithError:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 attributes:(id)arg3;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (id)resourceFromWebResource:(id)arg1;
- (id)sanitizeURLAttribute:(id)arg1;
- (void)setArchiveBaseURL:(id)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setEnmlDTD:(id)arg1;
- (void)setEnmlWriter:(id)arg1;
- (void)setHtmlParser:(id)arg1;
- (void)setIgnorableAttributes:(id)arg1;
- (void)setIgnorableTags:(id)arg1;
- (void)setIgnoreElementCount:(unsigned long long)arg1;
- (void)setInTitleElement:(bool)arg1;
- (void)setInlineElements:(id)arg1;
- (void)setMimeType:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setSkipTags:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setWebArchive:(id)arg1;
- (id)skipTags;
- (id)title;
- (id)transformedValue:(id)arg1;
- (id)webArchive;

@end
