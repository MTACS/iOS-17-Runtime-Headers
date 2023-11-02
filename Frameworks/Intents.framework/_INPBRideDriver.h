
@interface _INPBRideDriver : PBCodable <NSCopying, NSSecureCoding, _INPBRideDriver> {
    struct { }  _has;
    _INPBImageValue * _image;
    _INPBContactValue * _person;
    NSString * _phoneNumber;
    NSString * _rating;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasPerson;
@property (nonatomic, readonly) bool hasPhoneNumber;
@property (nonatomic, readonly) bool hasRating;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBImageValue *image;
@property (nonatomic, retain) _INPBContactValue *person;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, copy) NSString *rating;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasImage;
- (bool)hasPerson;
- (bool)hasPhoneNumber;
- (bool)hasRating;
- (unsigned long long)hash;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)person;
- (id)phoneNumber;
- (id)rating;
- (bool)readFrom:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setRating:(id)arg1;
- (void)writeTo:(id)arg1;

@end
