
@protocol MPCPlayerShuffleCommand <MPCPlayerCommand>

@required

- (MPCPlayerCommandRequest *)advance;
- (MPCPlayerCommandRequest *)setShuffleType:(long long)arg1;
- (NSArray *)supportedShuffleTypes;

@end
