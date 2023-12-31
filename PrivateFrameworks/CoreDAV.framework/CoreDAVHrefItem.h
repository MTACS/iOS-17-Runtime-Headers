
@interface CoreDAVHrefItem : CoreDAVLeafItem {
    NSURL * _baseURL;
    int  _writeStyle;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic) int writeStyle;

- (void).cxx_destruct;
- (id)baseURL;
- (id)description;
- (id)init;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 baseURL:(id)arg2;
- (void)parserSuggestsBaseURL:(id)arg1;
- (id)payloadAsFullURL;
- (id)payloadAsOriginalURL;
- (void)setBaseURL:(id)arg1;
- (void)setWriteStyle:(int)arg1;
- (void)write:(id)arg1;
- (int)writeStyle;

@end
