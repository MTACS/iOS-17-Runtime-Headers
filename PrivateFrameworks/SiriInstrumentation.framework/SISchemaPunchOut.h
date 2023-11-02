
@interface SISchemaPunchOut : SISchemaInstrumentationMessage {
    NSString * _aceID;
    NSString * _appID;
    struct { 
        unsigned int punchOutUI : 1; 
        unsigned int isPunchoutToHomeScreen : 1; 
    }  _has;
    bool  _hasAceID;
    bool  _hasAppID;
    bool  _hasUrlScheme;
    bool  _hasViewContainer;
    bool  _hasViewElementID;
    bool  _isPunchoutToHomeScreen;
    int  _punchOutUI;
    NSString * _urlScheme;
    SISchemaViewContainer * _viewContainer;
    NSData * _viewElementID;
}

@property (nonatomic, copy) NSString *aceID;
@property (nonatomic, copy) NSString *appID;
@property (nonatomic) bool hasAceID;
@property (nonatomic) bool hasAppID;
@property (nonatomic) bool hasIsPunchoutToHomeScreen;
@property (nonatomic) bool hasPunchOutUI;
@property (nonatomic) bool hasUrlScheme;
@property (nonatomic) bool hasViewContainer;
@property (nonatomic) bool hasViewElementID;
@property (nonatomic) bool isPunchoutToHomeScreen;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) int punchOutUI;
@property (nonatomic, copy) NSString *urlScheme;
@property (nonatomic, retain) SISchemaViewContainer *viewContainer;
@property (nonatomic, copy) NSData *viewElementID;

- (void).cxx_destruct;
- (id)aceID;
- (id)appID;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteAceID;
- (void)deleteAppID;
- (void)deleteIsPunchoutToHomeScreen;
- (void)deletePunchOutUI;
- (void)deleteUrlScheme;
- (void)deleteViewContainer;
- (void)deleteViewElementID;
- (id)dictionaryRepresentation;
- (bool)hasAceID;
- (bool)hasAppID;
- (bool)hasIsPunchoutToHomeScreen;
- (bool)hasPunchOutUI;
- (bool)hasUrlScheme;
- (bool)hasViewContainer;
- (bool)hasViewElementID;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPunchoutToHomeScreen;
- (id)jsonData;
- (int)punchOutUI;
- (bool)readFrom:(id)arg1;
- (void)setAceID:(id)arg1;
- (void)setAppID:(id)arg1;
- (void)setHasAceID:(bool)arg1;
- (void)setHasAppID:(bool)arg1;
- (void)setHasIsPunchoutToHomeScreen:(bool)arg1;
- (void)setHasPunchOutUI:(bool)arg1;
- (void)setHasUrlScheme:(bool)arg1;
- (void)setHasViewContainer:(bool)arg1;
- (void)setHasViewElementID:(bool)arg1;
- (void)setIsPunchoutToHomeScreen:(bool)arg1;
- (void)setPunchOutUI:(int)arg1;
- (void)setUrlScheme:(id)arg1;
- (void)setViewContainer:(id)arg1;
- (void)setViewElementID:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)urlScheme;
- (id)viewContainer;
- (id)viewElementID;
- (void)writeTo:(id)arg1;

@end
