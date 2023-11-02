
@interface PGSettlingEffectConfig : NSObject {
    unsigned long long  _defaultFRCRequestsAllowed;
    unsigned long long  _defaultL1FailuresAllowed;
    unsigned long long  _maxFRCRequestsAllowed;
    unsigned long long  _maxL1FailuresAllowed;
}

@property (nonatomic, readonly) unsigned long long defaultFRCRequestsAllowed;
@property (nonatomic, readonly) unsigned long long defaultL1FailuresAllowed;
@property (nonatomic, readonly) unsigned long long maxFRCRequestsAllowed;
@property (nonatomic, readonly) unsigned long long maxL1FailuresAllowed;

- (id)_requestWallpaperDownloadServerConfigWithPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;
- (unsigned long long)defaultFRCRequestsAllowed;
- (unsigned long long)defaultL1FailuresAllowed;
- (id)initWithPhotoLibrary:(id)arg1 loggingConnection:(id)arg2;
- (unsigned long long)maxFRCRequestsAllowed;
- (unsigned long long)maxL1FailuresAllowed;

@end
