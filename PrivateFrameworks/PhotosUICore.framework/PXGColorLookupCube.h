
@interface PXGColorLookupCube : NSObject <NSCopying> {
    long long  _edgeSize;
    bool  _shouldCache;
}

@property (nonatomic, readonly) void center;
@property (nonatomic) long long edgeSize;
@property (nonatomic, readonly) bool shouldCache;
@property (nonatomic, readonly) NSData *textureData;

- (void)center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createTextureWithContext:(id)arg1;
- (long long)edgeSize;
- (void)setEdgeSize:(long long)arg1;
- (bool)shouldCache;
- (id)textureData;

@end
