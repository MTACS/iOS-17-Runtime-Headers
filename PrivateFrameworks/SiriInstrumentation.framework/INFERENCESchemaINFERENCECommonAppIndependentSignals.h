
@interface INFERENCESchemaINFERENCECommonAppIndependentSignals : SISchemaInstrumentationMessage {
    int  _appResolutionType;
    int  _appSelectionUses;
    int  _clientDayOfWeek;
    struct { 
        unsigned int rawLanguage : 1; 
        unsigned int rawLocale : 1; 
        unsigned int rawStateOrProvince : 1; 
        unsigned int rawCountry : 1; 
        unsigned int rawRequestDeviceCategory : 1; 
        unsigned int clientDayOfWeek : 1; 
        unsigned int rawClientHourOfDay : 1; 
        unsigned int isClientDaylight : 1; 
        unsigned int appResolutionType : 1; 
        unsigned int sirikitResponseCode : 1; 
        unsigned int appSelectionUses : 1; 
        unsigned int modelVersion : 1; 
    }  _has;
    bool  _isClientDaylight;
    unsigned int  _modelVersion;
    int  _rawClientHourOfDay;
    long long  _rawCountry;
    long long  _rawLanguage;
    long long  _rawLocale;
    long long  _rawRequestDeviceCategory;
    long long  _rawStateOrProvince;
    int  _sirikitResponseCode;
}

@property (nonatomic) int appResolutionType;
@property (nonatomic) int appSelectionUses;
@property (nonatomic) int clientDayOfWeek;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic) bool hasAppResolutionType;
@property (nonatomic) bool hasAppSelectionUses;
@property (nonatomic) bool hasClientDayOfWeek;
@property (nonatomic) bool hasIsClientDaylight;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic) bool hasRawClientHourOfDay;
@property (nonatomic) bool hasRawCountry;
@property (nonatomic) bool hasRawLanguage;
@property (nonatomic) bool hasRawLocale;
@property (nonatomic) bool hasRawRequestDeviceCategory;
@property (nonatomic) bool hasRawStateOrProvince;
@property (nonatomic) bool hasSirikitResponseCode;
@property (nonatomic) bool isClientDaylight;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int modelVersion;
@property (nonatomic) int rawClientHourOfDay;
@property (nonatomic) long long rawCountry;
@property (nonatomic) long long rawLanguage;
@property (nonatomic) long long rawLocale;
@property (nonatomic) long long rawRequestDeviceCategory;
@property (nonatomic) long long rawStateOrProvince;
@property (nonatomic) int sirikitResponseCode;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (int)appResolutionType;
- (int)appSelectionUses;
- (int)clientDayOfWeek;
- (void)deleteAppResolutionType;
- (void)deleteAppSelectionUses;
- (void)deleteClientDayOfWeek;
- (void)deleteIsClientDaylight;
- (void)deleteModelVersion;
- (void)deleteRawClientHourOfDay;
- (void)deleteRawCountry;
- (void)deleteRawLanguage;
- (void)deleteRawLocale;
- (void)deleteRawRequestDeviceCategory;
- (void)deleteRawStateOrProvince;
- (void)deleteSirikitResponseCode;
- (id)dictionaryRepresentation;
- (bool)hasAppResolutionType;
- (bool)hasAppSelectionUses;
- (bool)hasClientDayOfWeek;
- (bool)hasIsClientDaylight;
- (bool)hasModelVersion;
- (bool)hasRawClientHourOfDay;
- (bool)hasRawCountry;
- (bool)hasRawLanguage;
- (bool)hasRawLocale;
- (bool)hasRawRequestDeviceCategory;
- (bool)hasRawStateOrProvince;
- (bool)hasSirikitResponseCode;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isClientDaylight;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)modelVersion;
- (int)rawClientHourOfDay;
- (long long)rawCountry;
- (long long)rawLanguage;
- (long long)rawLocale;
- (long long)rawRequestDeviceCategory;
- (long long)rawStateOrProvince;
- (bool)readFrom:(id)arg1;
- (void)setAppResolutionType:(int)arg1;
- (void)setAppSelectionUses:(int)arg1;
- (void)setClientDayOfWeek:(int)arg1;
- (void)setHasAppResolutionType:(bool)arg1;
- (void)setHasAppSelectionUses:(bool)arg1;
- (void)setHasClientDayOfWeek:(bool)arg1;
- (void)setHasIsClientDaylight:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setHasRawClientHourOfDay:(bool)arg1;
- (void)setHasRawCountry:(bool)arg1;
- (void)setHasRawLanguage:(bool)arg1;
- (void)setHasRawLocale:(bool)arg1;
- (void)setHasRawRequestDeviceCategory:(bool)arg1;
- (void)setHasRawStateOrProvince:(bool)arg1;
- (void)setHasSirikitResponseCode:(bool)arg1;
- (void)setIsClientDaylight:(bool)arg1;
- (void)setModelVersion:(unsigned int)arg1;
- (void)setRawClientHourOfDay:(int)arg1;
- (void)setRawCountry:(long long)arg1;
- (void)setRawLanguage:(long long)arg1;
- (void)setRawLocale:(long long)arg1;
- (void)setRawRequestDeviceCategory:(long long)arg1;
- (void)setRawStateOrProvince:(long long)arg1;
- (void)setSirikitResponseCode:(int)arg1;
- (int)sirikitResponseCode;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriSignals.framework/SiriSignals

- (id)description;

@end
