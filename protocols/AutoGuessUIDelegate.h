
@protocol AutoGuessUIDelegate

@required

- (void)autoguessProgressComplete:(NSDictionary *)arg1;
- (void)autoguessProgressUpdated:(int)arg1 paramString:(NSString *)arg2;
- (void)autoguessUpdateTargetInfo:(NSDictionary *)arg1;

@end
