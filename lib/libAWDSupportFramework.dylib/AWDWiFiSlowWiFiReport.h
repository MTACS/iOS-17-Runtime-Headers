
@interface AWDWiFiSlowWiFiReport : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    NSMutableArray * _linkQualSamples;
    AWDSlowWiFiNotification * _slowNotice;
    unsigned long long  _timestamp;
    NSMutableArray * _usbEvents;
}

@property (nonatomic, readonly) bool hasSlowNotice;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *linkQualSamples;
@property (nonatomic, retain) AWDSlowWiFiNotification *slowNotice;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic, retain) NSMutableArray *usbEvents;

+ (Class)linkQualSampleType;
+ (Class)usbEventType;

- (void)addLinkQualSample:(id)arg1;
- (void)addUsbEvent:(id)arg1;
- (void)clearLinkQualSamples;
- (void)clearUsbEvents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSlowNotice;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)linkQualSampleAtIndex:(unsigned long long)arg1;
- (id)linkQualSamples;
- (unsigned long long)linkQualSamplesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setLinkQualSamples:(id)arg1;
- (void)setSlowNotice:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUsbEvents:(id)arg1;
- (id)slowNotice;
- (unsigned long long)timestamp;
- (id)usbEventAtIndex:(unsigned long long)arg1;
- (id)usbEvents;
- (unsigned long long)usbEventsCount;
- (void)writeTo:(id)arg1;

@end
