
@interface _INPBAppendToNoteIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBAppendToNoteIntentResponse> {
    struct { }  _has;
    _INPBNote * _note;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasNote;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBNote *note;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasNote;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)note;
- (bool)readFrom:(id)arg1;
- (void)setNote:(id)arg1;
- (void)writeTo:(id)arg1;

@end
