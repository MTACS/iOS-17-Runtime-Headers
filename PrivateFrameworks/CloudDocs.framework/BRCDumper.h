
@interface BRCDumper : NSObject

- (void)changeAttributes:(int)arg1;
- (void)changeBgColor:(int)arg1;
- (void)changeFgColor:(int)arg1;
- (void)reset;
- (void)startAttributes:(int)arg1;
- (void)startBgColor:(int)arg1;
- (void)startBgColor:(int)arg1 attr:(int)arg2;
- (void)startFgColor:(int)arg1;
- (void)startFgColor:(int)arg1 attr:(int)arg2;
- (void)startFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (id)startStringForFgColor:(int)arg1 bgColor:(int)arg2 attr:(int)arg3;
- (id)stringForReset;
- (void)write:(const char *)arg1;

@end
