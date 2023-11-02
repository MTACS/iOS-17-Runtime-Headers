
@interface _INPBListShortcutsIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBListShortcutsIntentResponse> {
    struct { }  _has;
    NSArray * _shortcuts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *shortcuts;
@property (nonatomic, readonly) unsigned long long shortcutsCount;
@property (readonly) Class superclass;

+ (Class)shortcutsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addShortcuts:(id)arg1;
- (void)clearShortcuts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setShortcuts:(id)arg1;
- (id)shortcuts;
- (id)shortcutsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shortcutsCount;
- (void)writeTo:(id)arg1;

@end
