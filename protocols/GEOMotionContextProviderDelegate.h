
@protocol GEOMotionContextProviderDelegate <NSObject>

@required

- (void)motionContextProvider:(id <GEOMotionContextProvider>)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;

@end
