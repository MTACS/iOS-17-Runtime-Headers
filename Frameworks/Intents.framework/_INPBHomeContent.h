
@interface _INPBHomeContent : PBCodable <NSCopying, NSSecureCoding, _INPBHomeContent> {
    NSArray * _actions;
    _INPBHomeFilter * _filter;
    struct { }  _has;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, readonly) unsigned long long actionsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBHomeFilter *filter;
@property (nonatomic, readonly) bool hasFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)actionsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actions;
- (id)actionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionsCount;
- (void)addActions:(id)arg1;
- (void)clearActions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)filter;
- (bool)hasFilter;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)writeTo:(id)arg1;

@end
