
@interface SBDisplayPowerLogEntry : NSObject <NSCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
    NSString * _displayName;
    struct CGSize { 
        double width; 
        double height; 
    }  _nativeSize;
    unsigned long long  _windowingMode;
    unsigned long long  _zoomLevel;
}

@property (nonatomic) struct CGSize { double x1; double x2; } canvasSize;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic) struct CGSize { double x1; double x2; } nativeSize;
@property (nonatomic) unsigned long long windowingMode;
@property (nonatomic) unsigned long long zoomLevel;

+ (id)forDisplay:(id)arg1 mode:(unsigned long long)arg2 zoom:(unsigned long long)arg3;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })canvasSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayName;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)logPayload;
- (struct CGSize { double x1; double x2; })nativeSize;
- (void)setCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDisplayName:(id)arg1;
- (void)setNativeSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWindowingMode:(unsigned long long)arg1;
- (void)setZoomLevel:(unsigned long long)arg1;
- (unsigned long long)windowingMode;
- (unsigned long long)zoomLevel;

@end
