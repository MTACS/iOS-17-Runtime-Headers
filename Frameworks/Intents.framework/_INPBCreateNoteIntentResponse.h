
@interface _INPBCreateNoteIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBCreateNoteIntentResponse> {
    _INPBNote * _createdNote;
    struct { }  _has;
}

@property (nonatomic, retain) _INPBNote *createdNote;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCreatedNote;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdNote;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCreatedNote;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCreatedNote:(id)arg1;
- (void)writeTo:(id)arg1;

@end
