
@interface _INPBCreateNoteIntent : PBCodable <NSCopying, NSSecureCoding, _INPBCreateNoteIntent> {
    _INPBNoteContent * _content;
    _INPBDataString * _groupName;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBDataString * _title;
}

@property (nonatomic, retain) _INPBNoteContent *content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBDataString *groupName;
@property (nonatomic, readonly) bool hasContent;
@property (nonatomic, readonly) bool hasGroupName;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBDataString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)groupName;
- (bool)hasContent;
- (bool)hasGroupName;
- (bool)hasIntentMetadata;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContent:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
