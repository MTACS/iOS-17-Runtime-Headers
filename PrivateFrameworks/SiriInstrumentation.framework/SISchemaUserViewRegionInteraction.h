
@interface SISchemaUserViewRegionInteraction : SISchemaInstrumentationMessage {
    struct { 
        unsigned int viewRegionDesignation : 1; 
        unsigned int userViewInteraction : 1; 
    }  _has;
    int  _userViewInteraction;
    int  _viewRegionDesignation;
}

@property (nonatomic) bool hasUserViewInteraction;
@property (nonatomic) bool hasViewRegionDesignation;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int userViewInteraction;
@property (nonatomic) int viewRegionDesignation;

- (void)deleteUserViewInteraction;
- (void)deleteViewRegionDesignation;
- (id)dictionaryRepresentation;
- (bool)hasUserViewInteraction;
- (bool)hasViewRegionDesignation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasUserViewInteraction:(bool)arg1;
- (void)setHasViewRegionDesignation:(bool)arg1;
- (void)setUserViewInteraction:(int)arg1;
- (void)setViewRegionDesignation:(int)arg1;
- (id)suppressMessageUnderConditions;
- (int)userViewInteraction;
- (int)viewRegionDesignation;
- (void)writeTo:(id)arg1;

@end
