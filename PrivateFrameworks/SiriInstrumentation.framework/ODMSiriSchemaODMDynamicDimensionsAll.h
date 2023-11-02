
@interface ODMSiriSchemaODMDynamicDimensionsAll : SISchemaInstrumentationMessage {
    int  _audioInterface;
    struct { 
        unsigned int viewMode : 1; 
        unsigned int audioInterface : 1; 
        unsigned int product : 1; 
        unsigned int siriAsrLocation : 1; 
        unsigned int siriNlLocation : 1; 
        unsigned int siriDataSharingOptInStatus : 1; 
    }  _has;
    bool  _hasSiriInputLocale;
    int  _product;
    int  _siriAsrLocation;
    int  _siriDataSharingOptInStatus;
    SISchemaISOLocale * _siriInputLocale;
    int  _siriNlLocation;
    int  _viewMode;
}

@property (nonatomic) int audioInterface;
@property (nonatomic) bool hasAudioInterface;
@property (nonatomic) bool hasProduct;
@property (nonatomic) bool hasSiriAsrLocation;
@property (nonatomic) bool hasSiriDataSharingOptInStatus;
@property (nonatomic) bool hasSiriInputLocale;
@property (nonatomic) bool hasSiriNlLocation;
@property (nonatomic) bool hasViewMode;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int product;
@property (nonatomic) int siriAsrLocation;
@property (nonatomic) int siriDataSharingOptInStatus;
@property (nonatomic, retain) SISchemaISOLocale *siriInputLocale;
@property (nonatomic) int siriNlLocation;
@property (nonatomic) int viewMode;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (int)audioInterface;
- (void)deleteAudioInterface;
- (void)deleteProduct;
- (void)deleteSiriAsrLocation;
- (void)deleteSiriDataSharingOptInStatus;
- (void)deleteSiriInputLocale;
- (void)deleteSiriNlLocation;
- (void)deleteViewMode;
- (id)dictionaryRepresentation;
- (bool)hasAudioInterface;
- (bool)hasProduct;
- (bool)hasSiriAsrLocation;
- (bool)hasSiriDataSharingOptInStatus;
- (bool)hasSiriInputLocale;
- (bool)hasSiriNlLocation;
- (bool)hasViewMode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (int)product;
- (bool)readFrom:(id)arg1;
- (void)setAudioInterface:(int)arg1;
- (void)setHasAudioInterface:(bool)arg1;
- (void)setHasProduct:(bool)arg1;
- (void)setHasSiriAsrLocation:(bool)arg1;
- (void)setHasSiriDataSharingOptInStatus:(bool)arg1;
- (void)setHasSiriInputLocale:(bool)arg1;
- (void)setHasSiriNlLocation:(bool)arg1;
- (void)setHasViewMode:(bool)arg1;
- (void)setProduct:(int)arg1;
- (void)setSiriAsrLocation:(int)arg1;
- (void)setSiriDataSharingOptInStatus:(int)arg1;
- (void)setSiriInputLocale:(id)arg1;
- (void)setSiriNlLocation:(int)arg1;
- (void)setViewMode:(int)arg1;
- (int)siriAsrLocation;
- (int)siriDataSharingOptInStatus;
- (id)siriInputLocale;
- (int)siriNlLocation;
- (id)suppressMessageUnderConditions;
- (int)viewMode;
- (void)writeTo:(id)arg1;

@end
