
@interface _INPBImageNoteContent : PBCodable <NSCopying, NSSecureCoding, _INPBImageNoteContent> {
    struct { }  _has;
    _INPBImageValue * _image;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBImageValue *image;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasImage;
- (unsigned long long)hash;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setImage:(id)arg1;
- (void)writeTo:(id)arg1;

@end
