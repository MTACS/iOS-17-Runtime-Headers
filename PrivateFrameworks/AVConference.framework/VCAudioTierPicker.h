
@interface VCAudioTierPicker : NSObject {
    BitrateLimits * _bitrateLimits;
    struct { 
        unsigned char mode; 
        struct __CFArray {} *supportedAudioPayloadConfigs; 
        struct __CFArray {} *supportedPacketsPerBundle; 
        struct __CFArray {} *supportedRedNumPayloads; 
        unsigned int headerSize; 
        bool usingCellular; 
        bool isUseCaseWatchContinuity; 
        unsigned int defaultMaxCap; 
        bool alwaysOnAudioRedundancyEnabled; 
        bool cellularAllowRedLowBitratesEnabled; 
        bool wifiAllowRedLowBitratesEnabled; 
        bool isIPv4; 
    }  _config;
    VCAudioTier * _defaultTier;
    VCAudioTier * _fallbackTier;
    NSMutableDictionary * _tierTablePlist;
    NSMutableDictionary * _tierTablesForRedNumPayloads;
}

@property struct { unsigned char x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; unsigned int x5; bool x6; bool x7; unsigned int x8; bool x9; bool x10; bool x11; bool x12; } config;
@property (readonly) VCAudioTier *defaultTier;

+ (id)allPossibleCombinations:(id)arg1 supportedPacketsPerBundle:(id)arg2 redNumPayloads:(unsigned int)arg3 headerSize:(unsigned int)arg4 tierPickerMode:(unsigned char)arg5 usingCellular:(bool)arg6 useCaseWatchContinuity:(bool)arg7;
+ (bool)arrayHasObject:(id)arg1 withPayloadType:(int)arg2;
+ (bool)isModeAudioOnly:(unsigned char)arg1;
+ (bool)isModeAudioVideo:(unsigned char)arg1;
+ (bool)isModePlistSupported:(unsigned char)arg1;
+ (bool)isModeV2:(unsigned char)arg1;
+ (bool)loadVCAudioTierFromTierTable:(id)arg1 bitrate:(unsigned int)arg2 redNumPayloads:(unsigned int)arg3 outEntry:(struct tagVCAudioTierPickerPlistEntry { int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg4;
+ (bool)loadVCAudioTierFromTierTable:(id)arg1 mode:(unsigned char)arg2 isIPv4:(bool)arg3 cellular:(bool)arg4 redNumPayloads:(unsigned int)arg5 tierBitrate:(unsigned int)arg6 outEntry:(struct tagVCAudioTierPickerPlistEntry { int x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg7;
+ (unsigned char)operatingModeToTierPickerMode:(int)arg1 preferPlistForTierTable:(bool)arg2;
+ (id)selectHighestQualityAudioTiers:(id)arg1 forBitrateLimits:(id)arg2 isHardLimit:(bool)arg3;
+ (bool)shouldFilterTierForPayloadConfig:(id)arg1 bitRate:(unsigned int)arg2 packetsPerBundle:(unsigned int)arg3 mode:(unsigned char)arg4 redNumPayloads:(unsigned int)arg5 cellular:(bool)arg6;
+ (int)tierPickerModeToAVConferenceOperatingMode:(unsigned char)arg1;
+ (bool)usePlistForAudioTierTableFromMode:(unsigned char)arg1;
+ (id)valueForNetworkBitrate:(id)arg1 networkBitrate:(unsigned int)arg2;

- (id)allAudioTiers;
- (id)chooseMultiwayAudioTierForRedPayload:(unsigned long long)arg1;
- (struct { unsigned char x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; unsigned int x5; bool x6; bool x7; unsigned int x8; bool x9; bool x10; bool x11; bool x12; })config;
- (id)configToString:(struct { unsigned char x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; unsigned int x5; bool x6; bool x7; unsigned int x8; bool x9; bool x10; bool x11; bool x12; })arg1;
- (void)dealloc;
- (id)defaultTier;
- (id)generateAudioTiersDictFromPlistForBitrateLimits:(id)arg1 tierPickerConfig:(struct { unsigned char x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; unsigned int x5; bool x6; bool x7; unsigned int x8; bool x9; bool x10; bool x11; bool x12; })arg2 redNumPayloads:(unsigned int)arg3;
- (id)initWithConfig:(struct { unsigned char x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; unsigned int x5; bool x6; bool x7; unsigned int x8; bool x9; bool x10; bool x11; bool x12; })arg1;
- (id)loadAudioTiersFromPlist:(id)arg1;
- (void)logTierPickerConfig:(struct { unsigned char x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; unsigned int x5; bool x6; bool x7; unsigned int x8; bool x9; bool x10; bool x11; bool x12; })arg1;
- (void)printCreatedAudioTiers:(id)arg1;
- (bool)reconfigureTierPicker:(struct { unsigned char x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; unsigned int x5; bool x6; bool x7; unsigned int x8; bool x9; bool x10; bool x11; bool x12; })arg1;
- (void)setConfig:(struct { unsigned char x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; unsigned int x5; bool x6; bool x7; unsigned int x8; bool x9; bool x10; bool x11; bool x12; })arg1;
- (void)setupAlwaysOnRedTiersForSupportedRed:(id)arg1 usingCellular:(bool)arg2;
- (bool)setupTierPickerForConfig:(struct { unsigned char x1; struct __CFArray {} *x2; struct __CFArray {} *x3; struct __CFArray {} *x4; unsigned int x5; bool x6; bool x7; unsigned int x8; bool x9; bool x10; bool x11; bool x12; })arg1;
- (id)tierForAudioBitrate:(unsigned long long)arg1 withRedNumPayloads:(unsigned long long)arg2;
- (id)tierForNetworkBitrate:(unsigned long long)arg1 withLegacyDuplication:(int)arg2;
- (id)tierForNetworkBitrate:(unsigned long long)arg1 withRedNumPayloads:(unsigned long long)arg2;

@end
