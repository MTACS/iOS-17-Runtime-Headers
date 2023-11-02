
@interface MXAcousticFeature : PBCodable <NSCopying> {
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _acousticFeaturePerFrames;
    float  _frameDuration;
    struct { 
        unsigned int frameDuration : 1; 
    }  _has;
}

@property (nonatomic, readonly) float*acousticFeaturePerFrames;
@property (nonatomic, readonly) unsigned long long acousticFeaturePerFramesCount;
@property (nonatomic) float frameDuration;
@property (nonatomic) bool hasFrameDuration;

- (float)acousticFeaturePerFrameAtIndex:(unsigned long long)arg1;
- (float*)acousticFeaturePerFrames;
- (unsigned long long)acousticFeaturePerFramesCount;
- (void)addAcousticFeaturePerFrame:(float)arg1;
- (void)clearAcousticFeaturePerFrames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (float)frameDuration;
- (bool)hasFrameDuration;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAcousticFeaturePerFrames:(float*)arg1 count:(unsigned long long)arg2;
- (void)setFrameDuration:(float)arg1;
- (void)setHasFrameDuration:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
