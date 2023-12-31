
@interface NTKCompanionFaceCollectionsManager : NSObject {
    NSUUID * _activeDeviceUUID;
    NSMutableDictionary * _faceCollectionsForCollectionIdentifier;
    int  _pairedDeviceVersionChangeNotificationToken;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)sharedFaceCollectionForDevice:(id)arg1 forCollectionIdentifier:(id)arg2;
- (id)sharedLibraryFaceCollectionsForAllDevices;

@end
