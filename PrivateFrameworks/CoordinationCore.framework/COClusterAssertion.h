
@interface COClusterAssertion : NSObject {
    COCluster * _cluster;
    <COClusterAssertionDelegate> * _delegate;
}

@property (nonatomic, readonly) COCluster *cluster;
@property (nonatomic, readonly) <COClusterAssertionDelegate> *delegate;

+ (id)assertionForCluster:(id)arg1 delegate:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithCluster:(id)arg1 delegate:(id)arg2;
- (void)_notifyInvalidated;
- (id)cluster;
- (void)dealloc;
- (id)delegate;

@end
