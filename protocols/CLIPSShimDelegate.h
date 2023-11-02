
@protocol CLIPSShimDelegate <NSObject>

@optional

- (void)clipsConsoleOutput:(NSString *)arg1 consoleChannel:(const char *)arg2 forEngine:(CLIPSShim *)arg3;
- (void)clipsDidClear:(CLIPSShim *)arg1;
- (void)clipsDidReset:(CLIPSShim *)arg1;

@end
