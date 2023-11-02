
@interface _INPBSnoozeTasksIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBSnoozeTasksIntentResponse> {
    struct { }  _has;
    NSArray * _snoozedTasks;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *snoozedTasks;
@property (nonatomic, readonly) unsigned long long snoozedTasksCount;
@property (readonly) Class superclass;

+ (Class)snoozedTasksType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addSnoozedTasks:(id)arg1;
- (void)clearSnoozedTasks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setSnoozedTasks:(id)arg1;
- (id)snoozedTasks;
- (id)snoozedTasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)snoozedTasksCount;
- (void)writeTo:(id)arg1;

@end
