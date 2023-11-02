
@interface RTISessionMarker : NSObject {
    id /* block */  _completionHandler;
}

@property (nonatomic, copy) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)setCompletionHandler:(id /* block */)arg1;

@end
