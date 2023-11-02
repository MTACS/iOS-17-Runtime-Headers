
@interface PKMultipartElement : NSObject {
    NSInputStream * _body;
    unsigned long long  _bodyLength;
    unsigned long long  _delivered;
    NSData * _headers;
    unsigned long long  _headersLength;
    unsigned long long  _length;
}

@property (nonatomic, retain) NSInputStream *body;
@property (nonatomic) unsigned long long bodyLength;
@property (nonatomic) unsigned long long delivered;
@property (nonatomic, retain) NSData *headers;
@property (nonatomic) unsigned long long headersLength;
@property (nonatomic) unsigned long long length;

- (void).cxx_destruct;
- (void)appendNewLine:(id)arg1;
- (id)body;
- (unsigned long long)bodyLength;
- (unsigned long long)delivered;
- (id)headers;
- (unsigned long long)headersLength;
- (id)initWithHeaders:(id)arg1 path:(id)arg2 boundary:(id)arg3;
- (id)initWithHeaders:(id)arg1 string:(id)arg2 boundary:(id)arg3;
- (id)initWithName:(id)arg1 boundary:(id)arg2 data:(id)arg3 contentType:(id)arg4;
- (id)initWithName:(id)arg1 boundary:(id)arg2 data:(id)arg3 contentType:(id)arg4 filename:(id)arg5;
- (id)initWithName:(id)arg1 boundary:(id)arg2 string:(id)arg3;
- (id)initWithName:(id)arg1 filename:(id)arg2 boundary:(id)arg3 path:(id)arg4;
- (id)initWithName:(id)arg1 filename:(id)arg2 boundary:(id)arg3 path:(id)arg4 contentType:(id)arg5;
- (id)initWithName:(id)arg1 filename:(id)arg2 boundary:(id)arg3 stream:(id)arg4 streamLength:(unsigned long long)arg5;
- (unsigned long long)length;
- (id)makeHeadersDataFromHeadersDict:(id)arg1 boundary:(id)arg2;
- (unsigned long long)read:(char *)arg1 maxLength:(unsigned long long)arg2;
- (void)setBody:(id)arg1;
- (void)setBodyLength:(unsigned long long)arg1;
- (void)setDelivered:(unsigned long long)arg1;
- (void)setHeaders:(id)arg1;
- (void)setHeadersLength:(unsigned long long)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)updateLength;

@end
