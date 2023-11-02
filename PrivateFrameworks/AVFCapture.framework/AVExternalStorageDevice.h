
@interface AVExternalStorageDevice : NSObject {
    struct __CFURL { } * _baseURL;
    struct __CFString { } * _displayName;
    struct OpaqueFigExternalStorageDeviceManager { } * _externalStorageDeviceManager;
    struct __CFString { } * _figExternalStorageDeviceUUID;
    struct __CFArray { } * _nextAvailableURLArray;
    struct __CFString { } * _uniqueIdentifier;
}

@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) long long freeSize;
@property (getter=isNotRecommendedForCaptureUse, nonatomic, readonly) bool notRecommendedForCaptureUse;
@property (nonatomic, readonly) long long totalSize;
@property (nonatomic, readonly) NSUUID *uuid;

+ (long long)authorizationStatus;
+ (void)requestAccessWithCompletionHandler:(id /* block */)arg1;

- (id)_uniqueIdentifier;
- (id)baseURL;
- (void)dealloc;
- (id)displayName;
- (id)figExternalStorageDeviceUUID;
- (long long)freeSize;
- (id)initWithExternalStorageDeviceManager:(struct OpaqueFigExternalStorageDeviceManager { }*)arg1 figExternalStorageDeviceUUID:(struct __CFString { }*)arg2;
- (bool)isConnected;
- (bool)isNotRecommendedForCaptureUse;
- (id)nextAvailableURLsWithPathExtensions:(id)arg1 error:(id*)arg2;
- (long long)totalSize;
- (void)updateExternalStorageDeviceManager:(struct OpaqueFigExternalStorageDeviceManager { }*)arg1 andFigExternalStorageDeviceUUID:(id)arg2;
- (id)uuid;

@end
