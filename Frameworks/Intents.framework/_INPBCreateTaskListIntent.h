
@interface _INPBCreateTaskListIntent : PBCodable <NSCopying, NSSecureCoding, _INPBCreateTaskListIntent> {
    _INPBDataString * _groupName;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    NSArray * _taskTitles;
    _INPBDataString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBDataString *groupName;
@property (nonatomic, readonly) bool hasGroupName;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSArray *taskTitles;
@property (nonatomic, readonly) unsigned long long taskTitlesCount;
@property (nonatomic, retain) _INPBDataString *title;

+ (bool)supportsSecureCoding;
+ (Class)taskTitlesType;

- (void).cxx_destruct;
- (void)addTaskTitles:(id)arg1;
- (void)clearTaskTitles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (bool)hasGroupName;
- (bool)hasIntentMetadata;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTaskTitles:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)taskTitles;
- (id)taskTitlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)taskTitlesCount;
- (id)title;
- (void)writeTo:(id)arg1;

@end
