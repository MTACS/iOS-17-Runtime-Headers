
@interface PKProvisioningAssetManager : NSObject

+ (id)sharedInstance;

- (id)_assetNameWithScreenScalingSuffix:(id)arg1;
- (id)_carPairingImageFromBundle:(id)arg1 darkMode:(bool)arg2;
- (void)_defaultCarPairingImage:(unsigned long long)arg1 darkMode:(bool)arg2 completion:(id /* block */)arg3;
- (void)_defaultCardArtwork:(id /* block */)arg1;
- (void)carPairingImageForRadioTechnology:(unsigned long long)arg1 templateIdentifier:(id)arg2 darkMode:(bool)arg3 completion:(id /* block */)arg4;
- (void)cardArtworkForTemplateIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)provisioningString:(id)arg1 templateIdentifier:(id)arg2;

@end
