
@interface GEOPDAutocompleteEntryQuery : PBCodable <NSCopying> {
    NSString * _completion;
    struct { 
        unsigned int has_tapBehavior : 1; 
        unsigned int has_queryHasAttributeIntentsInRefinements : 1; 
        unsigned int has_showIntermediateStateTapBehaviorListView : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_completion : 1; 
        unsigned int read_resultRefinements : 1; 
        unsigned int read_styleAttributes : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    bool  _queryHasAttributeIntentsInRefinements;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _resultRefinements;
    bool  _showIntermediateStateTapBehaviorListView;
    GEOStyleAttributes * _styleAttributes;
    int  _tapBehavior;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *completion;
@property (nonatomic, readonly) bool hasCompletion;
@property (nonatomic) bool hasQueryHasAttributeIntentsInRefinements;
@property (nonatomic) bool hasShowIntermediateStateTapBehaviorListView;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic) bool hasTapBehavior;
@property (nonatomic) bool queryHasAttributeIntentsInRefinements;
@property (nonatomic, retain) NSMutableArray *resultRefinements;
@property (nonatomic) bool showIntermediateStateTapBehaviorListView;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (nonatomic) int tapBehavior;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;
+ (Class)resultRefinementType;

- (void).cxx_destruct;
- (int)StringAsTapBehavior:(id)arg1;
- (void)addResultRefinement:(id)arg1;
- (void)clearResultRefinements;
- (void)clearUnknownFields:(bool)arg1;
- (id)completion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompletion;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasQueryHasAttributeIntentsInRefinements;
- (bool)hasShowIntermediateStateTapBehaviorListView;
- (bool)hasStyleAttributes;
- (bool)hasTapBehavior;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (bool)queryHasAttributeIntentsInRefinements;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (id)resultRefinementAtIndex:(unsigned long long)arg1;
- (id)resultRefinements;
- (unsigned long long)resultRefinementsCount;
- (void)setCompletion:(id)arg1;
- (void)setHasQueryHasAttributeIntentsInRefinements:(bool)arg1;
- (void)setHasShowIntermediateStateTapBehaviorListView:(bool)arg1;
- (void)setHasTapBehavior:(bool)arg1;
- (void)setQueryHasAttributeIntentsInRefinements:(bool)arg1;
- (void)setResultRefinements:(id)arg1;
- (void)setShowIntermediateStateTapBehaviorListView:(bool)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setTapBehavior:(int)arg1;
- (bool)showIntermediateStateTapBehaviorListView;
- (id)styleAttributes;
- (int)tapBehavior;
- (id)tapBehaviorAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
