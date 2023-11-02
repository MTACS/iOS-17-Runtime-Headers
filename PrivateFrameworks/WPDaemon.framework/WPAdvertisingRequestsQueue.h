
@interface WPAdvertisingRequestsQueue : NSObject {
    NSMutableSet * _clientTypes;
    NSMutableArray * _queue;
}

@property (nonatomic, retain) NSMutableSet *clientTypes;
@property (nonatomic, retain) NSMutableArray *queue;

- (void).cxx_destruct;
- (void)add:(id)arg1;
- (id)allRequests;
- (id)clientTypes;
- (unsigned long long)count;
- (id)init;
- (bool)isAdvertisingForClientType:(unsigned char)arg1;
- (id)queue;
- (void)remove:(id)arg1;
- (void)removeAll;
- (void)removeRequestsOfClientType:(unsigned char)arg1;
- (void)setClientTypes:(id)arg1;
- (void)setQueue:(id)arg1;

@end
