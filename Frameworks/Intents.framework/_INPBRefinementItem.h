
@interface _INPBRefinementItem : PBCodable <NSCopying, NSSecureCoding, _INPBRefinementItem> {
    struct { }  _has;
    _INPBSelectionItem * _item;
    NSString * _subKeyPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasItem;
@property (nonatomic, readonly) bool hasSubKeyPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBSelectionItem *item;
@property (nonatomic, copy) NSString *subKeyPath;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasItem;
- (bool)hasSubKeyPath;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)item;
- (bool)readFrom:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setSubKeyPath:(id)arg1;
- (id)subKeyPath;
- (void)writeTo:(id)arg1;

@end
