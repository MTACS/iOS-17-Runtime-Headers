
@interface VCMediaRecorderManagerStreamTokenClientList : NSObject {
    NSMutableArray * _clientContextList;
    <VCMediaRecorderProtocol> * _mediaRecorder;
    long long  _streamToken;
}

@property (nonatomic, readonly) NSArray *clientContextList;
@property (nonatomic, readonly) <VCMediaRecorderProtocol> *mediaRecorder;

+ (bool)isValidContext:(id)arg1;
+ (long long)streamTokenFromClientContext:(id)arg1;

- (id)clientContextList;
- (void)dealloc;
- (id)initWithStreamToken:(long long)arg1 mediaRecorder:(id)arg2;
- (id)mediaRecorder;
- (id)newContext;
- (void)removeContext:(id)arg1;

@end
