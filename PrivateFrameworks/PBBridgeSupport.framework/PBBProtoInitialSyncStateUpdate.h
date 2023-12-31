
@interface PBBProtoInitialSyncStateUpdate : PBCodable <NSCopying> {
    struct { 
        unsigned int progress : 1; 
        unsigned int state : 1; 
    }  _has;
    double  _progress;
    unsigned int  _state;
}

@property (nonatomic) bool hasProgress;
@property (nonatomic) bool hasState;
@property (nonatomic) double progress;
@property (nonatomic) unsigned int state;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProgress;
- (bool)hasState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)progress;
- (bool)readFrom:(id)arg1;
- (void)setHasProgress:(bool)arg1;
- (void)setHasState:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setState:(unsigned int)arg1;
- (unsigned int)state;
- (void)writeTo:(id)arg1;

@end
