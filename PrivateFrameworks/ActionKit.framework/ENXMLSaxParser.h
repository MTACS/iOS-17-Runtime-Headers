
@interface ENXMLSaxParser : NSObject {
    <ENXMLSaxParserDelegate> * _delegate;
    NSArray * _dtds;
    bool  _isHTML;
    struct _xmlParserCtxt { struct _xmlSAXHandler {} *x1; void *x2; struct _xmlDoc {} *x3; int x4; int x5; char *x6; char *x7; int x8; int x9; struct _xmlParserInput {} *x10; int x11; int x12; struct _xmlParserInput {} **x13; struct _xmlNode {} *x14; int x15; int x16; struct _xmlNode {} **x17; int x18; struct _xmlParserNodeInfoSeq { unsigned long long x_19_1_1; unsigned long long x_19_1_2; struct _xmlParserNodeInfo {} *x_19_1_3; } x19; int x20; int x21; int x22; int x23; int x24; int x25; struct _xmlValidCtxt { void *x_26_1_1; int (*x_26_1_2)(); int (*x_26_1_3)(); struct _xmlNode {} *x_26_1_4; int x_26_1_5; int x_26_1_6; struct _xmlNode {} **x_26_1_7; unsigned int x_26_1_8; struct _xmlDoc {} *x_26_1_9; int x_26_1_10; struct _xmlValidState {} *x_26_1_11; int x_26_1_12; int x_26_1_13; struct _xmlValidState {} *x_26_1_14; struct _xmlAutomata {} *x_26_1_15; struct _xmlAutomataState {} *x_26_1_16; } x26; int x27; int x28; char *x29; char *x30; int x31; int x32; char **x33; long long x34; long long x35; int x36; int x37; int x38; char *x39; char *x40; } * _parserContext;
    bool  _parserHalted;
    NSURLConnection * _urlConnection;
}

@property (nonatomic) <ENXMLSaxParserDelegate> *delegate;
@property (nonatomic) bool isHTML;

- (void).cxx_destruct;
- (void)_stopAndSendError:(id)arg1;
- (void)appendBytes:(char *)arg1 length:(int)arg2;
- (void)appendData:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)finalizeParser;
- (id)init;
- (bool)isHTML;
- (struct _xmlEntity { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlDtd {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; char *x10; char *x11; int x12; int x13; char *x14; char *x15; struct _xmlEntity {} *x16; char *x17; int x18; int x19; }*)lookupEntity:(const char *)arg1;
- (bool)parseContents:(id)arg1;
- (bool)parseContentsOfFile:(id)arg1;
- (bool)parseContentsOfURL:(id)arg1;
- (bool)parseContentsOfURLWithRequest:(id)arg1;
- (bool)parseData:(id)arg1;
- (struct _xmlSAXHandler { int (*x1)(); int (*x2)(); int (*x3)(); int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); int (*x13)(); int (*x14)(); int (*x15)(); int (*x16)(); int (*x17)(); int (*x18)(); int (*x19)(); int (*x20)(); int (*x21)(); int (*x22)(); int (*x23)(); int (*x24)(); int (*x25)(); int (*x26)(); int (*x27)(); unsigned int x28; void *x29; int (*x30)(); int (*x31)(); int (*x32)(); })saxHandler;
- (void)setDelegate:(id)arg1;
- (void)setIsHTML:(bool)arg1;
- (void)stopParser;

@end
