
@protocol SAServiceServiceProtocol <NSObject>

@required

- (void)addClient:(id <SAServiceClientProtocol>)arg1;
- (void)ingestTAEvent:(id <TAEventProtocol>)arg1;
- (void)removeClient:(id <SAServiceClientProtocol>)arg1;

@end
