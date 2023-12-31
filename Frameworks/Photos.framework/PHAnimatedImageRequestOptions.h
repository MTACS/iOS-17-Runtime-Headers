
@interface PHAnimatedImageRequestOptions : PHImageRequestOptions {
    bool  _allowPreCaching;
    bool  _useSharedImageDecoding;
}

@property (nonatomic) bool allowPreCaching;
@property (nonatomic) bool useSharedImageDecoding;

- (bool)allowPreCaching;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)setAllowPreCaching:(bool)arg1;
- (void)setUseSharedImageDecoding:(bool)arg1;
- (bool)useSharedImageDecoding;

@end
