
@interface _INPBNote : PBCodable <NSCopying, NSSecureCoding, _INPBNote> {
    NSString * _accountIdentifier;
    NSArray * _contents;
    _INPBDateTime * _createdDateTime;
    _INPBDataString * _groupName;
    struct { }  _has;
    NSString * _identifier;
    _INPBDateTime * _modifiedDateTime;
    _INPBDataString * _title;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSArray *contents;
@property (nonatomic, readonly) unsigned long long contentsCount;
@property (nonatomic, retain) _INPBDateTime *createdDateTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBDataString *groupName;
@property (nonatomic, readonly) bool hasAccountIdentifier;
@property (nonatomic, readonly) bool hasCreatedDateTime;
@property (nonatomic, readonly) bool hasGroupName;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasModifiedDateTime;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) _INPBDateTime *modifiedDateTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBDataString *title;

+ (Class)contentType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (void)addContent:(id)arg1;
- (void)clearContents;
- (id)contentAtIndex:(unsigned long long)arg1;
- (id)contents;
- (unsigned long long)contentsCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdDateTime;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (bool)hasAccountIdentifier;
- (bool)hasCreatedDateTime;
- (bool)hasGroupName;
- (bool)hasIdentifier;
- (bool)hasModifiedDateTime;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)modifiedDateTime;
- (bool)readFrom:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setCreatedDateTime:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setModifiedDateTime:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
