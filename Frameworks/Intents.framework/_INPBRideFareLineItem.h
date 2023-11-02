
@interface _INPBRideFareLineItem : PBCodable <NSCopying, NSSecureCoding, _INPBRideFareLineItem> {
    NSString * _currencyCode;
    struct { }  _has;
    _INPBDecimalNumberValue * _price;
    NSString * _title;
}

@property (nonatomic, copy) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCurrencyCode;
@property (nonatomic, readonly) bool hasPrice;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBDecimalNumberValue *price;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCurrencyCode;
- (bool)hasPrice;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)price;
- (bool)readFrom:(id)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setPrice:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
