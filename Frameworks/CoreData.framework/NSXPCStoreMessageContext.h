
@interface NSXPCStoreMessageContext : NSObject {
    NSError * _error;
    NSCoreDataXPCMessage * _message;
    NSDictionary * _result;
    NSXPCStore * _store;
}

- (void)dealloc;
- (id)initForMessage:(id)arg1 store:(id)arg2;

@end
