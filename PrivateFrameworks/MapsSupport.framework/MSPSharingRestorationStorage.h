
@interface MSPSharingRestorationStorage : PBCodable <NSCopying> {
    double  _createdTimestamp;
    NSString * _groupIdentifier;
    struct { 
        unsigned int createdTimestamp : 1; 
    }  _has;
    NSMutableArray * _mapsIdentifiers;
    NSMutableArray * _messagesIdentifiers;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) double createdTimestamp;
@property (nonatomic, retain) NSString *groupIdentifier;
@property (nonatomic) bool hasCreatedTimestamp;
@property (nonatomic, readonly) bool hasGroupIdentifier;
@property (nonatomic, retain) NSMutableArray *mapsIdentifiers;
@property (nonatomic, retain) NSMutableArray *messagesIdentifiers;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)mapsIdentifierType;
+ (Class)messagesIdentifierType;

- (void).cxx_destruct;
- (void)addMapsIdentifier:(id)arg1;
- (void)addMessagesIdentifier:(id)arg1;
- (void)clearMapsIdentifiers;
- (void)clearMessagesIdentifiers;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)createdTimestamp;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupIdentifier;
- (bool)hasCreatedTimestamp;
- (bool)hasGroupIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mapsIdentifierAtIndex:(unsigned long long)arg1;
- (id)mapsIdentifiers;
- (unsigned long long)mapsIdentifiersCount;
- (void)mergeFrom:(id)arg1;
- (id)messagesIdentifierAtIndex:(unsigned long long)arg1;
- (id)messagesIdentifiers;
- (unsigned long long)messagesIdentifiersCount;
- (bool)readFrom:(id)arg1;
- (void)setCreatedTimestamp:(double)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setHasCreatedTimestamp:(bool)arg1;
- (void)setMapsIdentifiers:(id)arg1;
- (void)setMessagesIdentifiers:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
