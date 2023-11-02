
@interface VCPProtoLivePhotoFrameInstruction : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    long long  _epoch;
    int  _flags;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _homographyParams;
    int  _timeScale;
    long long  _timeValue;
}

@property (nonatomic) long long epoch;
@property (nonatomic) int flags;
@property (nonatomic, readonly) float*homographyParams;
@property (nonatomic, readonly) unsigned long long homographyParamsCount;
@property (nonatomic) int timeScale;
@property (nonatomic) long long timeValue;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void)addHomographyParam:(float)arg1;
- (void)clearHomographyParams;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)epoch;
- (id)exportToLegacyDictionary;
- (int)flags;
- (unsigned long long)hash;
- (float)homographyParamAtIndex:(unsigned long long)arg1;
- (float*)homographyParams;
- (unsigned long long)homographyParamsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEpoch:(long long)arg1;
- (void)setFlags:(int)arg1;
- (void)setHomographyParams:(float*)arg1 count:(unsigned long long)arg2;
- (void)setTimeScale:(int)arg1;
- (void)setTimeValue:(long long)arg1;
- (int)timeScale;
- (long long)timeValue;
- (void)writeTo:(id)arg1;

@end
