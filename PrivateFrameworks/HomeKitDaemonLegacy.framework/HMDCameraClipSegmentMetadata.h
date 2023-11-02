
@interface HMDCameraClipSegmentMetadata : PBCodable <NSCopying> {
    unsigned long long  _byteLength;
    unsigned long long  _byteOffset;
    double  _duration;
    struct { 
        unsigned int byteLength : 1; 
        unsigned int byteOffset : 1; 
        unsigned int duration : 1; 
        unsigned int timeOffset : 1; 
        unsigned int height : 1; 
        unsigned int type : 1; 
        unsigned int width : 1; 
    }  _has;
    unsigned int  _height;
    double  _timeOffset;
    int  _type;
    unsigned int  _width;
}

@property (nonatomic) unsigned long long byteLength;
@property (nonatomic) unsigned long long byteOffset;
@property (nonatomic) double duration;
@property (nonatomic) bool hasByteLength;
@property (nonatomic) bool hasByteOffset;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasHeight;
@property (nonatomic) bool hasTimeOffset;
@property (nonatomic) bool hasType;
@property (nonatomic) bool hasWidth;
@property (nonatomic) unsigned int height;
@property (nonatomic) double timeOffset;
@property (nonatomic) int type;
@property (nonatomic) unsigned int width;

- (int)StringAsType:(id)arg1;
- (unsigned long long)byteLength;
- (unsigned long long)byteOffset;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (bool)hasByteLength;
- (bool)hasByteOffset;
- (bool)hasDuration;
- (bool)hasHeight;
- (bool)hasTimeOffset;
- (bool)hasType;
- (bool)hasWidth;
- (unsigned long long)hash;
- (unsigned int)height;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setByteLength:(unsigned long long)arg1;
- (void)setByteOffset:(unsigned long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasByteLength:(bool)arg1;
- (void)setHasByteOffset:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasHeight:(bool)arg1;
- (void)setHasTimeOffset:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setHeight:(unsigned int)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setType:(int)arg1;
- (void)setWidth:(unsigned int)arg1;
- (double)timeOffset;
- (int)type;
- (id)typeAsString:(int)arg1;
- (unsigned int)width;
- (void)writeTo:(id)arg1;

@end
