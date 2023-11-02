
@interface AWDWiFiDPSReport : PBCodable <NSCopying> {
    NSMutableArray * _dpsCounterSamples;
    AWDWiFiDPSEpilogue * _dpsEpiloge;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSMutableArray * _probeResults;
    AWDWiFiDPSSnapshot * _snapshot;
    NSMutableArray * _stallNotifications;
    unsigned long long  _timestamp;
    NSMutableArray * _usbEvents;
}

@property (nonatomic, retain) NSMutableArray *dpsCounterSamples;
@property (nonatomic, retain) AWDWiFiDPSEpilogue *dpsEpiloge;
@property (nonatomic, readonly) bool hasDpsEpiloge;
@property (nonatomic, readonly) bool hasSnapshot;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *probeResults;
@property (nonatomic, retain) AWDWiFiDPSSnapshot *snapshot;
@property (nonatomic, retain) NSMutableArray *stallNotifications;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSMutableArray *usbEvents;

+ (Class)dpsCounterSampleType;
+ (Class)probeResultType;
+ (Class)stallNotificationType;
+ (Class)usbEventType;

- (void)addDpsCounterSample:(id)arg1;
- (void)addProbeResult:(id)arg1;
- (void)addStallNotification:(id)arg1;
- (void)addUsbEvent:(id)arg1;
- (void)clearDpsCounterSamples;
- (void)clearProbeResults;
- (void)clearStallNotifications;
- (void)clearUsbEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dpsCounterSampleAtIndex:(unsigned long long)arg1;
- (id)dpsCounterSamples;
- (unsigned long long)dpsCounterSamplesCount;
- (id)dpsEpiloge;
- (bool)hasDpsEpiloge;
- (bool)hasSnapshot;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)probeResultAtIndex:(unsigned long long)arg1;
- (id)probeResults;
- (unsigned long long)probeResultsCount;
- (bool)readFrom:(id)arg1;
- (void)setDpsCounterSamples:(id)arg1;
- (void)setDpsEpiloge:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setProbeResults:(id)arg1;
- (void)setSnapshot:(id)arg1;
- (void)setStallNotifications:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUsbEvents:(id)arg1;
- (id)snapshot;
- (id)stallNotificationAtIndex:(unsigned long long)arg1;
- (id)stallNotifications;
- (unsigned long long)stallNotificationsCount;
- (unsigned long long)timestamp;
- (id)usbEventAtIndex:(unsigned long long)arg1;
- (id)usbEvents;
- (unsigned long long)usbEventsCount;
- (void)writeTo:(id)arg1;

@end
