
@interface BMPBHomeKitClientActionSetEvent : PBCodable <NSCopying> {
    NSString * _actionSetName;
    NSString * _actionSetType;
    NSString * _actionSetUniqueIdentifier;
    NSMutableArray * _associatedAccessoryUniqueIdentifiers;
    BMPBHomeKitClientBase * _base;
    NSString * _homeName;
}

@property (nonatomic, retain) NSString *actionSetName;
@property (nonatomic, retain) NSString *actionSetType;
@property (nonatomic, retain) NSString *actionSetUniqueIdentifier;
@property (nonatomic, retain) NSMutableArray *associatedAccessoryUniqueIdentifiers;
@property (nonatomic, retain) BMPBHomeKitClientBase *base;
@property (nonatomic, readonly) bool hasActionSetName;
@property (nonatomic, readonly) bool hasActionSetType;
@property (nonatomic, readonly) bool hasActionSetUniqueIdentifier;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic, readonly) bool hasHomeName;
@property (nonatomic, retain) NSString *homeName;

+ (Class)associatedAccessoryUniqueIdentifiersType;

- (void).cxx_destruct;
- (id)actionSetName;
- (id)actionSetType;
- (id)actionSetUniqueIdentifier;
- (void)addAssociatedAccessoryUniqueIdentifiers:(id)arg1;
- (id)associatedAccessoryUniqueIdentifiers;
- (id)associatedAccessoryUniqueIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)associatedAccessoryUniqueIdentifiersCount;
- (id)base;
- (void)clearAssociatedAccessoryUniqueIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasActionSetName;
- (bool)hasActionSetType;
- (bool)hasActionSetUniqueIdentifier;
- (bool)hasBase;
- (bool)hasHomeName;
- (unsigned long long)hash;
- (id)homeName;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActionSetName:(id)arg1;
- (void)setActionSetType:(id)arg1;
- (void)setActionSetUniqueIdentifier:(id)arg1;
- (void)setAssociatedAccessoryUniqueIdentifiers:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setHomeName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
