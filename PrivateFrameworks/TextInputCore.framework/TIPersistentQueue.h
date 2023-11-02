
@interface TIPersistentQueue : NSObject {
    NSURL * _presentedItemURL;
}

- (void).cxx_destruct;
- (void)dequeueObjects:(id /* block */)arg1;
- (void)enqueueObjects:(id /* block */)arg1;
- (id)initWithURL:(id)arg1;
- (void)readObjects:(id /* block */)arg1;

@end
