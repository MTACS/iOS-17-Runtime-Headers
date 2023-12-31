
@interface TSWPObfuscatedFontDataProvider : NSObject {
    NSInputStream * _stream;
    unsigned char  _xorMask;
}

- (void)dealloc;
- (id)initWithPath:(id)arg1 groupUID:(id)arg2;
- (long long)p_currentOffset;
- (unsigned long long)readBytes:(char *)arg1 count:(unsigned long long)arg2;
- (void)rewind;
- (long long)skipForwardBy:(long long)arg1;

@end
