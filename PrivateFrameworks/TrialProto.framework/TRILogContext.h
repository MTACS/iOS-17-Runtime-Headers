
@interface TRILogContext : PBCodable <NSCopying> {
    TRILogTime * _deviceLogTime;
    TRILogTime * _deviceTrackingTime;
    struct { 
        unsigned int processEventIndex : 1; 
        unsigned int projectId : 1; 
    }  _has;
    unsigned long long  _processEventIndex;
    unsigned int  _projectId;
    NSString * _trackingId;
}

@property (nonatomic, retain) TRILogTime *deviceLogTime;
@property (nonatomic, retain) TRILogTime *deviceTrackingTime;
@property (nonatomic, readonly) bool hasDeviceLogTime;
@property (nonatomic, readonly) bool hasDeviceTrackingTime;
@property (nonatomic) bool hasProcessEventIndex;
@property (nonatomic) bool hasProjectId;
@property (nonatomic, readonly) bool hasTrackingId;
@property (nonatomic) unsigned long long processEventIndex;
@property (nonatomic) unsigned int projectId;
@property (nonatomic, retain) NSString *trackingId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceLogTime;
- (id)deviceTrackingTime;
- (id)dictionaryRepresentation;
- (bool)hasDeviceLogTime;
- (bool)hasDeviceTrackingTime;
- (bool)hasProcessEventIndex;
- (bool)hasProjectId;
- (bool)hasTrackingId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)processEventIndex;
- (unsigned int)projectId;
- (bool)readFrom:(id)arg1;
- (void)setDeviceLogTime:(id)arg1;
- (void)setDeviceTrackingTime:(id)arg1;
- (void)setHasProcessEventIndex:(bool)arg1;
- (void)setHasProjectId:(bool)arg1;
- (void)setProcessEventIndex:(unsigned long long)arg1;
- (void)setProjectId:(unsigned int)arg1;
- (void)setTrackingId:(id)arg1;
- (id)trackingId;
- (void)writeTo:(id)arg1;

@end
