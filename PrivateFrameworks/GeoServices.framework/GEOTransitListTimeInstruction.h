
@interface GEOTransitListTimeInstruction : PBCodable <GEOComposedRouteStepTransitInstructionMerging, NSCopying> {
    struct { 
        unsigned int has_hideWhenListCollapsed : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_primaryText : 1; 
        unsigned int read_secondaryText : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _hideWhenListCollapsed;
    GEOFormattedString * _primaryText;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOFormattedString * _secondaryText;
    PBUnknownFields * _unknownFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasHideWhenListCollapsed;
@property (nonatomic, readonly) bool hasPrimaryText;
@property (nonatomic, readonly) bool hasSecondaryText;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideWhenListCollapsed;
@property (nonatomic, retain) GEOFormattedString *primaryText;
@property (nonatomic, retain) GEOFormattedString *secondaryText;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (bool)_transit_hasAnyFieldSet;
- (void)_transit_mergeFrom:(id)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHideWhenListCollapsed;
- (bool)hasPrimaryText;
- (bool)hasSecondaryText;
- (unsigned long long)hash;
- (bool)hideWhenListCollapsed;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)primaryText;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)secondaryText;
- (void)setHasHideWhenListCollapsed:(bool)arg1;
- (void)setHideWhenListCollapsed:(bool)arg1;
- (void)setPrimaryText:(id)arg1;
- (void)setSecondaryText:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
