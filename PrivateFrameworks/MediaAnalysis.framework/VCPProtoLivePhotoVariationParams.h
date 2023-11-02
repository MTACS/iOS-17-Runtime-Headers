
@interface VCPProtoLivePhotoVariationParams : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    int  _errorCode;
    struct { 
        unsigned int loopFadeLen : 1; 
        unsigned int loopPeriod : 1; 
        unsigned int loopStart : 1; 
    }  _has;
    int  _loopFadeLen;
    int  _loopPeriod;
    int  _loopStart;
}

@property (nonatomic) int errorCode;
@property (nonatomic) bool hasLoopFadeLen;
@property (nonatomic) bool hasLoopPeriod;
@property (nonatomic) bool hasLoopStart;
@property (nonatomic) int loopFadeLen;
@property (nonatomic) int loopPeriod;
@property (nonatomic) int loopStart;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (id)exportToLegacyDictionary;
- (bool)hasLoopFadeLen;
- (bool)hasLoopPeriod;
- (bool)hasLoopStart;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)loopFadeLen;
- (int)loopPeriod;
- (int)loopStart;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasLoopFadeLen:(bool)arg1;
- (void)setHasLoopPeriod:(bool)arg1;
- (void)setHasLoopStart:(bool)arg1;
- (void)setLoopFadeLen:(int)arg1;
- (void)setLoopPeriod:(int)arg1;
- (void)setLoopStart:(int)arg1;
- (void)writeTo:(id)arg1;

@end
