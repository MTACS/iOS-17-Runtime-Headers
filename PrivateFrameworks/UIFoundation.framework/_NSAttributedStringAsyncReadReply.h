
@interface _NSAttributedStringAsyncReadReply : NSObject {
    NSXPCConnection * _connection;
    bool  _delivered;
    id /* block */  _reply;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) bool delivered;
@property (nonatomic, readonly, copy) id /* block */ reply;

+ (id)readReplyWithConnection:(id)arg1 reply:(id /* block */)arg2;

- (void)cancelWithError:(id)arg1;
- (id)connection;
- (void)dealloc;
- (void)deliverAttributedString:(id)arg1 documentAttributes:(id)arg2 error:(id)arg3;
- (bool)delivered;
- (id /* block */)reply;

@end
