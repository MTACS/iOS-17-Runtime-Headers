
@interface INFERENCESchemaINFERENCEContactResolverConfig : SISchemaInstrumentationMessage {
    int  _actionType;
    NSArray * _appBundleIds;
    int  _contactSearchSuggestedType;
    int  _domainsToSearchForHistory;
    struct { 
        unsigned int isSearchingFirstPartyContacts : 1; 
        unsigned int contactSearchSuggestedType : 1; 
        unsigned int domainsToSearchForHistory : 1; 
        unsigned int actionType : 1; 
    }  _has;
    bool  _isSearchingFirstPartyContacts;
}

@property (nonatomic) int actionType;
@property (nonatomic, copy) NSArray *appBundleIds;
@property (nonatomic) int contactSearchSuggestedType;
@property (nonatomic) int domainsToSearchForHistory;
@property (nonatomic) bool hasActionType;
@property (nonatomic) bool hasContactSearchSuggestedType;
@property (nonatomic) bool hasDomainsToSearchForHistory;
@property (nonatomic) bool hasIsSearchingFirstPartyContacts;
@property (nonatomic) bool isSearchingFirstPartyContacts;
@property (nonatomic, readonly) NSData *jsonData;

- (void).cxx_destruct;
- (int)actionType;
- (void)addAppBundleIds:(id)arg1;
- (id)appBundleIds;
- (id)appBundleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)appBundleIdsCount;
- (void)clearAppBundleIds;
- (int)contactSearchSuggestedType;
- (void)deleteActionType;
- (void)deleteAppBundleIds;
- (void)deleteContactSearchSuggestedType;
- (void)deleteDomainsToSearchForHistory;
- (void)deleteIsSearchingFirstPartyContacts;
- (id)dictionaryRepresentation;
- (int)domainsToSearchForHistory;
- (bool)hasActionType;
- (bool)hasContactSearchSuggestedType;
- (bool)hasDomainsToSearchForHistory;
- (bool)hasIsSearchingFirstPartyContacts;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSearchingFirstPartyContacts;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setActionType:(int)arg1;
- (void)setAppBundleIds:(id)arg1;
- (void)setContactSearchSuggestedType:(int)arg1;
- (void)setDomainsToSearchForHistory:(int)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasContactSearchSuggestedType:(bool)arg1;
- (void)setHasDomainsToSearchForHistory:(bool)arg1;
- (void)setHasIsSearchingFirstPartyContacts:(bool)arg1;
- (void)setIsSearchingFirstPartyContacts:(bool)arg1;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
