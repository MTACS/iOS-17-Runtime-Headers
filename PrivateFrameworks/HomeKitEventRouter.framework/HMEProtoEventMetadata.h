
@interface HMEProtoEventMetadata : PBCodable <NSCopying> {
    unsigned int  _cachePolicy;
    unsigned int  _combinePolicy;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int cachePolicy : 1; 
        unsigned int combinePolicy : 1; 
        unsigned int qos : 1; 
    }  _has;
    unsigned int  _qos;
    NSString * _source;
    double  _timestamp;
}

@property (nonatomic) unsigned int cachePolicy;
@property (nonatomic) unsigned int combinePolicy;
@property (nonatomic) bool hasCachePolicy;
@property (nonatomic) bool hasCombinePolicy;
@property (nonatomic) bool hasQos;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int qos;
@property (nonatomic, retain) NSString *source;
@property (nonatomic) double timestamp;

- (void).cxx_destruct;
- (unsigned int)cachePolicy;
- (unsigned int)combinePolicy;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCachePolicy;
- (bool)hasCombinePolicy;
- (bool)hasQos;
- (bool)hasSource;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)qos;
- (bool)readFrom:(id)arg1;
- (void)setCachePolicy:(unsigned int)arg1;
- (void)setCombinePolicy:(unsigned int)arg1;
- (void)setHasCachePolicy:(bool)arg1;
- (void)setHasCombinePolicy:(bool)arg1;
- (void)setHasQos:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setQos:(unsigned int)arg1;
- (void)setSource:(id)arg1;
- (void)setTimestamp:(double)arg1;
- (id)source;
- (double)timestamp;
- (void)writeTo:(id)arg1;

@end
