
@interface MPSGraphFFTDescriptor : MPSGraphObject <NSCopying> {
    bool  _inverse;
    bool  _roundToOddHermitean;
    unsigned long long  _scalingMode;
}

@property (nonatomic) bool inverse;
@property (nonatomic) bool roundToOddHermitean;
@property (nonatomic) unsigned long long scalingMode;

+ (id)descriptor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)inverse;
- (bool)roundToOddHermitean;
- (unsigned long long)scalingMode;
- (void)setInverse:(bool)arg1;
- (void)setRoundToOddHermitean:(bool)arg1;
- (void)setScalingMode:(unsigned long long)arg1;

@end
