
@interface CAMLParser : NSObject {
    struct _CAMLParserData { } * _data;
}

@property (retain) NSURL *baseURL;
@property <CAMLParserDelegate> *delegate;
@property (readonly) NSError *error;
@property (readonly) id result;

+ (id)parseContentsOfURL:(id)arg1;
+ (id)parser;

- (id)attributeForKey:(id)arg1 remove:(bool)arg2;
- (id)baseURL;
- (void)dealloc;
- (id)delegate;
- (id)didFailToLoadResourceFromURL:(id)arg1;
- (void)didLoadResource:(id)arg1 fromURL:(id)arg2;
- (id)elementValue;
- (id)error;
- (id)init;
- (id)objectById:(id)arg1;
- (bool)parseBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (bool)parseContentsOfURL:(id)arg1;
- (bool)parseData:(id)arg1;
- (bool)parseString:(id)arg1;
- (void)parserError:(id)arg1;
- (void)parserWarning:(id)arg1;
- (id)result;
- (void)setBaseURL:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setElementValue:(id)arg1;
- (id)willLoadResourceFromURL:(id)arg1;

@end
