
@interface ABSCallbackInvoker : NSObject {
    void * addressBook;
    int (* callback;
    void * context;
}

+ (void)invokeOnThread:(id)arg1 callback:(int (*)arg2 withAddressBook:(void*)arg3 context:(void*)arg4;

- (void)invoke;

@end
