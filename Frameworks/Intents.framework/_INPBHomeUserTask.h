
@interface _INPBHomeUserTask : PBCodable <NSCopying, NSSecureCoding, _INPBHomeUserTask> {
    int  _attribute;
    struct { 
        unsigned int attribute : 1; 
        unsigned int taskType : 1; 
    }  _has;
    int  _taskType;
    _INPBHomeAttributeValue * _value;
}

@property (nonatomic) int attribute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAttribute;
@property (nonatomic) bool hasTaskType;
@property (nonatomic, readonly) bool hasValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) int taskType;
@property (nonatomic, retain) _INPBHomeAttributeValue *value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsAttribute:(id)arg1;
- (int)StringAsTaskType:(id)arg1;
- (int)attribute;
- (id)attributeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAttribute;
- (bool)hasTaskType;
- (bool)hasValue;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttribute:(int)arg1;
- (void)setHasAttribute:(bool)arg1;
- (void)setHasTaskType:(bool)arg1;
- (void)setTaskType:(int)arg1;
- (void)setValue:(id)arg1;
- (int)taskType;
- (id)taskTypeAsString:(int)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
