
@protocol SFUOutputStream <SFUSimpleOutputStream>

@required

- (bool)canCreateInputStream;
- (bool)canSeek;
- (void)close;
- (<SFUOutputStream> *)closeLocalStream;
- (<SFUInputStream> *)inputStream;
- (long long)offset;
- (void)seekToOffset:(long long)arg1 whence:(int)arg2;

@end
