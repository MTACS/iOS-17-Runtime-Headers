
@interface asn1SequenceToken : asn1Token {
    const char * mReadPointer;
}

- (id)_initWithID:(unsigned long long)arg1 class:(unsigned char)arg2 length:(unsigned long long)arg3 content:(const char *)arg4 opaque:(bool)arg5;
- (id)description;
- (id)nextToken;
- (void)reset;

@end
