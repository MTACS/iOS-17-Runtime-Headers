
@interface BCSLineReader : NSObject <BCSLineReading> {
    NSURL * _URL;
    char * _beginLine;
    unsigned long long  _bufferSize;
    char * _endBuffer;
    char * _endLine;
    NSInputStream * _inputStream;
    NSMutableData * _lineBuffer;
    unsigned long long  _maxLineSize;
    NSMutableData * _readBuffer;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic) char *beginLine;
@property (nonatomic, readonly) unsigned long long bufferSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) char *endBuffer;
@property (nonatomic) char *endLine;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSInputStream *inputStream;
@property (nonatomic, readonly) NSMutableData *lineBuffer;
@property (nonatomic, readonly) unsigned long long maxLineSize;
@property (nonatomic, retain) NSMutableData *readBuffer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (char *)beginLine;
- (unsigned long long)bufferSize;
- (void)dealloc;
- (char *)endBuffer;
- (char *)endLine;
- (bool)hasValidURL;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 bufferSize:(unsigned long long)arg2 maxLineSize:(unsigned long long)arg3;
- (id)inputStream;
- (id)lineBuffer;
- (unsigned long long)maxLineSize;
- (id)readBuffer;
- (id)readLine;
- (void)refillReadBuffer;
- (void)setBeginLine:(char *)arg1;
- (void)setEndBuffer:(char *)arg1;
- (void)setEndLine:(char *)arg1;
- (void)setInputStream:(id)arg1;
- (void)setReadBuffer:(id)arg1;

@end
