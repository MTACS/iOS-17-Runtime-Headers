
@interface MDLTextureFilter : NSObject {
    unsigned long long  magFilter;
    unsigned long long  minFilter;
    unsigned long long  mipFilter;
    unsigned long long  rWrapMode;
    unsigned long long  sWrapMode;
    unsigned long long  tWrapMode;
}

@property (nonatomic) unsigned long long magFilter;
@property (nonatomic) unsigned long long minFilter;
@property (nonatomic) unsigned long long mipFilter;
@property (nonatomic) unsigned long long rWrapMode;
@property (nonatomic) unsigned long long sWrapMode;
@property (nonatomic) unsigned long long tWrapMode;

- (id)init;
- (unsigned long long)magFilter;
- (unsigned long long)minFilter;
- (unsigned long long)mipFilter;
- (unsigned long long)rWrapMode;
- (unsigned long long)sWrapMode;
- (void)setMagFilter:(unsigned long long)arg1;
- (void)setMinFilter:(unsigned long long)arg1;
- (void)setMipFilter:(unsigned long long)arg1;
- (void)setRWrapMode:(unsigned long long)arg1;
- (void)setSWrapMode:(unsigned long long)arg1;
- (void)setTWrapMode:(unsigned long long)arg1;
- (unsigned long long)tWrapMode;

@end
