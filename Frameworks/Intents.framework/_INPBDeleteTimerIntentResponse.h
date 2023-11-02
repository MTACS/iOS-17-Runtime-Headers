
@interface _INPBDeleteTimerIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBDeleteTimerIntentResponse> {
    NSArray * _deletedTimers;
    struct { }  _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSArray *deletedTimers;
@property (nonatomic, readonly) unsigned long long deletedTimersCount;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)deletedTimersType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDeletedTimers:(id)arg1;
- (void)clearDeletedTimers;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletedTimers;
- (id)deletedTimersAtIndex:(unsigned long long)arg1;
- (unsigned long long)deletedTimersCount;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeletedTimers:(id)arg1;
- (void)writeTo:(id)arg1;

@end
