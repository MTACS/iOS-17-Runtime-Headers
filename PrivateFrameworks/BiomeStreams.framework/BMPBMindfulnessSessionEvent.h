
@interface BMPBMindfulnessSessionEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionType : 1; 
        unsigned int stateType : 1; 
    }  _has;
    int  _sessionType;
    int  _stateType;
}

@property (nonatomic) bool hasSessionType;
@property (nonatomic) bool hasStateType;
@property (nonatomic) int sessionType;
@property (nonatomic) int stateType;

- (int)StringAsSessionType:(id)arg1;
- (int)StringAsStateType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionType;
- (bool)hasStateType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)sessionType;
- (id)sessionTypeAsString:(int)arg1;
- (void)setHasSessionType:(bool)arg1;
- (void)setHasStateType:(bool)arg1;
- (void)setSessionType:(int)arg1;
- (void)setStateType:(int)arg1;
- (int)stateType;
- (id)stateTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
