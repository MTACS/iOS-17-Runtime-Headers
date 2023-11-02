
@interface MKConnection : NSObject {
    NSObject<OS_nw_connection> * _connection;
    NSString * _hostname;
    NSValue * _identifier;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic) NSObject<OS_nw_connection> *connection;
@property (nonatomic, copy) NSString *hostname;
@property (nonatomic, retain) NSValue *identifier;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)connection;
- (id)hostname;
- (id)identifier;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 hostname:(id)arg3;
- (id)queue;
- (void)setConnection:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setQueue:(id)arg1;

@end
