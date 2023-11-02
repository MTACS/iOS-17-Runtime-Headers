
@interface CPLEngineComponentEnumerator : NSObject {
    NSEnumerator * _enumerator;
    id /* block */  _handler;
}

- (void).cxx_destruct;
- (void)handleNextComponent;
- (id)initWithComponents:(id)arg1 handler:(id /* block */)arg2;

@end
