
@interface TXRDeferredTextureInfo : NSObject {
    TXRTextureInfo * _info;
    NSMutableArray * _mipmaps;
}

@property (nonatomic, retain) TXRTextureInfo *info;
@property (nonatomic, readonly) NSMutableArray *mipmaps;

- (void).cxx_destruct;
- (id)info;
- (id)initWithMipmapLevelCount:(unsigned long long)arg1 arrayLength:(unsigned long long)arg2 cubemap:(bool)arg3;
- (id)mipmaps;
- (void)setInfo:(id)arg1;

@end
