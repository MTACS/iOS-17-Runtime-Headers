
@protocol MPMiddlewareAutomaticDependencyOperation <MPMiddlewareOperation>

@required

- (NSMapTable *)inputOperations;
- (NSArray *)inputProtocols;
- (NSArray *)outputProtocols;
- (void)setInputOperations:(NSMapTable *)arg1;

@end
