
@protocol SFUBufferedInputStream <SFUInputStream>

@required

- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;
- (bool)seekWithinBufferToOffset:(long long)arg1;

@end
