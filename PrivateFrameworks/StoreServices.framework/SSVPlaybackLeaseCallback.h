
@interface SSVPlaybackLeaseCallback : NSObject {
    id /* block */  _block;
    NSError * _error;
    SSVPlaybackLeaseResponse * _response;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) SSVPlaybackLeaseResponse *response;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)error;
- (id)response;
- (void)setBlock:(id /* block */)arg1;
- (void)setError:(id)arg1;
- (void)setResponse:(id)arg1;

@end
