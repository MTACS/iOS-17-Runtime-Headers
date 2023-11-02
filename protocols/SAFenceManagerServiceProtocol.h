
@protocol SAFenceManagerServiceProtocol

@required

- (void)addClient:(id <SAFenceManagerClientProtocol>)arg1;
- (void)ingestTAEvent:(id <TAEventProtocol>)arg1;
- (void)removeClient:(id <SAFenceManagerClientProtocol>)arg1;

@end
