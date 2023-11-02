
@interface VCVideoRuleCollectionsCamera : VCVideoRuleCollections {
    bool  _decodeHighDef;
    bool  _encodeHighDef;
}

+ (id)sharedInstance;

- (id)bestVideoRuleForEncodingType:(unsigned char)arg1 aspectRatio:(double)arg2;
- (id)bestVideoRuleForEncodingType:(unsigned char)arg1 aspectRatio:(double)arg2 payload:(int)arg3;
- (struct _VCBitrateConfiguration { unsigned short x1; unsigned short x2; unsigned short x3; unsigned short x4; unsigned short x5; }*)bitrateConfiguration;
- (bool)getBestFrameWidth:(int*)arg1 frameHeight:(int*)arg2 frameRate:(float*)arg3;
- (bool)isHiDefCapable;
- (double)preferredAspectRatio;
- (void)resetEncodingRulesForCameraIsHD:(bool)arg1 isWVGA:(bool)arg2 is1080:(bool)arg3;
- (bool)setupH264CellularRules;
- (bool)useSoftFramerateSwitching;

@end
