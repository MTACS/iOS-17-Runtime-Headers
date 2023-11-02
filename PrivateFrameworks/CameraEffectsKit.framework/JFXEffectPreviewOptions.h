
@interface JFXEffectPreviewOptions : NSObject <NSCopying> {
    PVColorSpace * _outputColorSpace;
    unsigned int  _parentCode;
    unsigned long long  _quality;
}

@property (nonatomic, retain) PVColorSpace *outputColorSpace;
@property (nonatomic) unsigned int parentCode;
@property (nonatomic) unsigned long long quality;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initPreviewOptions;
- (id)outputColorSpace;
- (unsigned int)parentCode;
- (unsigned long long)quality;
- (void)setOutputColorSpace:(id)arg1;
- (void)setParentCode:(unsigned int)arg1;
- (void)setQuality:(unsigned long long)arg1;

@end
