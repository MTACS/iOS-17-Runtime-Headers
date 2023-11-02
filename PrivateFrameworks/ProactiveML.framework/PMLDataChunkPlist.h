
@interface PMLDataChunkPlist : PMLDataChunk {
    bool  _parsed;
    id  _plist;
}

@property (nonatomic, readonly) id plist;

+ (id)chunkWithPlist:(id)arg1;
+ (unsigned int)dataChunkType;

- (void).cxx_destruct;
- (id)plist;

@end
