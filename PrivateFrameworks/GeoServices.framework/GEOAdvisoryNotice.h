
@interface GEOAdvisoryNotice : PBCodable <NSCopying> {
    NSMutableArray * _advisoryCards;
    NSMutableArray * _advisoryItems;
    NSMutableArray * _analyticsMessageValues;
    GEOFormattedString * _detailCardTitle;
    struct { 
        unsigned int has_shouldAlwaysShowAdvisoryCard : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_incidentIndexs : 1; 
        unsigned int read_advisoryCards : 1; 
        unsigned int read_advisoryItems : 1; 
        unsigned int read_analyticsMessageValues : 1; 
        unsigned int read_detailCardTitle : 1; 
        unsigned int read_noticeArtwork : 1; 
        unsigned int read_noticeText : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _incidentIndexs;
    GEOPBTransitArtwork * _noticeArtwork;
    GEOFormattedString * _noticeText;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    bool  _shouldAlwaysShowAdvisoryCard;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *advisoryCards;
@property (nonatomic, retain) NSMutableArray *advisoryItems;
@property (nonatomic, retain) NSMutableArray *analyticsMessageValues;
@property (nonatomic, retain) GEOFormattedString *detailCardTitle;
@property (nonatomic, readonly) bool hasDetailCardTitle;
@property (nonatomic, readonly) bool hasNoticeArtwork;
@property (nonatomic, readonly) bool hasNoticeText;
@property (nonatomic) bool hasShouldAlwaysShowAdvisoryCard;
@property (nonatomic, readonly) unsigned int*incidentIndexs;
@property (nonatomic, readonly) unsigned long long incidentIndexsCount;
@property (nonatomic, retain) GEOPBTransitArtwork *noticeArtwork;
@property (nonatomic, retain) GEOFormattedString *noticeText;
@property (nonatomic) bool shouldAlwaysShowAdvisoryCard;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)advisoryCardType;
+ (Class)advisoryItemType;
+ (Class)analyticsMessageValueType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addAdvisoryCard:(id)arg1;
- (void)addAdvisoryItem:(id)arg1;
- (void)addAnalyticsMessageValue:(id)arg1;
- (void)addIncidentIndex:(unsigned int)arg1;
- (id)advisoryCardAtIndex:(unsigned long long)arg1;
- (id)advisoryCards;
- (unsigned long long)advisoryCardsCount;
- (id)advisoryItemAtIndex:(unsigned long long)arg1;
- (id)advisoryItems;
- (unsigned long long)advisoryItemsCount;
- (id)analyticsMessageValueAtIndex:(unsigned long long)arg1;
- (id)analyticsMessageValues;
- (unsigned long long)analyticsMessageValuesCount;
- (void)clearAdvisoryCards;
- (void)clearAdvisoryItems;
- (void)clearAnalyticsMessageValues;
- (void)clearIncidentIndexs;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)detailCardTitle;
- (id)dictionaryRepresentation;
- (bool)hasDetailCardTitle;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasNoticeArtwork;
- (bool)hasNoticeText;
- (bool)hasShouldAlwaysShowAdvisoryCard;
- (unsigned long long)hash;
- (unsigned int)incidentIndexAtIndex:(unsigned long long)arg1;
- (unsigned int*)incidentIndexs;
- (unsigned long long)incidentIndexsCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)noticeArtwork;
- (id)noticeText;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAdvisoryCards:(id)arg1;
- (void)setAdvisoryItems:(id)arg1;
- (void)setAnalyticsMessageValues:(id)arg1;
- (void)setDetailCardTitle:(id)arg1;
- (void)setHasShouldAlwaysShowAdvisoryCard:(bool)arg1;
- (void)setIncidentIndexs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setNoticeArtwork:(id)arg1;
- (void)setNoticeText:(id)arg1;
- (void)setShouldAlwaysShowAdvisoryCard:(bool)arg1;
- (bool)shouldAlwaysShowAdvisoryCard;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
