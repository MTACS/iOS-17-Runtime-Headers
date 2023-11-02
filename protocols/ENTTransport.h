
@protocol ENTTransport <NSObject>

@required

- (void)cancel;
- (void)flush;
- (int)readAll:(char *)arg1 offset:(int)arg2 length:(int)arg3;
- (void)write:(const char *)arg1 offset:(unsigned int)arg2 length:(unsigned int)arg3;

@end
