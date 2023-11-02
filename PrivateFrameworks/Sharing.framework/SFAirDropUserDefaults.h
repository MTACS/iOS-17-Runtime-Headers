
@interface SFAirDropUserDefaults : NSObject {
    void _a2aRangingAssumeClose;
    void _a2aRangingAssumeFar;
    void _airDropMoveToAppEnabled;
    void _airDropPrivateContactDiscoveryEnabled;
    void _airDropSystemLevelProgressEnabled;
    void _alwaysAutoAccept;
    void _alwaysExchangeContacts;
    void _askToAirDropEnabled;
    void _boopInteractionTypeOverride;
    void _boopToActionEnabled;
    void _boopToAirDropEnabled;
    void _browseAllInterfaces;
    void _contactShareAfterAirDropEnabled;
    void _disableAirDrop;
    void _disableAirDropBLEAdvertising;
    void _disableAutoAccept;
    void _disableExtractMediaFromBundles;
    void _disableTLS;
    void _disableTransformingPhotosAssetBundlesToFolders;
    void _enabledDemoMode;
    void _finalALPN;
    void _nearFieldControllerEnabled;
    void _nearFieldSharingEnabled;
    void _overrideReceivedFilesPathiOS;
    void _quicIdleTimeout;
    void _registerAllInterfaces;
    void _sensitiveContentOverride;
    void _sensitivePreviewOverride;
    void _shockwaveEffectEnabled;
    void _shockwaveEffectVariant;
    void _shockwaveHapticsPlayerStartsEarly;
    void _showTransferIdentifierUI;
    void _walkAwayEnabled;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool objcAskToAirDropEnabled;
@property (nonatomic, readonly) bool objcMoveToAppEnabled;
@property (nonatomic) bool objcNearFieldSharingEnabled;
@property (nonatomic, readonly) bool objcPrivateContactDiscoveryEnabled;
@property (nonatomic, readonly) bool objcSystemLevelProgressEnabled;

+ (id)shared;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (bool)objcAskToAirDropEnabled;
- (bool)objcMoveToAppEnabled;
- (bool)objcNearFieldSharingEnabled;
- (bool)objcPrivateContactDiscoveryEnabled;
- (bool)objcSystemLevelProgressEnabled;
- (void)setObjcNearFieldSharingEnabled:(bool)arg1;

@end
