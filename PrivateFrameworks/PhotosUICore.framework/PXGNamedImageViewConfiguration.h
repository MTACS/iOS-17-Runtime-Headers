
@interface PXGNamedImageViewConfiguration : NSObject <NSCopying> {
    long long  _contentMode;
    NSString * _imageName;
}

@property (nonatomic) long long contentMode;
@property (nonatomic, copy) NSString *imageName;

- (void).cxx_destruct;
- (long long)contentMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)imageName;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setImageName:(id)arg1;

@end
