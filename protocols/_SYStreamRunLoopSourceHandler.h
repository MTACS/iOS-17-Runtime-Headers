
@protocol _SYStreamRunLoopSourceHandler <NSObject>

@required

- (_SYStreamGuts *)_internal;
- (void)_postEventToDelegate:(unsigned long long)arg1;

@end
