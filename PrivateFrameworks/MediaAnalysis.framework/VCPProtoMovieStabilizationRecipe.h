
@interface VCPProtoMovieStabilizationRecipe : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    float  _cropRectHeight;
    float  _cropRectWidth;
    float  _cropRectX;
    float  _cropRectY;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _homographyParams;
    float  _inputBoundsHeight;
    float  _inputBoundsWidth;
    float  _inputBoundsX;
    float  _inputBoundsY;
    float  _sourceSizeHeight;
    float  _sourceSizeWidth;
    int  _timeScale;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _timeValues;
}

@property (nonatomic) float cropRectHeight;
@property (nonatomic) float cropRectWidth;
@property (nonatomic) float cropRectX;
@property (nonatomic) float cropRectY;
@property (nonatomic, readonly) float*homographyParams;
@property (nonatomic, readonly) unsigned long long homographyParamsCount;
@property (nonatomic) float inputBoundsHeight;
@property (nonatomic) float inputBoundsWidth;
@property (nonatomic) float inputBoundsX;
@property (nonatomic) float inputBoundsY;
@property (nonatomic) float sourceSizeHeight;
@property (nonatomic) float sourceSizeWidth;
@property (nonatomic) int timeScale;
@property (nonatomic, readonly) long long*timeValues;
@property (nonatomic, readonly) unsigned long long timeValuesCount;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void)addHomographyParams:(float)arg1;
- (void)addTimeValue:(long long)arg1;
- (void)clearHomographyParams;
- (void)clearTimeValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)cropRectHeight;
- (float)cropRectWidth;
- (float)cropRectX;
- (float)cropRectY;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (unsigned long long)hash;
- (float*)homographyParams;
- (float)homographyParamsAtIndex:(unsigned long long)arg1;
- (unsigned long long)homographyParamsCount;
- (float)inputBoundsHeight;
- (float)inputBoundsWidth;
- (float)inputBoundsX;
- (float)inputBoundsY;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCropRectHeight:(float)arg1;
- (void)setCropRectWidth:(float)arg1;
- (void)setCropRectX:(float)arg1;
- (void)setCropRectY:(float)arg1;
- (void)setHomographyParams:(float*)arg1 count:(unsigned long long)arg2;
- (void)setInputBoundsHeight:(float)arg1;
- (void)setInputBoundsWidth:(float)arg1;
- (void)setInputBoundsX:(float)arg1;
- (void)setInputBoundsY:(float)arg1;
- (void)setSourceSizeHeight:(float)arg1;
- (void)setSourceSizeWidth:(float)arg1;
- (void)setTimeScale:(int)arg1;
- (void)setTimeValues:(long long*)arg1 count:(unsigned long long)arg2;
- (float)sourceSizeHeight;
- (float)sourceSizeWidth;
- (int)timeScale;
- (long long)timeValueAtIndex:(unsigned long long)arg1;
- (long long*)timeValues;
- (unsigned long long)timeValuesCount;
- (void)writeTo:(id)arg1;

@end
