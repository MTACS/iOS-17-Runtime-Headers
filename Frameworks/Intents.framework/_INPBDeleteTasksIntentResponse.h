
@interface _INPBDeleteTasksIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBDeleteTasksIntentResponse> {
    NSArray * _deletedTasks;
    struct { }  _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) NSArray *deletedTasks;
@property (nonatomic, readonly) unsigned long long deletedTasksCount;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)deletedTasksType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addDeletedTasks:(id)arg1;
- (void)clearDeletedTasks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deletedTasks;
- (id)deletedTasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)deletedTasksCount;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeletedTasks:(id)arg1;
- (void)writeTo:(id)arg1;

@end
