
@protocol MPCPlayerRepeatCommand <MPCPlayerCommand>

@required

- (MPCPlayerCommandRequest *)advance;
- (MPCPlayerCommandRequest *)setRepeatType:(long long)arg1;
- (NSArray *)supportedRepeatTypes;

@end
