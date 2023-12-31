
@protocol ATSocketDelegate <NSObject>

@required

- (void)socket:(ATSocket *)arg1 hasDataAvailable:(const char *)arg2 length:(long long)arg3;
- (void)socketDidClose:(ATSocket *)arg1;

@end
