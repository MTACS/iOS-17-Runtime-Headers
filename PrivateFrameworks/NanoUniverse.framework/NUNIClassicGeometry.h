
@interface NUNIClassicGeometry : NSObject {
    int  _icount;
    unsigned short * _indices;
    int  _vcount;
    struct NUNIClassicVertex { } * _vertices;
}

@property (nonatomic, readonly) int icount;
@property (nonatomic, readonly) const unsigned short*indices;
@property (nonatomic, readonly) int vcount;
@property (nonatomic, readonly) const struct NUNIClassicVertex { }*vertices;

- (int)addIndices:(const unsigned short*)arg1 count:(int)arg2 vbase:(int)arg3;
- (int)addVertices:(const struct NUNIClassicVertex { }*)arg1 count:(int)arg2;
- (void)dealloc;
- (int)icount;
- (const unsigned short*)indices;
- (int)vcount;
- (const struct NUNIClassicVertex { }*)vertices;

@end
