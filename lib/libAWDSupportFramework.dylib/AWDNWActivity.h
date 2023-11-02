
@interface AWDNWActivity : PBCodable <NSCopying> {
    unsigned long long  _activityDomain;
    unsigned long long  _activityLabel;
    NSString * _activityUUID;
    NSString * _bundleID;
    AWDNWDeviceReport * _deviceReport;
    struct { 
        unsigned int activityDomain : 1; 
        unsigned int activityLabel : 1; 
        unsigned int investigationID : 1; 
        unsigned int timestamp : 1; 
        unsigned int isRetry : 1; 
    }  _has;
    unsigned long long  _investigationID;
    bool  _isRetry;
    AWDNWL2Report * _l2Report;
    NSString * _parentActivityUUID;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned long long activityDomain;
@property (nonatomic) unsigned long long activityLabel;
@property (nonatomic, retain) NSString *activityUUID;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) AWDNWDeviceReport *deviceReport;
@property (nonatomic) bool hasActivityDomain;
@property (nonatomic) bool hasActivityLabel;
@property (nonatomic, readonly) bool hasActivityUUID;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic, readonly) bool hasDeviceReport;
@property (nonatomic) bool hasInvestigationID;
@property (nonatomic) bool hasIsRetry;
@property (nonatomic, readonly) bool hasL2Report;
@property (nonatomic, readonly) bool hasParentActivityUUID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned long long investigationID;
@property (nonatomic) bool isRetry;
@property (nonatomic, retain) AWDNWL2Report *l2Report;
@property (nonatomic, retain) NSString *parentActivityUUID;
@property (nonatomic) unsigned long long timestamp;

- (unsigned long long)activityDomain;
- (unsigned long long)activityLabel;
- (id)activityUUID;
- (id)bundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceReport;
- (id)dictionaryRepresentation;
- (bool)hasActivityDomain;
- (bool)hasActivityLabel;
- (bool)hasActivityUUID;
- (bool)hasBundleID;
- (bool)hasDeviceReport;
- (bool)hasInvestigationID;
- (bool)hasIsRetry;
- (bool)hasL2Report;
- (bool)hasParentActivityUUID;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (unsigned long long)investigationID;
- (bool)isEqual:(id)arg1;
- (bool)isRetry;
- (id)l2Report;
- (void)mergeFrom:(id)arg1;
- (id)parentActivityUUID;
- (bool)readFrom:(id)arg1;
- (void)setActivityDomain:(unsigned long long)arg1;
- (void)setActivityLabel:(unsigned long long)arg1;
- (void)setActivityUUID:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDeviceReport:(id)arg1;
- (void)setHasActivityDomain:(bool)arg1;
- (void)setHasActivityLabel:(bool)arg1;
- (void)setHasInvestigationID:(bool)arg1;
- (void)setHasIsRetry:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setInvestigationID:(unsigned long long)arg1;
- (void)setIsRetry:(bool)arg1;
- (void)setL2Report:(id)arg1;
- (void)setParentActivityUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
