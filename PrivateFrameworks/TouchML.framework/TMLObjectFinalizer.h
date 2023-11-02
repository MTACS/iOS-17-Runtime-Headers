
@interface TMLObjectFinalizer : NSObject {
    id /* block */  _block;
}

+ (void)runBlock:(id /* block */)arg1 onFinalize:(id)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;

@end
