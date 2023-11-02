
@interface AWDWiFiMetricsManagerLeakyAPStats : PBCodable <NSCopying> {
    struct { 
        unsigned int hashCode : 1; 
        unsigned int timestamp : 1; 
        unsigned int version : 1; 
        unsigned int leakyApDecision : 1; 
    }  _has;
    unsigned long long  _hashCode;
    unsigned int  _leakyApDecision;
    NSData * _leakyApStats;
    NSData * _oui;
    unsigned long long  _timestamp;
    unsigned long long  _version;
}

@property (nonatomic) bool hasHashCode;
@property (nonatomic) bool hasLeakyApDecision;
@property (nonatomic, readonly) bool hasLeakyApStats;
@property (nonatomic, readonly) bool hasOui;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasVersion;
@property (nonatomic) unsigned long long hashCode;
@property (nonatomic) unsigned int leakyApDecision;
@property (nonatomic, retain) NSData *leakyApStats;
@property (nonatomic, retain) NSData *oui;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long version;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHashCode;
- (bool)hasLeakyApDecision;
- (bool)hasLeakyApStats;
- (bool)hasOui;
- (bool)hasTimestamp;
- (bool)hasVersion;
- (unsigned long long)hash;
- (unsigned long long)hashCode;
- (bool)isEqual:(id)arg1;
- (unsigned int)leakyApDecision;
- (id)leakyApStats;
- (void)mergeFrom:(id)arg1;
- (id)oui;
- (bool)readFrom:(id)arg1;
- (void)setHasHashCode:(bool)arg1;
- (void)setHasLeakyApDecision:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setHashCode:(unsigned long long)arg1;
- (void)setLeakyApDecision:(unsigned int)arg1;
- (void)setLeakyApStats:(id)arg1;
- (void)setOui:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned long long)version;
- (void)writeTo:(id)arg1;

@end