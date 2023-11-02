
@interface _INPBPauseTimerIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBPauseTimerIntentResponse> {
    struct { }  _has;
    NSArray * _pausedTimers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *pausedTimers;
@property (nonatomic, readonly) unsigned long long pausedTimersCount;
@property (readonly) Class superclass;

+ (Class)pausedTimersType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addPausedTimers:(id)arg1;
- (void)clearPausedTimers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)pausedTimers;
- (id)pausedTimersAtIndex:(unsigned long long)arg1;
- (unsigned long long)pausedTimersCount;
- (bool)readFrom:(id)arg1;
- (void)setPausedTimers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
