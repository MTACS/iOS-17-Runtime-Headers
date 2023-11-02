
@interface NSSLegalDocumentsRespMsg : PBCodable <NSCopying> {
    NSString * _buildVersion;
    NSData * _builtinApps;
    struct { 
        unsigned int sarUrlAdded : 1; 
    }  _has;
    NSData * _legalNotices;
    NSData * _license;
    NSData * _sarStatement;
    bool  _sarUrlAdded;
}

@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic, retain) NSData *builtinApps;
@property (nonatomic, readonly) bool hasBuildVersion;
@property (nonatomic, readonly) bool hasBuiltinApps;
@property (nonatomic, readonly) bool hasLegalNotices;
@property (nonatomic, readonly) bool hasLicense;
@property (nonatomic, readonly) bool hasSarStatement;
@property (nonatomic) bool hasSarUrlAdded;
@property (nonatomic, retain) NSData *legalNotices;
@property (nonatomic, retain) NSData *license;
@property (nonatomic, retain) NSData *sarStatement;
@property (nonatomic) bool sarUrlAdded;

- (void).cxx_destruct;
- (id)buildVersion;
- (id)builtinApps;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBuildVersion;
- (bool)hasBuiltinApps;
- (bool)hasLegalNotices;
- (bool)hasLicense;
- (bool)hasSarStatement;
- (bool)hasSarUrlAdded;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)legalNotices;
- (id)license;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sarStatement;
- (bool)sarUrlAdded;
- (void)setBuildVersion:(id)arg1;
- (void)setBuiltinApps:(id)arg1;
- (void)setHasSarUrlAdded:(bool)arg1;
- (void)setLegalNotices:(id)arg1;
- (void)setLicense:(id)arg1;
- (void)setSarStatement:(id)arg1;
- (void)setSarUrlAdded:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
