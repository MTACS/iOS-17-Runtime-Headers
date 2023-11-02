
@interface ICSTokenizer : NSObject {
    ICSPushbackStream * _data;
    int  _expectedNextTokenType;
    int  _logCount;
    bool  _printedICS;
    NSMutableData * _token;
    int  _tokenType;
}

@property int logCount;
@property bool printedICS;

- (void).cxx_destruct;
- (bool)consumeChar:(BOOL)arg1;
- (bool)consumeEOL;
- (bool)consumeEscaped:(const char *)arg1;
- (void)consumeParamName;
- (void)consumeParamValue;
- (void)consumePropName;
- (void)consumePropValue;
- (void)consumeWhiteSpace;
- (id)currentToken;
- (id)initWithCompressedData:(id)arg1;
- (id)initWithData:(id)arg1;
- (int)logCount;
- (id)nextToken;
- (bool)printedICS;
- (void)setLogCount:(int)arg1;
- (void)setPrintedICS:(bool)arg1;
- (int)tokenType;

@end
