
@interface SLGuaranteedRemoteCall : NSObject {
    id /* block */  _block;
    id  _proxy;
}

@property (copy) id /* block */ block;
@property (retain) id proxy;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)proxy;
- (void)setBlock:(id /* block */)arg1;
- (void)setProxy:(id)arg1;

@end
