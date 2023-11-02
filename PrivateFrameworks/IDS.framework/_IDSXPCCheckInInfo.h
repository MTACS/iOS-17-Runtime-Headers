
@interface _IDSXPCCheckInInfo : NSObject {
    <IDSXPCConnectionProtocol> * _connection;
    bool  _finishedTransaction;
    NSObject<OS_xpc_object> * _tempObject;
}

@property (nonatomic, retain) <IDSXPCConnectionProtocol> *connection;
@property (nonatomic) bool finishedTransaction;
@property (nonatomic, retain) NSObject<OS_xpc_object> *tempObject;

- (void).cxx_destruct;
- (id)connection;
- (bool)finishedTransaction;
- (void)setConnection:(id)arg1;
- (void)setFinishedTransaction:(bool)arg1;
- (void)setTempObject:(id)arg1;
- (id)tempObject;

@end
