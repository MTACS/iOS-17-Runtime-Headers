
@interface _NUImageProperties : NSObject <NUImageProperties> {
    long long  _alphaInfo;
    NSDictionary * _auxiliaryImagesProperties;
    NUColorSpace * _colorSpace;
    long long  _componentInfo;
    NSString * _fileUTI;
    NSNumber * _gainMapHeadroomValue;
    NSDictionary * _metadata;
    long long  _orientation;
    <NURAWImageProperties> * _rawProperties;
    struct { 
        long long width; 
        long long height; 
    }  _size;
    NSURL * _url;
}

@property long long alphaInfo;
@property (retain) NSDictionary *auxiliaryImagesProperties;
@property (nonatomic, retain) NUColorSpace *colorSpace;
@property long long componentInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSString *fileUTI;
@property (readonly) double gainMapHeadroom;
@property (readonly) NUVersion *gainMapVersion;
@property (readonly) bool hasGainMap;
@property (readonly) unsigned long long hash;
@property (readonly) bool isHDR;
@property (retain) NSDictionary *metadata;
@property long long orientation;
@property (retain) <NURAWImageProperties> *rawProperties;
@property struct { long long x1; long long x2; } size;
@property (readonly) Class superclass;
@property (retain) NSURL *url;

+ (bool)getGainMapHeadroom:(double*)arg1 fromMakerNote:(id)arg2;
+ (bool)getGainMapHeadroom:(double*)arg1 fromMetadata:(struct CGImageMetadata { }*)arg2;
+ (bool)getGainMapVersionMajor:(unsigned long long*)arg1 minor:(unsigned long long*)arg2 fromMetadata:(struct CGImageMetadata { }*)arg3;

- (void).cxx_destruct;
- (double)_computeGainMapHeadroom;
- (long long)alphaInfo;
- (id)auxiliaryImagesProperties;
- (id)colorSpace;
- (long long)componentInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fileUTI;
- (double)gainMapHeadroom;
- (id)gainMapVersion;
- (bool)hasGainMap;
- (id)initWithProperties:(id)arg1;
- (bool)isHDR;
- (id)metadata;
- (long long)orientation;
- (id)rawProperties;
- (void)setAlphaInfo:(long long)arg1;
- (void)setAuxiliaryImagesProperties:(id)arg1;
- (void)setColorSpace:(id)arg1;
- (void)setComponentInfo:(long long)arg1;
- (void)setFileUTI:(id)arg1;
- (void)setMetadata:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setRawProperties:(id)arg1;
- (void)setSize:(struct { long long x1; long long x2; })arg1;
- (void)setUrl:(id)arg1;
- (struct { long long x1; long long x2; })size;
- (id)url;

@end
