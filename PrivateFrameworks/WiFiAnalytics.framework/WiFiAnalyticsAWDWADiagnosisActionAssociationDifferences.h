
@interface WiFiAnalyticsAWDWADiagnosisActionAssociationDifferences : PBCodable <NSCopying> {
    unsigned int  _additionalInfo;
    bool  _changedChannel;
    bool  _changedDNSPrimary;
    bool  _changedDNSSecondary;
    bool  _changedMAC;
    int  _eventType;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int additionalInfo : 1; 
        unsigned int eventType : 1; 
        unsigned int changedChannel : 1; 
        unsigned int changedDNSPrimary : 1; 
        unsigned int changedDNSSecondary : 1; 
        unsigned int changedMAC : 1; 
        unsigned int newBSSID : 1; 
    }  _has;
    bool  _newBSSID;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int additionalInfo;
@property (nonatomic) bool changedChannel;
@property (nonatomic) bool changedDNSPrimary;
@property (nonatomic) bool changedDNSSecondary;
@property (nonatomic) bool changedMAC;
@property (nonatomic) int eventType;
@property (nonatomic) bool hasAdditionalInfo;
@property (nonatomic) bool hasChangedChannel;
@property (nonatomic) bool hasChangedDNSPrimary;
@property (nonatomic) bool hasChangedDNSSecondary;
@property (nonatomic) bool hasChangedMAC;
@property (nonatomic) bool hasEventType;
@property (nonatomic) bool hasNewBSSID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool newBSSID;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsEventType:(id)arg1;
- (unsigned int)additionalInfo;
- (bool)changedChannel;
- (bool)changedDNSPrimary;
- (bool)changedDNSSecondary;
- (bool)changedMAC;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)eventType;
- (id)eventTypeAsString:(int)arg1;
- (bool)hasAdditionalInfo;
- (bool)hasChangedChannel;
- (bool)hasChangedDNSPrimary;
- (bool)hasChangedDNSSecondary;
- (bool)hasChangedMAC;
- (bool)hasEventType;
- (bool)hasNewBSSID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)newBSSID;
- (bool)readFrom:(id)arg1;
- (void)setAdditionalInfo:(unsigned int)arg1;
- (void)setChangedChannel:(bool)arg1;
- (void)setChangedDNSPrimary:(bool)arg1;
- (void)setChangedDNSSecondary:(bool)arg1;
- (void)setChangedMAC:(bool)arg1;
- (void)setEventType:(int)arg1;
- (void)setHasAdditionalInfo:(bool)arg1;
- (void)setHasChangedChannel:(bool)arg1;
- (void)setHasChangedDNSPrimary:(bool)arg1;
- (void)setHasChangedDNSSecondary:(bool)arg1;
- (void)setHasChangedMAC:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setHasNewBSSID:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNewBSSID:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
