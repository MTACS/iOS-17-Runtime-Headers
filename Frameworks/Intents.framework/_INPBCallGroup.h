
@interface _INPBCallGroup : PBCodable <NSCopying, NSSecureCoding, _INPBCallGroup> {
    _INPBString * _groupId;
    _INPBString * _groupName;
    struct { }  _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBString *groupId;
@property (nonatomic, retain) _INPBString *groupName;
@property (nonatomic, readonly) bool hasGroupId;
@property (nonatomic, readonly) bool hasGroupName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)groupId;
- (id)groupName;
- (bool)hasGroupId;
- (bool)hasGroupName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGroupId:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
