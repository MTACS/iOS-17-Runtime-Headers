
@protocol BLSHPendingOperation <NSObject>

@required

- (bool)isCompleted;
- (bool)isStarted;
- (void)setCompleted:(bool)arg1;
- (void)setStarted:(bool)arg1;
- (long long)type;

@end
