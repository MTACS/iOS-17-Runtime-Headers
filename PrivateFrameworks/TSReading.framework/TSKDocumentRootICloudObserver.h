
@interface TSKDocumentRootICloudObserver : NSObject {
    id /* block */  _block;
    long long  _identifer;
    long long  _identifier;
    NSOperationQueue * _operationQueue;
}

@property (nonatomic, readonly) long long identifer;

- (void)dealloc;
- (long long)identifer;
- (id)initWithBlock:(id /* block */)arg1;
- (void)invokeWithDocumentRoot:(id)arg1;

@end
