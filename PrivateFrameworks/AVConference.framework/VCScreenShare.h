
@interface VCScreenShare : NSObject {
    long long  _captureSourceID;
    NSNumber * _clientPID;
    bool  _contentRepickingAllowed;
    NSArray * _excludedApplicationBundleIDs;
    unsigned int  _frameRate;
    unsigned int  _height;
    bool  _isCursorCaptured;
    bool  _isWindowed;
    bool  _privateContentCaptureAllowed;
    unsigned int  _screenCaptureDisplayID;
    NSString * _selectiveScreenUUID;
    unsigned int  _selectiveSharingPort;
    unsigned int  _width;
}

@property (nonatomic, readonly) long long captureSourceID;
@property (nonatomic, retain) NSNumber *clientPID;
@property (nonatomic) bool contentRepickingAllowed;
@property (nonatomic, retain) NSArray *excludedApplicationBundleIDs;
@property (nonatomic, readonly) unsigned int frameRate;
@property (nonatomic, readonly) unsigned int height;
@property (nonatomic) bool isCursorCaptured;
@property (nonatomic, readonly) bool isWindowed;
@property (nonatomic) bool privateContentCaptureAllowed;
@property (nonatomic, readonly) unsigned int screenCaptureDisplayID;
@property (nonatomic, retain) NSString *selectiveScreenUUID;
@property (nonatomic, readonly) unsigned int selectiveSharingPort;
@property (nonatomic, readonly) unsigned int width;

- (long long)captureSourceID;
- (id)clientPID;
- (bool)contentRepickingAllowed;
- (void)dealloc;
- (id)excludedApplicationBundleIDs;
- (unsigned int)frameRate;
- (unsigned int)height;
- (id)initWithConfig:(id)arg1 pid:(id)arg2 captureSourceID:(id)arg3;
- (bool)isCursorCaptured;
- (bool)isWindowed;
- (bool)privateContentCaptureAllowed;
- (unsigned int)screenCaptureDisplayID;
- (id)selectiveScreenUUID;
- (unsigned int)selectiveSharingPort;
- (void)setClientPID:(id)arg1;
- (void)setConfig:(id)arg1 pid:(id)arg2 captureSourceID:(id)arg3;
- (void)setContentRepickingAllowed:(bool)arg1;
- (void)setExcludedApplicationBundleIDs:(id)arg1;
- (void)setIsCursorCaptured:(bool)arg1;
- (void)setPrivateContentCaptureAllowed:(bool)arg1;
- (void)setSelectiveScreenUUID:(id)arg1;
- (void)updateScreenCaptureWithConfig:(id)arg1;
- (unsigned int)width;

@end
