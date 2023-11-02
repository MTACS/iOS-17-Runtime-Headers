
@interface VCBitrateArbiter : NSObject {
    unsigned int  _maxAllowedAudioOnlyBitrate2G;
    unsigned int  _maxAllowedAudioOnlyBitrate3G;
    unsigned int  _maxAllowedAudioOnlyBitrateLTE;
    unsigned int  _maxAllowedAudioOnlyBitrateWifi;
    unsigned int  _maxAllowedBitrate;
    unsigned int  _maxAllowedBitrate2G;
    unsigned int  _maxAllowedBitrate3G;
    unsigned int  _maxAllowedBitrateHighRat;
    unsigned int  _maxAllowedBitrateIPadCompanionUSB;
    unsigned int  _maxAllowedBitrateLTE;
    unsigned int  _maxAllowedBitrateP2P;
    unsigned int  _maxAllowedBitrateTCPRelay;
    unsigned int  _maxAllowedBitrateUSB;
    unsigned int  _maxAllowedBitrateWifi;
    unsigned int  _maxAllowedScreenShareBitrate2G;
    unsigned int  _maxAllowedScreenShareBitrate3G;
    unsigned int  _maxAllowedScreenShareBitrateLTE;
    unsigned int  _maxAllowedScreenShareBitrateWifi;
    unsigned int  _maxiBitrateIPadCompanionP2P;
    NSMutableArray * supportedBitrateRules;
}

@property (readonly) unsigned int maxAllowedBitrate;
@property (readonly) unsigned int maxAllowedBitrate2G;
@property (readonly) unsigned int maxAllowedBitrate3G;
@property (readonly) unsigned int maxAllowedBitrateHighRat;
@property (readonly) unsigned int maxAllowedBitrateLTE;
@property (readonly) unsigned int maxAllowedBitrateP2P;
@property (readonly) unsigned int maxAllowedBitrateTCPRelay;
@property (readonly) unsigned int maxAllowedBitrateUSB;
@property (readonly) unsigned int maxAllowedBitrateWifi;

+ (void)updateMaxAllowedBitratePerConnection:(unsigned int*)arg1 connectionType:(int)arg2 negotiatedSettings:(id)arg3;

- (void)addRuleForBitrate:(unsigned int)arg1 connectionType:(int)arg2 limitingRule:(id)arg3;
- (void)createSupportedBitrateRuleSets;
- (void)dealloc;
- (id)initWithDeviceRole:(int)arg1 callLogFile:(void*)arg2;
- (unsigned int)maxAllowedAudioOnlyBitrateForConnection:(int)arg1;
- (unsigned int)maxAllowedBitrate;
- (unsigned int)maxAllowedBitrate2G;
- (unsigned int)maxAllowedBitrate3G;
- (unsigned int)maxAllowedBitrateForConnectionType:(int)arg1;
- (unsigned int)maxAllowedBitrateForConnectionType:(int)arg1 operatingMode:(int)arg2;
- (unsigned int)maxAllowedBitrateForVCConnection:(id)arg1 forLocalInterface:(bool)arg2;
- (unsigned int)maxAllowedBitrateForVCConnection:(id)arg1 forLocalInterface:(bool)arg2 encodeRule:(id)arg3;
- (unsigned int)maxAllowedBitrateForVCConnection:(id)arg1 forLocalInterface:(bool)arg2 operatingMode:(int)arg3 encodeRule:(id)arg4;
- (unsigned int)maxAllowedBitrateHighRat;
- (unsigned int)maxAllowedBitrateLTE;
- (unsigned int)maxAllowedBitrateP2P;
- (id)maxAllowedBitrateRuleForConnection:(int)arg1;
- (unsigned int)maxAllowedBitrateTCPRelay;
- (unsigned int)maxAllowedBitrateUSB;
- (unsigned int)maxAllowedBitrateWifi;
- (unsigned int)maxAllowedCellularBitrate;
- (unsigned int)maxAllowedScreenShareBitrateForConnection:(int)arg1;
- (unsigned int)maxAllowedScreenShareCellularBitrate;
- (void)readCarrierBundleValues;
- (void)readHardwareValues;
- (void)readStoreBagValues:(void*)arg1;
- (int)storeBagBitrateForKey:(id)arg1;
- (void)updateMaxAllowedBitrate:(unsigned int*)arg1 key:(struct __CFString { }*)arg2 type:(id)arg3 isAudio:(bool)arg4 carrierBundleBitrates:(struct __CFDictionary { }*)arg5;
- (void)updateNegotiatedSettings:(id)arg1;

@end
