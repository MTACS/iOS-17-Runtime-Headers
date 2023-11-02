
@interface ACFDispatchHelper : NSObject {
    id /* block */  _block;
}

- (void)dealloc;
- (void)dispatch;
- (id)initWithBlock:(id /* block */)arg1;

@end
