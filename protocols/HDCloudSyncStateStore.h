
@protocol HDCloudSyncStateStore <NSObject>

@required

- (bool)data:(id*)arg1 forKey:(NSString *)arg2 error:(id*)arg3;
- (bool)setData:(NSData *)arg1 forKey:(NSString *)arg2 error:(id*)arg3;

@end
