
@protocol BCUOperation <NSObject>

@required

- (void)cancel;
- (NSString *)logKey;
- (float)priority;
- (void)setPriority:(float)arg1;
- (void)start;

@end
