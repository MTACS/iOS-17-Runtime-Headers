
@protocol BPSWindowAssigner <NSObject>

@required

- (NSSet *)assignWindow:(NSArray *)arg1 input:(id)arg2;
- (NSSet *)updateAndReturnNewWindowStates:(NSArray *)arg1 input:(id)arg2;

@end
