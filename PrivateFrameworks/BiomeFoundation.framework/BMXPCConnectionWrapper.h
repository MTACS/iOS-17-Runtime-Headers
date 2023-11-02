
@interface BMXPCConnectionWrapper : NSObject {
    NSXPCConnection * _connection;
    bool  _isValid;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property bool isValid;

- (void).cxx_destruct;
- (id)connection;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)invalidate;
- (bool)isValid;
- (void)setIsValid:(bool)arg1;

@end
