
@interface NFCISO15693ReadMultipleBlocksConfiguration : NFCTagCommandConfiguration {
    unsigned long long  _chunkSize;
    unsigned char  _flags;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic) unsigned long long chunkSize;
@property (nonatomic) unsigned char flags;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (id)asNSDataArrayWithUID:(id)arg1 error:(id*)arg2;
- (unsigned long long)chunkSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned char)flags;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 chunkSize:(unsigned long long)arg2;
- (id)initWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 chunkSize:(unsigned long long)arg2 maximumRetries:(unsigned long long)arg3 retryInterval:(double)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setChunkSize:(unsigned long long)arg1;
- (void)setFlags:(unsigned char)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
