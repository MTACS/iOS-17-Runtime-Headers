
@interface HMDVideoResolution : HAPNumberParser <NSCopying, NSSecureCoding> {
    NSNumber * _imageHeight;
    NSNumber * _imageWidth;
    unsigned long long  _resolutionType;
}

@property (nonatomic, readonly, copy) NSNumber *imageHeight;
@property (nonatomic, readonly, copy) NSNumber *imageWidth;
@property (nonatomic, readonly) unsigned long long resolutionType;

+ (id)arrayWithResolutions:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_extractWidthAndHeight;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageHeight;
- (id)imageWidth;
- (id)initWithCoder:(id)arg1;
- (id)initWithResolution:(unsigned long long)arg1;
- (id)initWithTLVData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)resolutionType;

@end
