
@interface BCBrtMonitor : NSObject {
    id /* block */  _cancel;
}

- (void)cancel;
- (void)dealloc;
- (id)init;
- (void)setCancelHandler:(id /* block */)arg1;

@end
