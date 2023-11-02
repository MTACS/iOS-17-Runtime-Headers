
@interface FCTransformedStream : NSObject <FCStreaming> {
    <FCStreaming> * _stream;
    id /* block */  _transformBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished, nonatomic, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <FCStreaming> *stream;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ transformBlock;

- (void).cxx_destruct;
- (id)fetchMoreResultsWithLimit:(unsigned long long)arg1 qualityOfService:(long long)arg2 callbackQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)init;
- (id)initWithStream:(id)arg1 transformBlock:(id /* block */)arg2;
- (bool)isFinished;
- (void)setStream:(id)arg1;
- (void)setTransformBlock:(id /* block */)arg1;
- (id)stream;
- (id /* block */)transformBlock;

@end
