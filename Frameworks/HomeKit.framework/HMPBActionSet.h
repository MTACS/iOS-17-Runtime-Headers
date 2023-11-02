
@interface HMPBActionSet : PBCodable <NSCopying> {
    NSString * _actionSetType;
    NSMutableArray * _actions;
    NSData * _homeUUID;
    NSString * _name;
    NSData * _uuid;
}

@property (nonatomic, retain) NSString *actionSetType;
@property (nonatomic, retain) NSMutableArray *actions;
@property (nonatomic, readonly) bool hasActionSetType;
@property (nonatomic, readonly) bool hasHomeUUID;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, retain) NSData *homeUUID;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSData *uuid;

+ (Class)actionsType;

- (void).cxx_destruct;
- (id)actionSetType;
- (id)actions;
- (id)actionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)actionsCount;
- (void)addActions:(id)arg1;
- (void)clearActions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionSetType;
- (bool)hasHomeUUID;
- (bool)hasName;
- (bool)hasUuid;
- (unsigned long long)hash;
- (id)homeUUID;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setActionSetType:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setHomeUUID:(id)arg1;
- (void)setName:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
