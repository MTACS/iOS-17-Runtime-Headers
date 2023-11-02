
@protocol BNRequesterPending <BNPending>

@required

- (bool)setSuspended:(bool)arg1 forRequesterWithIdentifier:(NSString *)arg2 reason:(NSString *)arg3;

@end
