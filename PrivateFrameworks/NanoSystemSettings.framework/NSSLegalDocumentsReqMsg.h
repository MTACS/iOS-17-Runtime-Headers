
@interface NSSLegalDocumentsReqMsg : PBCodable <NSCopying> {
    bool  _addUrlToSAR;
    bool  _fetchBuiltinApps;
    struct { 
        unsigned int addUrlToSAR : 1; 
        unsigned int fetchBuiltinApps : 1; 
    }  _has;
    NSMutableArray * _legacyPreferredLanguages;
    NSMutableArray * _preferredLanguages;
}

@property (nonatomic) bool addUrlToSAR;
@property (nonatomic) bool fetchBuiltinApps;
@property (nonatomic) bool hasAddUrlToSAR;
@property (nonatomic) bool hasFetchBuiltinApps;
@property (nonatomic, retain) NSMutableArray *legacyPreferredLanguages;
@property (nonatomic, retain) NSMutableArray *preferredLanguages;

+ (Class)legacyPreferredLanguagesType;
+ (Class)preferredLanguagesType;

- (void).cxx_destruct;
- (void)addLegacyPreferredLanguages:(id)arg1;
- (void)addPreferredLanguages:(id)arg1;
- (bool)addUrlToSAR;
- (void)clearLegacyPreferredLanguages;
- (void)clearPreferredLanguages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)fetchBuiltinApps;
- (bool)hasAddUrlToSAR;
- (bool)hasFetchBuiltinApps;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)legacyPreferredLanguages;
- (id)legacyPreferredLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)legacyPreferredLanguagesCount;
- (void)mergeFrom:(id)arg1;
- (id)preferredLanguages;
- (id)preferredLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)preferredLanguagesCount;
- (bool)readFrom:(id)arg1;
- (void)setAddUrlToSAR:(bool)arg1;
- (void)setFetchBuiltinApps:(bool)arg1;
- (void)setHasAddUrlToSAR:(bool)arg1;
- (void)setHasFetchBuiltinApps:(bool)arg1;
- (void)setLegacyPreferredLanguages:(id)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (void)writeTo:(id)arg1;

@end
