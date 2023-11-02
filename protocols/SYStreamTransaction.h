
@protocol SYStreamTransaction <NSObject>

@required

- (NSDictionary *)metadata;
- (NSProgress *)progress;
- (long long)type;

@end
