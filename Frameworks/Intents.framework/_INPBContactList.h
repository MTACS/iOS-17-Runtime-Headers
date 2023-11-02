
@interface _INPBContactList : PBCodable <NSCopying, NSSecureCoding, _INPBContactList> {
    _INPBCondition * _condition;
    NSArray * _contacts;
    struct { }  _has;
}

@property (nonatomic, retain) _INPBCondition *condition;
@property (nonatomic, copy) NSArray *contacts;
@property (nonatomic, readonly) unsigned long long contactsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCondition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)contactType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addContact:(id)arg1;
- (void)clearContacts;
- (id)condition;
- (id)contactAtIndex:(unsigned long long)arg1;
- (id)contacts;
- (unsigned long long)contactsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCondition;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setContacts:(id)arg1;
- (void)writeTo:(id)arg1;

@end
