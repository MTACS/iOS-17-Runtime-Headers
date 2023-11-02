
@interface AWDNWActivityEpilogue : PBCodable <NSCopying> {
    AWDNWActivity * _activity;
    int  _completionReason;
    AWDNWDeviceReport * _deviceReport;
    unsigned long long  _durationMsecs;
    unsigned long long  _fragmentsQuenched;
    struct { 
        unsigned int durationMsecs : 1; 
        unsigned int fragmentsQuenched : 1; 
        unsigned int timestamp : 1; 
        unsigned int completionReason : 1; 
        unsigned int underlyingErrorCode : 1; 
        unsigned int underlyingErrorDomain : 1; 
    }  _has;
    AWDNWL2Report * _l2Report;
    unsigned long long  _timestamp;
    int  _underlyingErrorCode;
    int  _underlyingErrorDomain;
}

@property (nonatomic, retain) AWDNWActivity *activity;
@property (nonatomic) int completionReason;
@property (nonatomic, retain) AWDNWDeviceReport *deviceReport;
@property (nonatomic) unsigned long long durationMsecs;
@property (nonatomic) unsigned long long fragmentsQuenched;
@property (nonatomic, readonly) bool hasActivity;
@property (nonatomic) bool hasCompletionReason;
@property (nonatomic, readonly) bool hasDeviceReport;
@property (nonatomic) bool hasDurationMsecs;
@property (nonatomic) bool hasFragmentsQuenched;
@property (nonatomic, readonly) bool hasL2Report;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUnderlyingErrorCode;
@property (nonatomic) bool hasUnderlyingErrorDomain;
@property (nonatomic, retain) AWDNWL2Report *l2Report;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int underlyingErrorCode;
@property (nonatomic) int underlyingErrorDomain;

- (int)StringAsCompletionReason:(id)arg1;
- (id)activity;
- (int)completionReason;
- (id)completionReasonAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceReport;
- (id)dictionaryRepresentation;
- (unsigned long long)durationMsecs;
- (unsigned long long)fragmentsQuenched;
- (bool)hasActivity;
- (bool)hasCompletionReason;
- (bool)hasDeviceReport;
- (bool)hasDurationMsecs;
- (bool)hasFragmentsQuenched;
- (bool)hasL2Report;
- (bool)hasTimestamp;
- (bool)hasUnderlyingErrorCode;
- (bool)hasUnderlyingErrorDomain;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)l2Report;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setActivity:(id)arg1;
- (void)setCompletionReason:(int)arg1;
- (void)setDeviceReport:(id)arg1;
- (void)setDurationMsecs:(unsigned long long)arg1;
- (void)setFragmentsQuenched:(unsigned long long)arg1;
- (void)setHasCompletionReason:(bool)arg1;
- (void)setHasDurationMsecs:(bool)arg1;
- (void)setHasFragmentsQuenched:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUnderlyingErrorCode:(bool)arg1;
- (void)setHasUnderlyingErrorDomain:(bool)arg1;
- (void)setL2Report:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUnderlyingErrorCode:(int)arg1;
- (void)setUnderlyingErrorDomain:(int)arg1;
- (unsigned long long)timestamp;
- (int)underlyingErrorCode;
- (int)underlyingErrorDomain;
- (void)writeTo:(id)arg1;

@end
