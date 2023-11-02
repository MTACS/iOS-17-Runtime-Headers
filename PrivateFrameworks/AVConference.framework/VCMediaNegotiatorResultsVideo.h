
@interface VCMediaNegotiatorResultsVideo : NSObject {
    unsigned int  _customVideoHeight;
    unsigned int  _customVideoWidth;
    NSMutableDictionary * _featureStrings;
    bool  _fecEnabled;
    NSMutableSet * _hdrModesNegotiated;
    bool  _isRTCPFBEnabled;
    bool  _isSupported;
    bool  _ltrpEnabled;
    NSMutableDictionary * _parameterSets;
    NSMutableSet * _pixelFormats;
    unsigned int  _remoteSSRC;
    bool  _rtxEnabled;
    unsigned int  _tilesPerFrame;
    VCVideoRuleCollections * _videoRuleCollections;
}

@property (nonatomic) unsigned int customVideoHeight;
@property (nonatomic) unsigned int customVideoWidth;
@property (nonatomic, retain) NSDictionary *featureStrings;
@property (nonatomic) bool fecEnabled;
@property (nonatomic, readonly) NSSet *hdrModesNegotiated;
@property (nonatomic) bool isRTCPFBEnabled;
@property (nonatomic) bool isSupported;
@property (nonatomic) bool ltrpEnabled;
@property (nonatomic, retain) NSDictionary *parameterSets;
@property (nonatomic, readonly) NSSet *pixelFormats;
@property (nonatomic) unsigned int remoteSSRC;
@property (nonatomic) bool rtxEnabled;
@property (nonatomic) unsigned int tilesPerFrame;
@property (nonatomic, readonly) VCVideoRuleCollections *videoRuleCollections;

- (void)addFeatureString:(id)arg1 payload:(int)arg2;
- (void)addNegotiatedHDRMode:(id)arg1;
- (void)addParameterSet:(id)arg1 payload:(int)arg2;
- (void)addPixelFormatSet:(id)arg1;
- (void)addVideoRules:(id)arg1 transportType:(unsigned char)arg2 payload:(int)arg3 encodingType:(unsigned char)arg4;
- (unsigned int)customVideoHeight;
- (unsigned int)customVideoWidth;
- (void)dealloc;
- (id)featureStrings;
- (bool)fecEnabled;
- (id)hdrModesNegotiated;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isRTCPFBEnabled;
- (bool)isSupported;
- (bool)ltrpEnabled;
- (id)parameterSets;
- (id)pixelFormats;
- (unsigned int)remoteSSRC;
- (bool)rtxEnabled;
- (void)setCustomVideoHeight:(unsigned int)arg1;
- (void)setCustomVideoWidth:(unsigned int)arg1;
- (void)setFeatureStrings:(id)arg1;
- (void)setFecEnabled:(bool)arg1;
- (void)setIsRTCPFBEnabled:(bool)arg1;
- (void)setIsSupported:(bool)arg1;
- (void)setLtrpEnabled:(bool)arg1;
- (void)setParameterSets:(id)arg1;
- (void)setRemoteSSRC:(unsigned int)arg1;
- (void)setRtxEnabled:(bool)arg1;
- (void)setTilesPerFrame:(unsigned int)arg1;
- (unsigned int)tilesPerFrame;
- (id)videoRuleCollections;

@end
