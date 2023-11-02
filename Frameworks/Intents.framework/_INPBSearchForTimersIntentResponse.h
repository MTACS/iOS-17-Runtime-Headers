
@interface _INPBSearchForTimersIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSearchForTimersIntentResponse> {
    struct { }  _has;
    NSArray * _matchedTimers;
    NSArray * _timers;
    NSArray * _unmatchedTimers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *matchedTimers;
@property (nonatomic, readonly) unsigned long long matchedTimersCount;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *timers;
@property (nonatomic, readonly) unsigned long long timersCount;
@property (nonatomic, copy) NSArray *unmatchedTimers;
@property (nonatomic, readonly) unsigned long long unmatchedTimersCount;

+ (Class)matchedTimersType;
+ (bool)supportsSecureCoding;
+ (Class)timersType;
+ (Class)unmatchedTimersType;

- (void).cxx_destruct;
- (void)addMatchedTimers:(id)arg1;
- (void)addTimers:(id)arg1;
- (void)addUnmatchedTimers:(id)arg1;
- (void)clearMatchedTimers;
- (void)clearTimers;
- (void)clearUnmatchedTimers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)matchedTimers;
- (id)matchedTimersAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchedTimersCount;
- (bool)readFrom:(id)arg1;
- (void)setMatchedTimers:(id)arg1;
- (void)setTimers:(id)arg1;
- (void)setUnmatchedTimers:(id)arg1;
- (id)timers;
- (id)timersAtIndex:(unsigned long long)arg1;
- (unsigned long long)timersCount;
- (id)unmatchedTimers;
- (id)unmatchedTimersAtIndex:(unsigned long long)arg1;
- (unsigned long long)unmatchedTimersCount;
- (void)writeTo:(id)arg1;

@end
