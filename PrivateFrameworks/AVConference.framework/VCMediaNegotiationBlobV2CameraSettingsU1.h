
@interface VCMediaNegotiationBlobV2CameraSettingsU1 : PBCodable <NSCopying> {
    struct { 
        unsigned int landscapeAspectRatioX : 1; 
        unsigned int landscapeAspectRatioY : 1; 
        unsigned int mismatchedDisplayAspectRatioX : 1; 
        unsigned int mismatchedDisplayAspectRatioY : 1; 
        unsigned int portraitAspectRatioX : 1; 
        unsigned int portraitAspectRatioY : 1; 
        unsigned int rtpSSRC : 1; 
    }  _has;
    unsigned int  _landscapeAspectRatioX;
    unsigned int  _landscapeAspectRatioY;
    unsigned int  _mismatchedDisplayAspectRatioX;
    unsigned int  _mismatchedDisplayAspectRatioY;
    NSMutableArray * _payloads;
    unsigned int  _portraitAspectRatioX;
    unsigned int  _portraitAspectRatioY;
    unsigned int  _rtpSSRC;
}

@property (nonatomic) bool hasLandscapeAspectRatioX;
@property (nonatomic) bool hasLandscapeAspectRatioY;
@property (nonatomic) bool hasMismatchedDisplayAspectRatioX;
@property (nonatomic) bool hasMismatchedDisplayAspectRatioY;
@property (nonatomic) bool hasPortraitAspectRatioX;
@property (nonatomic) bool hasPortraitAspectRatioY;
@property (nonatomic) bool hasRtpSSRC;
@property (nonatomic) unsigned int landscapeAspectRatioX;
@property (nonatomic) unsigned int landscapeAspectRatioY;
@property (nonatomic) unsigned int mismatchedDisplayAspectRatioX;
@property (nonatomic) unsigned int mismatchedDisplayAspectRatioY;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } orientationMismatchDisplayRatio;
@property (nonatomic, retain) NSMutableArray *payloads;
@property (nonatomic) unsigned int portraitAspectRatioX;
@property (nonatomic) unsigned int portraitAspectRatioY;
@property (nonatomic) unsigned int rtpSSRC;
@property (nonatomic, readonly) VCVideoRuleCollections *videoRuleCollections;

+ (Class)payloadsType;

- (void)addPayloads:(id)arg1;
- (bool)addVideoRules:(id)arg1 encodingType:(unsigned char)arg2 payload:(int)arg3 videoRuleCollections:(id)arg4;
- (void)aspectRatioPortrait:(struct CGSize { double x1; double x2; }*)arg1 aspectRatioLandscape:(struct CGSize { double x1; double x2; }*)arg2 orientationMismatchAspectRatioLandscape:(struct CGSize { double x1; double x2; }*)arg3 orientationMismatchAspectRatioPortrait:(struct CGSize { double x1; double x2; }*)arg4 screenSize:(struct CGSize { double x1; double x2; })arg5;
- (void)clearPayloads;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLandscapeAspectRatioX;
- (bool)hasLandscapeAspectRatioY;
- (bool)hasMismatchedDisplayAspectRatioX;
- (bool)hasMismatchedDisplayAspectRatioY;
- (bool)hasPortraitAspectRatioX;
- (bool)hasPortraitAspectRatioY;
- (bool)hasRtpSSRC;
- (unsigned long long)hash;
- (id)initWithSSRC:(unsigned int)arg1 videoRuleCollections:(id)arg2 screenSize:(struct CGSize { double x1; double x2; })arg3 aspectRatioPortrait:(struct CGSize { double x1; double x2; })arg4 aspectRatioLandscape:(struct CGSize { double x1; double x2; })arg5 orientationMismatchAspectRatioLandscape:(struct CGSize { double x1; double x2; })arg6 featureListStrings:(id)arg7;
- (bool)isEqual:(id)arg1;
- (unsigned int)landscapeAspectRatioX;
- (unsigned int)landscapeAspectRatioY;
- (void)mergeFrom:(id)arg1;
- (unsigned int)mismatchedDisplayAspectRatioX;
- (unsigned int)mismatchedDisplayAspectRatioY;
- (struct CGSize { double x1; double x2; })orientationMismatchDisplayRatio;
- (id)payloads;
- (id)payloadsAtIndex:(unsigned long long)arg1;
- (unsigned long long)payloadsCount;
- (unsigned int)portraitAspectRatioX;
- (unsigned int)portraitAspectRatioY;
- (void)printWithLogFile:(void*)arg1 prefix:(id)arg2 screenSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)readFrom:(id)arg1;
- (unsigned int)rtpSSRC;
- (id)rulesForEncodeType:(unsigned char)arg1 paylaod:(int)arg2 videoRuleCollection:(id)arg3;
- (void)setHasLandscapeAspectRatioX:(bool)arg1;
- (void)setHasLandscapeAspectRatioY:(bool)arg1;
- (void)setHasMismatchedDisplayAspectRatioX:(bool)arg1;
- (void)setHasMismatchedDisplayAspectRatioY:(bool)arg1;
- (void)setHasPortraitAspectRatioX:(bool)arg1;
- (void)setHasPortraitAspectRatioY:(bool)arg1;
- (void)setHasRtpSSRC:(bool)arg1;
- (void)setLandscapeAspectRatioX:(unsigned int)arg1;
- (void)setLandscapeAspectRatioY:(unsigned int)arg1;
- (void)setMismatchedDisplayAspectRatioX:(unsigned int)arg1;
- (void)setMismatchedDisplayAspectRatioY:(unsigned int)arg1;
- (void)setPayloads:(id)arg1;
- (void)setPortraitAspectRatioX:(unsigned int)arg1;
- (void)setPortraitAspectRatioY:(unsigned int)arg1;
- (void)setRtpSSRC:(unsigned int)arg1;
- (bool)setupVideoRuleCollection:(id)arg1 featureListStrings:(id)arg2;
- (id)videoRuleCollections;
- (void)writeTo:(id)arg1;

@end
