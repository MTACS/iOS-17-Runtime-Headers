
@interface AVBlockOperation : AVOperation {
    id /* block */  _block;
}

- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (void)start;

@end
