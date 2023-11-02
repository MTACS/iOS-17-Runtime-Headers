
@interface BWInferenceVideoFormat : NSObject <NSCopying> {
    <BWInferenceCropDescriptor> * _cropDescriptor;
    bool  _deviceOriented;
    id /* block */  _histogramRequest;
    bool  _includesInvalidContent;
    int  _rotationDegrees;
    BWVideoFormat * _underlyingVideoFormat;
    long long  _videoContentMode;
}

@property (nonatomic, readonly) int colorSpaceProperties;
@property (nonatomic, readonly) <BWInferenceCropDescriptor> *cropDescriptor;
@property (nonatomic, readonly) bool deviceOriented;
@property (nonatomic, readonly) unsigned long long extendedHeight;
@property (nonatomic, readonly) unsigned long long extendedWidth;
@property (readonly) struct opaqueCMFormatDescription { }*formatDescription;
@property (nonatomic, readonly) unsigned long long height;
@property (nonatomic, readonly, copy) id /* block */ histogramRequest;
@property (nonatomic, readonly) bool includesInvalidContent;
@property (nonatomic, readonly) NSDictionary *pixelBufferAttributes;
@property (nonatomic, readonly) unsigned int pixelFormat;
@property (nonatomic, readonly) int rotationDegrees;
@property (nonatomic, readonly) BWVideoFormat *underlyingVideoFormat;
@property (nonatomic, readonly) long long videoContentMode;
@property (nonatomic, readonly) unsigned long long width;

+ (id)formatByResolvingRequirements:(id)arg1;

- (int)colorSpaceProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cropDescriptor;
- (void)dealloc;
- (id)description;
- (bool)deviceOriented;
- (unsigned long long)extendedHeight;
- (unsigned long long)extendedWidth;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (unsigned long long)hash;
- (unsigned long long)height;
- (id /* block */)histogramRequest;
- (bool)includesInvalidContent;
- (id)initWithUnderlyingFormat:(id)arg1 isDeviceOriented:(bool)arg2 videoContentMode:(long long)arg3 includesInvalidContent:(bool)arg4 cropDescriptor:(id)arg5 histogramRequest:(id /* block */)arg6 rotationDegrees:(int)arg7;
- (bool)isEqual:(id)arg1;
- (id)pixelBufferAttributes;
- (unsigned int)pixelFormat;
- (bool)representsCompressedEquivalent;
- (int)rotationDegrees;
- (unsigned int)uncompressedEquivalent;
- (id)underlyingVideoFormat;
- (long long)videoContentMode;
- (unsigned long long)width;

@end
