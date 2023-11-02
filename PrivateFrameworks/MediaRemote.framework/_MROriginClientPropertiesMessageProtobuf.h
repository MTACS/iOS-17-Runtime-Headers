
@interface _MROriginClientPropertiesMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int lastPlayingTimestamp : 1; 
    }  _has;
    double  _lastPlayingTimestamp;
}

@property (nonatomic) bool hasLastPlayingTimestamp;
@property (nonatomic) double lastPlayingTimestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLastPlayingTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)lastPlayingTimestamp;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLastPlayingTimestamp:(bool)arg1;
- (void)setLastPlayingTimestamp:(double)arg1;
- (void)writeTo:(id)arg1;

@end
