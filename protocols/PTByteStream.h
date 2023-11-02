
@protocol PTByteStream <NSObject>

@required

- (NSError *)error;
- (unsigned long long)readBytes:(void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3;
- (unsigned long long)size;

@end
