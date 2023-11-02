
@interface _UIMappedBitmapImage : UIImage {
    NSData * _data;
}

@property (nonatomic, retain) NSData *data;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_configureImage:(id)arg1 assumePreconfigured:(bool)arg2;
- (void)_preheatBitmapData;
- (id)data;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setData:(id)arg1;

@end
