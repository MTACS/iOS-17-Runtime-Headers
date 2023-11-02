
@interface MKHTTPRequest : NSObject {
    NSMutableData * _body;
    NSData * _chunk;
    unsigned long long  _chunkOffset;
    MKHTTPHeaders * _headers;
    NSString * _hostname;
    MKHTTPParameters * _parameters;
}

@property (nonatomic, retain) NSMutableData *body;
@property (nonatomic, retain) NSData *chunk;
@property (nonatomic) unsigned long long chunkOffset;
@property (nonatomic, retain) MKHTTPHeaders *headers;
@property (nonatomic, copy) NSString *hostname;
@property (nonatomic, retain) MKHTTPParameters *parameters;

- (void).cxx_destruct;
- (void)appendData:(id)arg1;
- (id)body;
- (id)chunk;
- (unsigned long long)chunkOffset;
- (id)headers;
- (id)hostname;
- (id)initWithHeaders:(id)arg1 body:(id)arg2 hostname:(id)arg3;
- (id)parameters;
- (void)setBody:(id)arg1;
- (void)setChunk:(id)arg1;
- (void)setChunkOffset:(unsigned long long)arg1;
- (void)setHeaders:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)sliceData:(unsigned long long)arg1;

@end
