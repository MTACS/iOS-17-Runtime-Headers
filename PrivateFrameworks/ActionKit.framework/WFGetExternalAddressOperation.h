
@interface WFGetExternalAddressOperation : NSOperation {
    NSMutableData * _data;
    NSError * _error;
    NSString * _result;
    struct __CFReadStream { } * _stream;
    bool  _useIPv6;
}

@property (nonatomic, retain) NSMutableData *data;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *result;
@property (nonatomic) struct __CFReadStream { }*stream;
@property (nonatomic) bool useIPv6;

- (void).cxx_destruct;
- (id)data;
- (void)dealloc;
- (id)error;
- (void)handleStreamEvent:(unsigned long long)arg1;
- (bool)isExecuting;
- (bool)isFinished;
- (bool)isReady;
- (id)result;
- (void)setData:(id)arg1;
- (void)setError:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setStream:(struct __CFReadStream { }*)arg1;
- (void)setUseIPv6:(bool)arg1;
- (void)start;
- (struct __CFReadStream { }*)stream;
- (void)update;
- (bool)useIPv6;

@end
