
@protocol IKJSDataSource <JSExport>

@required

+ (JSValue *)makeDataSource:(JSValue *)arg1 :(JSValue *)arg2 :(long long)arg3;

- (JSValue *)delete:(long long)arg1 :(long long)arg2;
- (void)insert:(long long)arg1 :(JSValue *)arg2 :(JSValue *)arg3;
- (JSValue *)item:(long long)arg1;
- (long long)length;
- (void)move:(long long)arg1 :(long long)arg2 :(long long)arg3 :(JSValue *)arg4;
- (JSValue *)replace:(long long)arg1 :(JSValue *)arg2;
- (long long)segmentSize;
- (void)update:(JSValue *)arg1 :(JSValue *)arg2 :(long long)arg3;

@end
