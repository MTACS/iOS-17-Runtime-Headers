
@protocol STContainer <NSObject>

@required

- (unsigned long long)containerClass;
- (unsigned long long)diskUsageWithError:(id*)arg1;
- (NSString *)identifier;
- (NSURL *)url;

@end
