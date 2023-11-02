
@interface VCSessionBitrateArbiter : NSObject {
    NSDictionary * _currentSettings;
    unsigned int  _maxBitrate2GDownlink;
    unsigned int  _maxBitrate2GUplink;
    unsigned int  _maxBitrate3GDownlink;
    unsigned int  _maxBitrate3GUplink;
    unsigned int  _maxBitrateExpensiveDownlink;
    unsigned int  _maxBitrateExpensiveUplink;
    unsigned int  _maxBitrateNonExpensiveDownlink;
    unsigned int  _maxBitrateNonExpensiveUplink;
    unsigned int  _maxBitrateWiFiDownlink;
    unsigned int  _maxBitrateWiFiUplink;
}

@property (readonly) unsigned int maxBitrate2GDownlink;
@property (readonly) unsigned int maxBitrate2GUplink;
@property (readonly) unsigned int maxBitrate3GDownlink;
@property (readonly) unsigned int maxBitrate3GUplink;
@property (readonly) unsigned int maxBitrateExpensiveDownlink;
@property (readonly) unsigned int maxBitrateExpensiveUplink;
@property (readonly) unsigned int maxBitrateNonExpensiveDownlink;
@property (readonly) unsigned int maxBitrateNonExpensiveUplink;
@property (readonly) unsigned int maxBitrateWiFiDownlink;
@property (readonly) unsigned int maxBitrateWiFiUplink;

- (unsigned int)bitrateForStoreBagKey:(id)arg1 connectionType:(int)arg2 currentBitrate:(unsigned int)arg3 isExpensive:(bool)arg4;
- (void)dealloc;
- (id)init;
- (unsigned int)maxBitrate2GDownlink;
- (unsigned int)maxBitrate2GUplink;
- (unsigned int)maxBitrate3GDownlink;
- (unsigned int)maxBitrate3GUplink;
- (unsigned int)maxBitrateExpensiveDownlink;
- (unsigned int)maxBitrateExpensiveUplink;
- (unsigned int)maxBitrateNonExpensiveDownlink;
- (unsigned int)maxBitrateNonExpensiveUplink;
- (unsigned int)maxBitrateWiFiDownlink;
- (unsigned int)maxBitrateWiFiUplink;
- (bool)rangeCheck:(unsigned int)arg1;
- (void)readHardwareValues;
- (void)readStoreBagValues;

@end
