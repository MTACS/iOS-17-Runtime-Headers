
@interface GEOLogMsgStateCuratedCollection : PBCodable <NSCopying> {
    GEOCollectionDetails * _collectionDetails;
    struct { 
        unsigned int has_horizontalIndex : 1; 
        unsigned int has_localSearchProviderID : 1; 
        unsigned int has_placecardType : 1; 
        unsigned int has_repeatableSectionIndex : 1; 
        unsigned int has_verticalIndex : 1; 
        unsigned int read_impossibleActions : 1; 
        unsigned int read_possibleActions : 1; 
        unsigned int read_collectionDetails : 1; 
        unsigned int read_publisherDetails : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    unsigned int  _horizontalIndex;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _impossibleActions;
    int  _localSearchProviderID;
    int  _placecardType;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _possibleActions;
    GEOPublisherDetails * _publisherDetails;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _repeatableSectionIndex;
    unsigned int  _verticalIndex;
}

@property (nonatomic, retain) GEOCollectionDetails *collectionDetails;
@property (nonatomic, readonly) bool hasCollectionDetails;
@property (nonatomic) bool hasHorizontalIndex;
@property (nonatomic) bool hasLocalSearchProviderID;
@property (nonatomic) bool hasPlacecardType;
@property (nonatomic, readonly) bool hasPublisherDetails;
@property (nonatomic) bool hasRepeatableSectionIndex;
@property (nonatomic) bool hasVerticalIndex;
@property (nonatomic) unsigned int horizontalIndex;
@property (nonatomic, readonly) int*impossibleActions;
@property (nonatomic, readonly) unsigned long long impossibleActionsCount;
@property (nonatomic) int localSearchProviderID;
@property (nonatomic) int placecardType;
@property (nonatomic, readonly) int*possibleActions;
@property (nonatomic, readonly) unsigned long long possibleActionsCount;
@property (nonatomic, retain) GEOPublisherDetails *publisherDetails;
@property (nonatomic) int repeatableSectionIndex;
@property (nonatomic) unsigned int verticalIndex;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsImpossibleActions:(id)arg1;
- (int)StringAsPlacecardType:(id)arg1;
- (int)StringAsPossibleActions:(id)arg1;
- (void)addImpossibleAction:(int)arg1;
- (void)addPossibleAction:(int)arg1;
- (void)clearImpossibleActions;
- (void)clearPossibleActions;
- (id)collectionDetails;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCollectionDetails;
- (bool)hasHorizontalIndex;
- (bool)hasLocalSearchProviderID;
- (bool)hasPlacecardType;
- (bool)hasPublisherDetails;
- (bool)hasRepeatableSectionIndex;
- (bool)hasVerticalIndex;
- (unsigned long long)hash;
- (unsigned int)horizontalIndex;
- (int)impossibleActionAtIndex:(unsigned long long)arg1;
- (int*)impossibleActions;
- (id)impossibleActionsAsString:(int)arg1;
- (unsigned long long)impossibleActionsCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)localSearchProviderID;
- (void)mergeFrom:(id)arg1;
- (int)placecardType;
- (id)placecardTypeAsString:(int)arg1;
- (int)possibleActionAtIndex:(unsigned long long)arg1;
- (int*)possibleActions;
- (id)possibleActionsAsString:(int)arg1;
- (unsigned long long)possibleActionsCount;
- (id)publisherDetails;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (int)repeatableSectionIndex;
- (void)setCollectionDetails:(id)arg1;
- (void)setHasHorizontalIndex:(bool)arg1;
- (void)setHasLocalSearchProviderID:(bool)arg1;
- (void)setHasPlacecardType:(bool)arg1;
- (void)setHasRepeatableSectionIndex:(bool)arg1;
- (void)setHasVerticalIndex:(bool)arg1;
- (void)setHorizontalIndex:(unsigned int)arg1;
- (void)setImpossibleActions:(int*)arg1 count:(unsigned long long)arg2;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setPlacecardType:(int)arg1;
- (void)setPossibleActions:(int*)arg1 count:(unsigned long long)arg2;
- (void)setPublisherDetails:(id)arg1;
- (void)setRepeatableSectionIndex:(int)arg1;
- (void)setVerticalIndex:(unsigned int)arg1;
- (unsigned int)verticalIndex;
- (void)writeTo:(id)arg1;

@end
