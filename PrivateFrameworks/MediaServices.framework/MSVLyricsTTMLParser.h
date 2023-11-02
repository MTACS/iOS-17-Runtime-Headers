
@interface MSVLyricsTTMLParser : NSObject <NSXMLParserDelegate> {
    NSMutableArray * _agents;
    double  _currentStartTime;
    MSVLyricsTextElement * _currentTextElement;
    NSMutableArray * _elementStack;
    NSInputStream * _inputStream;
    bool  _linesAreSortedByStartTime;
    NSMutableArray * _lyricLines;
    MSVLyricsSongInfo * _lyricsInfo;
    NSObject<OS_dispatch_queue> * _parseQueue;
    NSError * _parserError;
    NSMutableDictionary * _translationsMap;
    NSData * _ttmlData;
}

@property (nonatomic, retain) NSMutableArray *agents;
@property (nonatomic) double currentStartTime;
@property (nonatomic, retain) MSVLyricsTextElement *currentTextElement;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableArray *elementStack;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSInputStream *inputStream;
@property (nonatomic) bool linesAreSortedByStartTime;
@property (nonatomic, retain) NSMutableArray *lyricLines;
@property (nonatomic, retain) MSVLyricsSongInfo *lyricsInfo;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *parseQueue;
@property (nonatomic, retain) NSError *parserError;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *translationsMap;
@property (nonatomic, retain) NSData *ttmlData;

- (void).cxx_destruct;
- (id)_parentTextElement;
- (void)_stripParenthesesFromBackgroundVocalWord:(id)arg1 backgroundVocalText:(id)arg2;
- (id)_translatedLyrics:(id)arg1 forLanguage:(id)arg2;
- (id)_updateWords:(id)arg1 withWord:(id)arg2 parentText:(id)arg3;
- (id)agents;
- (double)currentStartTime;
- (id)currentTextElement;
- (id)elementStack;
- (id)initWithTTMLData:(id)arg1;
- (id)initWithTTMLStream:(id)arg1;
- (id)inputStream;
- (bool)linesAreSortedByStartTime;
- (id)lyricLines;
- (id)lyricsInfo;
- (id)parseQueue;
- (void)parseWithCompletion:(id /* block */)arg1;
- (id)parseWithError:(id*)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (id)parserError;
- (void)setAgents:(id)arg1;
- (void)setCurrentStartTime:(double)arg1;
- (void)setCurrentTextElement:(id)arg1;
- (void)setElementStack:(id)arg1;
- (void)setInputStream:(id)arg1;
- (void)setLinesAreSortedByStartTime:(bool)arg1;
- (void)setLyricLines:(id)arg1;
- (void)setLyricsInfo:(id)arg1;
- (void)setParseQueue:(id)arg1;
- (void)setParserError:(id)arg1;
- (void)setTranslationsMap:(id)arg1;
- (void)setTtmlData:(id)arg1;
- (id)translationsMap;
- (id)ttmlData;

@end
