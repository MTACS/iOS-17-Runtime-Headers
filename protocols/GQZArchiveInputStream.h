
@protocol GQZArchiveInputStream <NSObject>

@required

- (const char *)dataAtOffset:(long long)arg1 size:(unsigned long long)arg2 end:(long long)arg3 readSize:(unsigned long long*)arg4;
- (void)readFromOffset:(long long)arg1 size:(unsigned long long)arg2 buffer:(char *)arg3;
- (long long)size;

@end
