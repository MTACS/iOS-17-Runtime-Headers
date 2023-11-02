
@protocol SKProgressHandler <NSObject>

@required

- (void)updateUUID:(NSString *)arg1 progress:(float)arg2 message:(NSString *)arg3;

@end
