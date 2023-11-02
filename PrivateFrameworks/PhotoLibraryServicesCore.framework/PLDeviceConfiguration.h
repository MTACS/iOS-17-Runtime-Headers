
@interface PLDeviceConfiguration : NSObject {
    bool  _isMac;
    bool  _isMigrationService;
    bool  _isPad;
    bool  _isRetina;
    bool  _isTV;
    bool  _isWatch;
    struct CGSize { 
        double width; 
        double height; 
    }  _logicalScreenSize;
    double  _screenScale;
    bool  _supportsASTC;
}

@property (nonatomic) bool isMac;
@property (nonatomic) bool isMigrationService;
@property (nonatomic) bool isPad;
@property (nonatomic) bool isRetina;
@property (nonatomic) bool isTV;
@property (nonatomic) bool isWatch;
@property (nonatomic, readonly) unsigned long long logicalScreenPixelSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } logicalScreenSize;
@property (nonatomic, readonly) double screenScale;
@property (nonatomic, readonly) bool shouldUseNanoThumbnailFormats;
@property (nonatomic) bool supportsASTC;

+ (id)defaultDeviceConfiguration;

- (id)description;
- (id)initWithLogicalScreenSize:(struct CGSize { double x1; double x2; })arg1 screenScale:(double)arg2 deviceClass:(void*)arg3 supportsASTC:(bool)arg4 isMigrationService:(bool)arg5;
- (bool)isMac;
- (bool)isMigrationService;
- (bool)isPad;
- (bool)isRetina;
- (bool)isTV;
- (bool)isWatch;
- (unsigned long long)logicalScreenPixelSize;
- (struct CGSize { double x1; double x2; })logicalScreenSize;
- (double)screenScale;
- (void)setIsMac:(bool)arg1;
- (void)setIsMigrationService:(bool)arg1;
- (void)setIsPad:(bool)arg1;
- (void)setIsRetina:(bool)arg1;
- (void)setIsTV:(bool)arg1;
- (void)setIsWatch:(bool)arg1;
- (void)setSupportsASTC:(bool)arg1;
- (bool)shouldUseNanoThumbnailFormats;
- (bool)supportsASTC;

@end
