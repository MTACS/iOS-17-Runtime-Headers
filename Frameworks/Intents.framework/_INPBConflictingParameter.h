
@interface _INPBConflictingParameter : PBCodable <NSCopying, NSSecureCoding, _INPBConflictingParameter> {
    NSArray * _alternateItems;
    struct { }  _has;
    NSString * _keyPath;
}

@property (nonatomic, copy) NSArray *alternateItems;
@property (nonatomic, readonly) unsigned long long alternateItemsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasKeyPath;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *keyPath;
@property (readonly) Class superclass;

+ (Class)alternateItemsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addAlternateItems:(id)arg1;
- (id)alternateItems;
- (id)alternateItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alternateItemsCount;
- (void)clearAlternateItems;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasKeyPath;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)keyPath;
- (bool)readFrom:(id)arg1;
- (void)setAlternateItems:(id)arg1;
- (void)setKeyPath:(id)arg1;
- (void)writeTo:(id)arg1;

@end
