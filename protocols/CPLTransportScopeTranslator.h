
@protocol CPLTransportScopeTranslator <NSObject>

@required

- (id)concreteScopeFromTransportScope:(NSData *)arg1;
- (id)tentativeConcreteScopeForScope:(CPLEngineScope *)arg1;
- (NSData *)transportScopeFromConcreteScope:(id)arg1;

@end
