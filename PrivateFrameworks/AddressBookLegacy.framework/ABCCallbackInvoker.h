
@interface ABCCallbackInvoker : NSObject {
    void * ab;
    int (* cb;
    void * context;
}

- (void)invoke;

@end
