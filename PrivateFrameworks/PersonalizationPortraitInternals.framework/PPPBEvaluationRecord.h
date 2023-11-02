
@interface PPPBEvaluationRecord : PBCodable <NSCopying> {
    NSString * _contents;
    long long  _deviceId;
    struct { 
        unsigned int deviceId : 1; 
    }  _has;
}

@property (nonatomic, retain) NSString *contents;
@property (nonatomic) long long deviceId;
@property (nonatomic, readonly) bool hasContents;
@property (nonatomic) bool hasDeviceId;

- (void).cxx_destruct;
- (id)contents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)deviceId;
- (id)dictionaryRepresentation;
- (bool)hasContents;
- (bool)hasDeviceId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setDeviceId:(long long)arg1;
- (void)setHasDeviceId:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
