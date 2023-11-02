
@interface FCCMoveModeProtobuf : PBCodable <NSCopying> {
    int  _delay;
    struct { 
        unsigned int nextActivityMoveMode : 1; 
        unsigned int nextActivityMoveModeStartDate : 1; 
        unsigned int notificationType : 1; 
        unsigned int delay : 1; 
    }  _has;
    long long  _nextActivityMoveMode;
    double  _nextActivityMoveModeStartDate;
    long long  _notificationType;
}

@property (nonatomic) int delay;
@property (nonatomic) bool hasDelay;
@property (nonatomic) bool hasNextActivityMoveMode;
@property (nonatomic) bool hasNextActivityMoveModeStartDate;
@property (nonatomic) bool hasNotificationType;
@property (nonatomic) long long nextActivityMoveMode;
@property (nonatomic) double nextActivityMoveModeStartDate;
@property (nonatomic) long long notificationType;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)delay;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDelay;
- (bool)hasNextActivityMoveMode;
- (bool)hasNextActivityMoveModeStartDate;
- (bool)hasNotificationType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)nextActivityMoveMode;
- (double)nextActivityMoveModeStartDate;
- (long long)notificationType;
- (bool)readFrom:(id)arg1;
- (void)setDelay:(int)arg1;
- (void)setHasDelay:(bool)arg1;
- (void)setHasNextActivityMoveMode:(bool)arg1;
- (void)setHasNextActivityMoveModeStartDate:(bool)arg1;
- (void)setHasNotificationType:(bool)arg1;
- (void)setNextActivityMoveMode:(long long)arg1;
- (void)setNextActivityMoveModeStartDate:(double)arg1;
- (void)setNotificationType:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
