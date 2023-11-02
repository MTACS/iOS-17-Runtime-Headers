
@interface Invalidation : NSObject {
    id /* block */  _block;
}

- (void).cxx_destruct;
- (id)initWithBlock:(id /* block */)arg1;
- (void)invoke;

@end
