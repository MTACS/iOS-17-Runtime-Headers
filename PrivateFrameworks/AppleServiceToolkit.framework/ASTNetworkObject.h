
@interface ASTNetworkObject : NSObject {
    <ASTConnection> * _connection;
    NSMutableData * _receivedData;
}

@property (nonatomic, retain) <ASTConnection> *connection;
@property (nonatomic, retain) NSMutableData *receivedData;

- (void).cxx_destruct;
- (id)connection;
- (id)receivedData;
- (void)setConnection:(id)arg1;
- (void)setReceivedData:(id)arg1;

@end
