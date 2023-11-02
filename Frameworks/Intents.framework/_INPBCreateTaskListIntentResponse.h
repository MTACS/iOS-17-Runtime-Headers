
@interface _INPBCreateTaskListIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBCreateTaskListIntentResponse> {
    _INPBTaskList * _createdTaskList;
    struct { }  _has;
}

@property (nonatomic, retain) _INPBTaskList *createdTaskList;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCreatedTaskList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdTaskList;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCreatedTaskList;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCreatedTaskList:(id)arg1;
- (void)writeTo:(id)arg1;

@end
