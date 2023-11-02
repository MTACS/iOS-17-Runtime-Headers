
@interface FLOWSchemaFLOWAppContext : SISchemaInstrumentationMessage {
    int  _appResolutionType;
    NSString * _appVersion;
    NSString * _bundleId;
    struct { 
        unsigned int isSmartEnoughAppSelectionUsed : 1; 
        unsigned int appResolutionType : 1; 
    }  _has;
    bool  _hasAppVersion;
    bool  _hasBundleId;
    bool  _isSmartEnoughAppSelectionUsed;
}

@property (nonatomic) int appResolutionType;
@property (nonatomic, copy) NSString *appVersion;
@property (nonatomic, copy) NSString *bundleId;
@property (nonatomic) bool hasAppResolutionType;
@property (nonatomic) bool hasAppVersion;
@property (nonatomic) bool hasBundleId;
@property (nonatomic) bool hasIsSmartEnoughAppSelectionUsed;
@property (nonatomic) bool isSmartEnoughAppSelectionUsed;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (int)appResolutionType;
- (id)appVersion;
- (id)bundleId;
- (void)deleteAppResolutionType;
- (void)deleteAppVersion;
- (void)deleteBundleId;
- (void)deleteIsSmartEnoughAppSelectionUsed;
- (id)dictionaryRepresentation;
- (bool)hasAppResolutionType;
- (bool)hasAppVersion;
- (bool)hasBundleId;
- (bool)hasIsSmartEnoughAppSelectionUsed;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSmartEnoughAppSelectionUsed;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setAppResolutionType:(int)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setHasAppResolutionType:(bool)arg1;
- (void)setHasAppVersion:(bool)arg1;
- (void)setHasBundleId:(bool)arg1;
- (void)setHasIsSmartEnoughAppSelectionUsed:(bool)arg1;
- (void)setIsSmartEnoughAppSelectionUsed:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
