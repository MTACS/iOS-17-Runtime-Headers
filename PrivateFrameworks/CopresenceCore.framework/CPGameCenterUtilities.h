
@interface CPGameCenterUtilities : NSObject {
    CPThreadSafeMutableSet * _supportedBundleIDs;
}

@property (nonatomic, readonly) CPThreadSafeMutableSet *supportedBundleIDs;

+ (id)shared;

- (void).cxx_destruct;
- (void)fetchGameCenterMultiplayerGameStatusForBundleID:(id)arg1 handler:(id /* block */)arg2;
- (void)fetchOnDeviceMultiplayerBundleIDsWithHandler:(id /* block */)arg1;
- (id)init;
- (id)supportedBundleIDs;
- (bool)supportsBundleID:(id)arg1;

@end
