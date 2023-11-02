
@protocol MPCPlayerActionAtQueueEndCommand <MPCPlayerCommand>

@required

- (MPCPlayerCommandRequest *)setQueueEndAction:(long long)arg1;
- (NSArray *)supportedActions;

@end
