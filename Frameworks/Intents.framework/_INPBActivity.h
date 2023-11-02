
@interface _INPBActivity : PBCodable <NSCopying, NSSecureCoding, _INPBActivity> {
    NSArray * _activityDescriptors;
    _INPBString * _activityType;
    struct { }  _has;
}

@property (nonatomic, copy) NSArray *activityDescriptors;
@property (nonatomic, readonly) unsigned long long activityDescriptorsCount;
@property (nonatomic, retain) _INPBString *activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasActivityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)activityDescriptorsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityDescriptors;
- (id)activityDescriptorsAtIndex:(unsigned long long)arg1;
- (unsigned long long)activityDescriptorsCount;
- (id)activityType;
- (void)addActivityDescriptors:(id)arg1;
- (void)clearActivityDescriptors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasActivityType;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivityDescriptors:(id)arg1;
- (void)setActivityType:(id)arg1;
- (void)writeTo:(id)arg1;

@end
