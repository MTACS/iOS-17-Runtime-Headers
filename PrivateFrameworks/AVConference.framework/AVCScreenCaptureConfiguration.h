
@interface AVCScreenCaptureConfiguration : NSObject {
    NSArray * _excludedApplicationBundleIDs;
    unsigned int  _frameRate;
    unsigned int  _height;
    bool  _isCursorCaptured;
    bool  _isWindowed;
    unsigned int  _screenCaptureDisplayID;
    NSString * _selectiveScreenUUID;
    unsigned int  _selectiveSharingPort;
    bool  _shouldRunInProcess;
    unsigned int  _width;
}

@property (nonatomic, copy) NSArray *excludedApplicationBundleIDs;
@property (nonatomic) unsigned int frameRate;
@property (nonatomic) unsigned int height;
@property (nonatomic) bool isCursorCaptured;
@property (nonatomic) bool isWindowed;
@property (nonatomic) unsigned int screenCaptureDisplayID;
@property (nonatomic, copy) NSString *selectiveScreenUUID;
@property (nonatomic) unsigned int selectiveSharingPort;
@property (nonatomic) bool shouldRunInProcess;
@property (nonatomic) unsigned int width;

- (void)dealloc;
- (id)excludedApplicationBundleIDs;
- (unsigned int)frameRate;
- (unsigned int)height;
- (id)init;
- (id)initWithHeight:(unsigned int)arg1 width:(unsigned int)arg2 framerate:(unsigned int)arg3 screenCaptureDisplayID:(unsigned int)arg4;
- (bool)isCursorCaptured;
- (bool)isWindowed;
- (unsigned int)screenCaptureDisplayID;
- (id)selectiveScreenUUID;
- (unsigned int)selectiveSharingPort;
- (void)setExcludedApplicationBundleIDs:(id)arg1;
- (void)setFrameRate:(unsigned int)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setIsCursorCaptured:(bool)arg1;
- (void)setIsWindowed:(bool)arg1;
- (void)setScreenCaptureDisplayID:(unsigned int)arg1;
- (void)setSelectiveScreenUUID:(id)arg1;
- (void)setSelectiveSharingPort:(unsigned int)arg1;
- (void)setShouldRunInProcess:(bool)arg1;
- (void)setWidth:(unsigned int)arg1;
- (bool)shouldRunInProcess;
- (unsigned int)width;

@end
