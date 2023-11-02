
@interface IMPodcastParser : NSObject <NSXMLParserDelegate> {
    NSMutableString * _elementCharBuffer;
    NSString * _feedDescriptionSourceElement;
    long long  _feedType;
    bool  _inAuthorElement;
    bool  _inGlobalImageElement;
    unsigned long long  _itemElementNestCount;
    NSError * _parseError;
    IMPodcastFeed * _parsedFeed;
    bool  _preferredFeedCategoryFound;
    bool  _preferredItemCategoryFound;
    NSDateFormatter * _rssDateFormatter;
    bool  _shouldBufferElementChars;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableString *elementCharBuffer;
@property (nonatomic, retain) NSString *feedDescriptionSourceElement;
@property (nonatomic) long long feedType;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool inAuthorElement;
@property (nonatomic) bool inGlobalImageElement;
@property (nonatomic) unsigned long long itemElementNestCount;
@property (nonatomic, retain) NSError *parseError;
@property (nonatomic, retain) IMPodcastFeed *parsedFeed;
@property (nonatomic) bool preferredFeedCategoryFound;
@property (nonatomic) bool preferredItemCategoryFound;
@property (nonatomic, retain) NSDateFormatter *rssDateFormatter;
@property (nonatomic) bool shouldBufferElementChars;
@property (readonly) Class superclass;

+ (bool)isContentNamespace:(id)arg1;
+ (bool)isITunesNamespace:(id)arg1;

- (void).cxx_destruct;
- (void)_parseEnclosureElement:(id)arg1 forFeedItem:(id)arg2;
- (void)atomParser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)atomParser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)dateFromAtomDateString:(id)arg1;
- (id)dateFromRSSDateString:(id)arg1;
- (id)elementCharBuffer;
- (id)elementCharBufferTrimmed;
- (void)endBufferingElementChars;
- (id)feedDescriptionSourceElement;
- (long long)feedType;
- (bool)inAuthorElement;
- (bool)inGlobalImageElement;
- (id)init;
- (unsigned long long)itemElementNestCount;
- (id)parseError;
- (void)parseStreamFromURL:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)parseWithData:(id)arg1;
- (id)parsedFeed;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)postProcessItemElement:(id)arg1;
- (bool)preferredFeedCategoryFound;
- (bool)preferredItemCategoryFound;
- (id)removeLastColonOfString:(id)arg1;
- (id)rssDateFormatter;
- (void)rssParser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)rssParser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)setElementCharBuffer:(id)arg1;
- (void)setFeedDescriptionSourceElement:(id)arg1;
- (void)setFeedType:(long long)arg1;
- (void)setInAuthorElement:(bool)arg1;
- (void)setInGlobalImageElement:(bool)arg1;
- (void)setItemElementNestCount:(unsigned long long)arg1;
- (void)setParseError:(id)arg1;
- (void)setParsedFeed:(id)arg1;
- (void)setPreferredFeedCategoryFound:(bool)arg1;
- (void)setPreferredItemCategoryFound:(bool)arg1;
- (void)setRssDateFormatter:(id)arg1;
- (void)setShouldBufferElementChars:(bool)arg1;
- (bool)shouldBufferElementChars;
- (void)startBufferingElementChars;

@end
