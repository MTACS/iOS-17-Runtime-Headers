
@interface CloudKit.ChunkStreamHandle : NSObject {
    void chunkReader;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  downloadURL;
    void key;
    void range;
    void signature;
}

- (void).cxx_destruct;
- (id)init;

@end
