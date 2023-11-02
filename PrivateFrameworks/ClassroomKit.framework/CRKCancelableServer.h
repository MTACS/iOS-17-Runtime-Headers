
@interface CRKCancelableServer : NSObject {
    <CRKCancelable> * _cachedCancelable;
    long long  _clientCount;
    id /* block */  _generator;
}

@property (nonatomic, retain) <CRKCancelable> *cachedCancelable;
@property (nonatomic) long long clientCount;
@property (nonatomic, readonly, copy) id /* block */ generator;

- (void).cxx_destruct;
- (id)cachedCancelable;
- (long long)clientCount;
- (void)decrementClientCount;
- (id /* block */)generator;
- (id)initWithCancelableGenerator:(id /* block */)arg1;
- (id)makeCountedCancelable;
- (void)performBlockOnMainThreadIfNeeded:(id /* block */)arg1;
- (void)setCachedCancelable:(id)arg1;
- (void)setClientCount:(long long)arg1;

@end
