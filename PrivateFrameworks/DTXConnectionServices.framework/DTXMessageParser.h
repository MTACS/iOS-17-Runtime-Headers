
@interface DTXMessageParser : NSObject {
    <DTXBlockCompressor> * _compressor;
    bool  _eof;
    id /* block */  _exceptionHandler;
    NSMutableDictionary * _fragmentedBuffersByIdentifier;
    id /* block */  _parsedMessageHandler;
    const char * _parsingBuffer;
    unsigned long long  _parsingBufferSize;
    unsigned long long  _parsingBufferUsed;
    NSObject<OS_dispatch_queue> * _parsingQueue;
}

- (void).cxx_destruct;
- (void)_messageParsedWithHeader:(struct DTXMessageHeader { unsigned int x1; unsigned int x2; unsigned short x3; unsigned short x4; unsigned int x5; struct DTXMessageRoutingInfo { unsigned int x_6_1_1; unsigned int x_6_1_2; unsigned int x_6_1_3; unsigned int x_6_1_4 : 1; unsigned int x_6_1_5 : 31; } x6; })arg1 bytes:(const void*)arg2 length:(unsigned long long)arg3 destructor:(id /* block */)arg4;
- (void)dealloc;
- (id)initWithMessageHandler:(id /* block */)arg1 andParseExceptionHandler:(id /* block */)arg2;
- (void)parseIncomingBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (id)parsingComplete;
- (void)replaceCompressor:(id)arg1;

@end
