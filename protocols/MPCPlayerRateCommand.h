
@protocol MPCPlayerRateCommand <MPCPlayerCommand>

@required

- (MPCPlayerCommandRequest *)changeValue:(float)arg1;
- (float)maximumValue;
- (float)minimumValue;

@end
