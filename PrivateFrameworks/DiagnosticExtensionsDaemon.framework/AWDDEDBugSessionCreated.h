
@interface AWDDEDBugSessionCreated : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSString * _hostapp;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly) bool hasHostapp;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSString *hostapp;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHostapp;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (id)hostapp;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHostapp:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
