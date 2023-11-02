
@interface CLSDeallocNotifier : NSObject {
    id /* block */  _block;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDeallocCallbackBlock:(id /* block */)arg1;

@end
