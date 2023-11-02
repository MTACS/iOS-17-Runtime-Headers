
@interface BMPBSiriMemoryReferenceResolutionEntityValue : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    double  _timestamp;
    NSData * _valueData;
}

@property (nonatomic) bool hasTimestamp;
@property (nonatomic, readonly) bool hasValueData;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) NSData *valueData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimestamp;
- (bool)hasValueData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setValueData:(id)arg1;
- (double)timestamp;
- (id)valueData;
- (void)writeTo:(id)arg1;

@end
