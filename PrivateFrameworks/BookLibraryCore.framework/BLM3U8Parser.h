
@interface BLM3U8Parser : NSObject <NSURLSessionDataDelegate> {
    NSMutableData * _bytes;
    bool  _collectForRewrite;
    NSMutableData * _collectedData;
    NSData * _data;
    <BLM3U8ParserDelegate> * _delegate;
    NSError * _error;
}

@property (nonatomic, retain) NSMutableData *bytes;
@property (nonatomic) bool collectForRewrite;
@property (nonatomic, retain) NSMutableData *collectedData;
@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BLM3U8ParserDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)bytes;
- (bool)collectForRewrite;
- (id)collectedData;
- (unsigned long long)consumeBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (id)data;
- (id)delegate;
- (id)error;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)parseAttributeList:(id)arg1;
- (bool)parseWithError:(id*)arg1;
- (void)processLine;
- (bool)rewriteWithURL:(id)arg1;
- (void)saveLine:(id)arg1;
- (void)setBytes:(id)arg1;
- (void)setCollectForRewrite:(bool)arg1;
- (void)setCollectedData:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setError:(id)arg1;

@end
