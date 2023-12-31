
@interface PMLDataChunk : NSObject <NSCopying> {
    NSData * _backingData;
    NSData * _superdata;
}

+ (id)chunkOfType:(unsigned int)arg1 data:(id)arg2 superdata:(id)arg3;
+ (id)chunksFromData:(id)arg1;
+ (id)chunksFromFileAtPath:(id)arg1;
+ (unsigned int)dataChunkType;
+ (id)serializeChunks:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSuperdata:(id)arg1;

@end
