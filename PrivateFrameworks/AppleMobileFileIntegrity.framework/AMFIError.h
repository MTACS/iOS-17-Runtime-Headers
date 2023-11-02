
@interface AMFIError : NSError

- (id)initWithAMFIErrorCode:(long long)arg1 withURL:(id)arg2;
- (id)initWithMISError:(int)arg1 withURL:(id)arg2;

@end
