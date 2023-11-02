
@protocol PTByteWriter <NSObject>

@required

- (bool)appendBytes:(const void*)arg1 size:(unsigned long long)arg2;
- (NSError *)error;
- (bool)writeBytes:(const void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3;

@end
