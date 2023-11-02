
@interface BlockDeallocator : NSObject {
    id /* block */  _block;
}

- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;

@end
