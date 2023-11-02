
@interface FigCaptureSourceFormat : NSObject {
    NSDictionary * _formatDictionary;
    NSArray * _highResStillImageDimensions;
    unsigned int  _pixelFormatOverride;
    NSString * _uniqueID;
}

@property (getter=isDefaultActiveFormat, readonly) bool defaultActiveFormat;
@property (readonly) struct { int x1; int x2; } defaultHighResStillImageDimensions;
@property (readonly) struct { int x1; int x2; } dimensions;
@property (getter=isExperimental, readonly) bool experimental;
@property (readonly) unsigned int format;
@property (readonly) struct opaqueCMFormatDescription { }*formatDescription;
@property (readonly) NSArray *highResStillImageDimensions;
@property (readonly) int maxPoints;
@property (readonly) float maxSupportedFrameRate;
@property (readonly) unsigned int mediaType;
@property (readonly) float minSupportedFrameRate;
@property (readonly) struct { int x1; int x2; } soleHighResStillImageDimensions;
@property (readonly) NSString *uniqueID;

- (void)dealloc;
- (struct { int x1; int x2; })defaultHighResStillImageDimensions;
- (id)description;
- (struct { int x1; int x2; })dimensions;
- (unsigned int)format;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (id)formatDictionary;
- (id)highResStillImageDimensions;
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1;
- (id)initWithFigCaptureStreamFormatDictionary:(id)arg1 pixelFormatOverride:(unsigned int)arg2;
- (bool)isDefaultActiveFormat;
- (bool)isEqual:(id)arg1;
- (bool)isExperimental;
- (int)maxPoints;
- (float)maxSupportedFrameRate;
- (unsigned int)mediaType;
- (float)minSupportedFrameRate;
- (struct { int x1; int x2; })soleHighResStillImageDimensions;
- (id)uniqueID;

@end
