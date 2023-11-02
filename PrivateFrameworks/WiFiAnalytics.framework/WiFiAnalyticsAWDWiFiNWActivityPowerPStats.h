
@interface WiFiAnalyticsAWDWiFiNWActivityPowerPStats : PBCodable <NSCopying> {
    struct { 
        unsigned int kRadioPhyReportRxDur : 1; 
        unsigned int kRadioPhyReportTxDur : 1; 
    }  _has;
    unsigned long long  _kRadioPhyReportRxDur;
    unsigned long long  _kRadioPhyReportTxDur;
}

@property (nonatomic) bool hasKRadioPhyReportRxDur;
@property (nonatomic) bool hasKRadioPhyReportTxDur;
@property (nonatomic) unsigned long long kRadioPhyReportRxDur;
@property (nonatomic) unsigned long long kRadioPhyReportTxDur;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKRadioPhyReportRxDur;
- (bool)hasKRadioPhyReportTxDur;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)kRadioPhyReportRxDur;
- (unsigned long long)kRadioPhyReportTxDur;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasKRadioPhyReportRxDur:(bool)arg1;
- (void)setHasKRadioPhyReportTxDur:(bool)arg1;
- (void)setKRadioPhyReportRxDur:(unsigned long long)arg1;
- (void)setKRadioPhyReportTxDur:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
