
@interface DYCaptureSessionInfo : NSObject {
    unsigned long long  _capturedFramesCount;
    NSDictionary * _configurationDictionary;
    DYDeviceInfo * _controlDeviceInfo;
    DYDeviceInfo * _deviceInfo;
    unsigned int  _graphicsApi;
    NSDictionary * _guestAppInfoPlist;
    bool  _guestAppWasLinkedOnApexOrLater;
    struct DYInterposeVersion { int x1; char *x2; } * _interposerVersion;
    unsigned int  _isBoundaryLess;
    NSDictionary * _launchDictionary;
    NSDictionary * _libraryLinkTimeVersions;
    unsigned int  _nativePointerSize;
    NSString * _patchVersion;
    NSDictionary * _queueLabels;
    NSDictionary * _threadLabels;
    struct DYInterposeVersion { 
        int version; 
        char *patch; 
    }  _version;
}

@property (nonatomic, readonly) unsigned long long capturedFramesCount;
@property (nonatomic, readonly, retain) NSDictionary *configurationDictionary;
@property (nonatomic, readonly, retain) DYDeviceInfo *controlDeviceInfo;
@property (nonatomic, readonly, retain) DYDeviceInfo *deviceInfo;
@property (nonatomic, readonly) unsigned int frameLimit;
@property (nonatomic, readonly) unsigned int graphicsApi;
@property (nonatomic, readonly, retain) NSArray *guestAppArguments;
@property (nonatomic, readonly, retain) NSString *guestAppBundleIdentifier;
@property (nonatomic, readonly, retain) NSString *guestAppCurrentDirectory;
@property (nonatomic, readonly, retain) NSDictionary *guestAppEnvironment;
@property (nonatomic, readonly, retain) NSDictionary *guestAppInfoPlist;
@property (nonatomic, readonly, retain) NSString *guestAppPath;
@property (nonatomic, readonly, retain) NSString *guestAppTitle;
@property (nonatomic, readonly) bool guestAppWasLinkedOnApexOrLater;
@property (nonatomic, readonly) bool harvestStateAtEnd;
@property (nonatomic) struct DYInterposeVersion { int x1; char *x2; }*interposerVersion;
@property (nonatomic, readonly) unsigned int isBoundaryLess;
@property (nonatomic, readonly, retain) NSDictionary *launchDictionary;
@property (nonatomic, readonly) bool lockGraphicsAfterCompletion;
@property (nonatomic, readonly) unsigned int nativePointerSize;
@property (nonatomic, readonly) bool suspendAfterCompletion;
@property (nonatomic, readonly) unsigned int triggerFrame;
@property (nonatomic, readonly) bool triggerOnNextGraphicsCommand;

+ (unsigned int)graphicsAPIOfCaptureStore:(id)arg1;
+ (int)platformOfCaptureStore:(id)arg1;
+ (id)symbolicatorSignatureFromCaptureStore:(id)arg1;

- (bool)_isBackwardsCompatible:(id)arg1 isInternal:(bool)arg2;
- (bool)canPlaybackOnDeviceWithInfo:(id)arg1 limitBackwardsCompatibility:(bool)arg2 isInternal:(bool)arg3;
- (bool)canPlaybackOnDeviceWithInfo:(id)arg1 limitBackwardsCompatibility:(bool)arg2 isInternal:(bool)arg3 withBlock:(id /* block */)arg4;
- (unsigned long long)capturedFramesCount;
- (id)configurationDictionary;
- (id)controlDeviceInfo;
- (void)dealloc;
- (id)deviceInfo;
- (unsigned int)frameLimit;
- (unsigned int)graphicsApi;
- (id)guestAppArguments;
- (id)guestAppBundleIdentifier;
- (id)guestAppCurrentDirectory;
- (id)guestAppEnvironment;
- (id)guestAppInfoPlist;
- (id)guestAppPath;
- (id)guestAppTitle;
- (bool)guestAppWasLinkedOnApexOrLater;
- (bool)harvestStateAtEnd;
- (id)init;
- (id)initWithCaptureStore:(id)arg1;
- (struct DYInterposeVersion { int x1; char *x2; }*)interposerVersion;
- (unsigned int)isBoundaryLess;
- (id)labelForQueueID:(unsigned long long)arg1;
- (id)labelForThreadID:(unsigned long long)arg1;
- (id)launchDictionary;
- (int)linkTimeVersionForLibrary:(id)arg1;
- (bool)lockGraphicsAfterCompletion;
- (unsigned int)nativePointerSize;
- (void)setInterposerVersion:(struct DYInterposeVersion { int x1; char *x2; }*)arg1;
- (bool)suspendAfterCompletion;
- (unsigned int)triggerFrame;
- (bool)triggerOnNextGraphicsCommand;

@end
