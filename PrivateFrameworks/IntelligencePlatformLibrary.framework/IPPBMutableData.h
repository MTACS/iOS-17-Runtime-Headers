
@interface IPPBMutableData : NSMutableData {
    char * buffer;
    char * end;
    char * p;
}

- (const void*)bytes;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (unsigned long long)length;
- (void*)mutableBytes;
- (void)setLength:(unsigned long long)arg1;

@end
