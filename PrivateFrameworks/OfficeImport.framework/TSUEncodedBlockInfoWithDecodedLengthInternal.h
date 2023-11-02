
@interface TSUEncodedBlockInfoWithDecodedLengthInternal : TSUEncodedBlockInfoInternal {
    unsigned long long  _decodedLength;
}

- (unsigned long long)decodedLength;
- (id)initWithEncodedLength:(unsigned long long)arg1 decodedLength:(unsigned long long)arg2;

@end
