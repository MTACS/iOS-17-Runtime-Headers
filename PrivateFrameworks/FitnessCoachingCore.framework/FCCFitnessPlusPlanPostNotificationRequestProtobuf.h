
@interface FCCFitnessPlusPlanPostNotificationRequestProtobuf : PBCodable <NSCopying> {
    bool  _force;
    struct { 
        unsigned int force : 1; 
    }  _has;
    NSString * _type;
}

@property (nonatomic) bool force;
@property (nonatomic) bool hasForce;
@property (nonatomic, retain) NSString *type;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)force;
- (bool)hasForce;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setForce:(bool)arg1;
- (void)setHasForce:(bool)arg1;
- (void)setType:(id)arg1;
- (id)type;
- (void)writeTo:(id)arg1;

@end
