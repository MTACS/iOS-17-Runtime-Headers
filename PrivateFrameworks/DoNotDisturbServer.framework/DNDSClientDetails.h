
@interface DNDSClientDetails : NSObject <NSCopying> {
    NSString * _clientIdentifier;
    bool  _forcesAssertionStatusUpdate;
    bool  _iOS14SyncSuppressedClient;
    NSArray * _identifiers;
    bool  _persistentAssertionClient;
    bool  _resolutionContextAssumingDeviceUILocked;
    bool  _syncSuppressedClient;
    bool  _userInteractionClient;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (getter=forcesAssertionStatusUpdate, nonatomic, readonly) bool forcesAssertionStatusUpdate;
@property (getter=isIOS14SyncSuppressedClient, nonatomic, readonly) bool iOS14SyncSuppressedClient;
@property (nonatomic, readonly, copy) NSArray *identifiers;
@property (getter=isPersistentAssertionClient, nonatomic, readonly) bool persistentAssertionClient;
@property (getter=isResolutionContextAssumingDeviceUILocked, nonatomic, readonly) bool resolutionContextAssumingDeviceUILocked;
@property (getter=isSyncSuppressedClient, nonatomic, readonly) bool syncSuppressedClient;
@property (getter=isUserInteractionClient, nonatomic, readonly) bool userInteractionClient;

+ (id)_detailsForClientIdentifier:(id)arg1 bundleInfoDictionary:(id)arg2;
+ (id)detailsForBundleAtURL:(id)arg1;
+ (id)detailsForClientIdentifier:(id)arg1 applicationBundleURL:(id)arg2;

- (void).cxx_destruct;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)forcesAssertionStatusUpdate;
- (id)identifiers;
- (id)initWithClientIdentifier:(id)arg1 identifiers:(id)arg2 resolutionContextAssumingDeviceUILocked:(bool)arg3 userInteractionClient:(bool)arg4 persistentAssertionClient:(bool)arg5 syncSuppressedClient:(bool)arg6 iOS14SyncSuppressedClient:(bool)arg7 forcesAssertionStatusUpdate:(bool)arg8;
- (bool)isIOS14SyncSuppressedClient;
- (bool)isPersistentAssertionClient;
- (bool)isResolutionContextAssumingDeviceUILocked;
- (bool)isSyncSuppressedClient;
- (bool)isUserInteractionClient;

@end
