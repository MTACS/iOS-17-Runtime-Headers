
@interface ByteOffsetPair : NSObject {
    unsigned long long  _lineByteOffset;
    unsigned long long  _nextLineByteOffset;
}

@property (nonatomic) unsigned long long lineByteOffset;
@property (nonatomic) unsigned long long nextLineByteOffset;

- (unsigned long long)lineByteOffset;
- (unsigned long long)nextLineByteOffset;
- (void)setLineByteOffset:(unsigned long long)arg1;
- (void)setNextLineByteOffset:(unsigned long long)arg1;

@end
