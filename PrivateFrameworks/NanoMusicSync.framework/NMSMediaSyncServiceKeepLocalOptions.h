
@interface NMSMediaSyncServiceKeepLocalOptions : PBCodable <NSCopying> {
    NSString * _cellularBundleIdentifier;
    int  _downloadOffPowerPolicy;
    int  _downloadOnCellularPolicy;
    struct { 
        unsigned int timeout : 1; 
        unsigned int downloadOffPowerPolicy : 1; 
        unsigned int downloadOnCellularPolicy : 1; 
        unsigned int qualityOfService : 1; 
        unsigned int requiresValidation : 1; 
    }  _has;
    int  _qualityOfService;
    bool  _requiresValidation;
    double  _timeout;
}

@property (nonatomic, retain) NSString *cellularBundleIdentifier;
@property (nonatomic) int downloadOffPowerPolicy;
@property (nonatomic) int downloadOnCellularPolicy;
@property (nonatomic, readonly) bool hasCellularBundleIdentifier;
@property (nonatomic) bool hasDownloadOffPowerPolicy;
@property (nonatomic) bool hasDownloadOnCellularPolicy;
@property (nonatomic) bool hasQualityOfService;
@property (nonatomic) bool hasRequiresValidation;
@property (nonatomic) bool hasTimeout;
@property (nonatomic) int qualityOfService;
@property (nonatomic) bool requiresValidation;
@property (nonatomic) double timeout;

- (void).cxx_destruct;
- (int)StringAsDownloadOffPowerPolicy:(id)arg1;
- (int)StringAsDownloadOnCellularPolicy:(id)arg1;
- (int)StringAsQualityOfService:(id)arg1;
- (id)cellularBundleIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)downloadOffPowerPolicy;
- (id)downloadOffPowerPolicyAsString:(int)arg1;
- (int)downloadOnCellularPolicy;
- (id)downloadOnCellularPolicyAsString:(int)arg1;
- (bool)hasCellularBundleIdentifier;
- (bool)hasDownloadOffPowerPolicy;
- (bool)hasDownloadOnCellularPolicy;
- (bool)hasQualityOfService;
- (bool)hasRequiresValidation;
- (bool)hasTimeout;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)qualityOfService;
- (id)qualityOfServiceAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (bool)requiresValidation;
- (void)setCellularBundleIdentifier:(id)arg1;
- (void)setDownloadOffPowerPolicy:(int)arg1;
- (void)setDownloadOnCellularPolicy:(int)arg1;
- (void)setHasDownloadOffPowerPolicy:(bool)arg1;
- (void)setHasDownloadOnCellularPolicy:(bool)arg1;
- (void)setHasQualityOfService:(bool)arg1;
- (void)setHasRequiresValidation:(bool)arg1;
- (void)setHasTimeout:(bool)arg1;
- (void)setQualityOfService:(int)arg1;
- (void)setRequiresValidation:(bool)arg1;
- (void)setTimeout:(double)arg1;
- (double)timeout;
- (void)writeTo:(id)arg1;

@end
