
@interface HMAccessoryInfoProtoSleepWakeStateEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int sleepWakeState : 1; 
    }  _has;
    long long  _sleepWakeState;
}

@property (nonatomic) bool hasSleepWakeState;
@property (nonatomic) long long sleepWakeState;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSleepWakeState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasSleepWakeState:(bool)arg1;
- (void)setSleepWakeState:(long long)arg1;
- (long long)sleepWakeState;
- (void)writeTo:(id)arg1;

@end
