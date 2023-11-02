
@interface NEIPCWrapper : NSObject {
    NSUUID * _identifier;
    NEIPC * _ipc;
    NSObject<OS_dispatch_queue> * _ipcQueue;
    NSObject<OS_dispatch_queue> * _sendQueue;
}

- (void).cxx_destruct;

@end
