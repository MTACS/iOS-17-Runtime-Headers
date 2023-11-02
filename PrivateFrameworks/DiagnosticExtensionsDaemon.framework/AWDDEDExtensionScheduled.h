
@interface AWDDEDExtensionScheduled : PBCodable <NSCopying> {
    unsigned long long  _delay;
    NSString * _extension;
    struct { 
        unsigned int delay : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long delay;
@property (nonatomic, retain) NSString *extension;
@property (nonatomic) bool hasDelay;
@property (nonatomic, readonly) bool hasExtension;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)delay;
- (id)description;
- (id)dictionaryRepresentation;
- (id)extension;
- (bool)hasDelay;
- (bool)hasExtension;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDelay:(unsigned long long)arg1;
- (void)setExtension:(id)arg1;
- (void)setHasDelay:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
