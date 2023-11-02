
@interface _INPBActivityList : PBCodable <NSCopying, NSSecureCoding, _INPBActivityList> {
    NSArray * _activities;
    _INPBCondition * _condition;
    struct { }  _has;
}

@property (nonatomic, copy) NSArray *activities;
@property (nonatomic, readonly) unsigned long long activitiesCount;
@property (nonatomic, retain) _INPBCondition *condition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)activityType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activities;
- (unsigned long long)activitiesCount;
- (id)activityAtIndex:(unsigned long long)arg1;
- (void)addActivity:(id)arg1;
- (void)clearActivities;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCondition;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivities:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)writeTo:(id)arg1;

@end
