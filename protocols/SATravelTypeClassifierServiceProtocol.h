
@protocol SATravelTypeClassifierServiceProtocol

@required

- (void)addClient:(id <SATravelTypeClassifierClientProtocol>)arg1;
- (void)ingestTAEvent:(id <TAEventProtocol>)arg1;
- (void)removeClient:(id <SATravelTypeClassifierClientProtocol>)arg1;

@end
