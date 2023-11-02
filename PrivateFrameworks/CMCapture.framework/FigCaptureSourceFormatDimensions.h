
@interface FigCaptureSourceFormatDimensions : NSObject {
    struct { 
        int width; 
        int height; 
    }  _deferredPhotoProxyDimensions;
    struct { 
        int width; 
        int height; 
    }  _dimensions;
    int  _flavor;
    bool  _isPrivate;
    struct { 
        int width; 
        int height; 
    }  _maxUpscalingDimensions;
}

@property (readonly) struct { int x1; int x2; } deferredPhotoProxyDimensions;
@property (readonly) struct { int x1; int x2; } dimensions;
@property (readonly) int flavor;
@property (readonly) bool isPrivate;
@property (readonly) struct { int x1; int x2; } maxUpscalingDimensions;

+ (id)identifyDimensionsFromFlavor:(int)arg1 availableHighResStillImageDimensions:(id)arg2;
+ (int)identifyResolutionFlavorFromDimensions:(struct { int x1; int x2; })arg1 availableHighResStillImageDimensions:(id)arg2;
+ (id)identifySourceFormatDimensionsFromDimensions:(struct { int x1; int x2; })arg1 availableHighResStillImageDimensions:(id)arg2;

- (struct { int x1; int x2; })deferredPhotoProxyDimensions;
- (id)description;
- (struct { int x1; int x2; })dimensions;
- (bool)dimensionsAreEqualToDimensions:(struct { int x1; int x2; })arg1;
- (int)flavor;
- (id)initWithDimensions:(struct { int x1; int x2; })arg1 deferredPhotoProxyDimensions:(struct { int x1; int x2; })arg2 isPrivate:(bool)arg3 flavor:(int)arg4 maxUpscalingDimensions:(struct { int x1; int x2; })arg5;
- (bool)isPrivate;
- (struct { int x1; int x2; })maxUpscalingDimensions;

@end
