
@interface HMMediaGroupProtoMediaGroupData : PBCodable <NSCopying> {
    NSString * _associatedGroupIdentifier;
    NSMutableArray * _destinationIdentifiers;
    HMMediaGroupProtoMediaGroupRole * _groupRole;
    struct { 
        unsigned int isDefaultName : 1; 
    }  _has;
    NSString * _identifier;
    bool  _isDefaultName;
    NSString * _name;
    NSString * _parentIdentifier;
}

@property (nonatomic, retain) NSString *associatedGroupIdentifier;
@property (nonatomic, retain) NSMutableArray *destinationIdentifiers;
@property (nonatomic, retain) HMMediaGroupProtoMediaGroupRole *groupRole;
@property (nonatomic, readonly) bool hasAssociatedGroupIdentifier;
@property (nonatomic, readonly) bool hasGroupRole;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasIsDefaultName;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasParentIdentifier;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) bool isDefaultName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *parentIdentifier;

+ (Class)destinationIdentifiersType;

- (void).cxx_destruct;
- (void)addDestinationIdentifiers:(id)arg1;
- (id)associatedGroupIdentifier;
- (void)clearDestinationIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationIdentifiers;
- (id)destinationIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationIdentifiersCount;
- (id)dictionaryRepresentation;
- (id)groupRole;
- (bool)hasAssociatedGroupIdentifier;
- (bool)hasGroupRole;
- (bool)hasIdentifier;
- (bool)hasIsDefaultName;
- (bool)hasName;
- (bool)hasParentIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isDefaultName;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)parentIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setAssociatedGroupIdentifier:(id)arg1;
- (void)setDestinationIdentifiers:(id)arg1;
- (void)setGroupRole:(id)arg1;
- (void)setHasIsDefaultName:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsDefaultName:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setParentIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
