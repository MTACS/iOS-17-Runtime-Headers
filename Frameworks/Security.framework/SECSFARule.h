
@interface SECSFARule : PBCodable <NSCopying> {
    SECSFAAction * _action;
    NSString * _eventType;
    struct { 
        unsigned int repeatAfterSeconds : 1; 
    }  _has;
    NSData * _match;
    NSString * _process;
    long long  _repeatAfterSeconds;
}

@property (nonatomic, retain) SECSFAAction *action;
@property (nonatomic, retain) NSString *eventType;
@property (nonatomic, readonly) bool hasAction;
@property (nonatomic, readonly) bool hasEventType;
@property (nonatomic, readonly) bool hasMatch;
@property (nonatomic, readonly) bool hasProcess;
@property (nonatomic) bool hasRepeatAfterSeconds;
@property (nonatomic, retain) NSData *match;
@property (nonatomic, retain) NSString *process;
@property (nonatomic) long long repeatAfterSeconds;

- (void).cxx_destruct;
- (id)action;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventType;
- (bool)hasAction;
- (bool)hasEventType;
- (bool)hasMatch;
- (bool)hasProcess;
- (bool)hasRepeatAfterSeconds;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)match;
- (void)mergeFrom:(id)arg1;
- (id)process;
- (bool)readFrom:(id)arg1;
- (long long)repeatAfterSeconds;
- (void)setAction:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)setHasRepeatAfterSeconds:(bool)arg1;
- (void)setMatch:(id)arg1;
- (void)setProcess:(id)arg1;
- (void)setRepeatAfterSeconds:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
