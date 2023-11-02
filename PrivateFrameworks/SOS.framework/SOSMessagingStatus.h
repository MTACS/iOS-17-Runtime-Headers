
@interface SOSMessagingStatus : PBCodable <NSCopying> {
    int  _flowState;
    struct { 
        unsigned int timeOfDetection : 1; 
        unsigned int timeOfResolution : 1; 
        unsigned int flowState : 1; 
        unsigned int resolution : 1; 
        unsigned int trigger : 1; 
        unsigned int isPairedDeviceStatus : 1; 
    }  _has;
    bool  _isPairedDeviceStatus;
    int  _resolution;
    double  _timeOfDetection;
    double  _timeOfResolution;
    int  _trigger;
    NSString * _uuid;
}

@property (nonatomic) int flowState;
@property (nonatomic) bool hasFlowState;
@property (nonatomic) bool hasIsPairedDeviceStatus;
@property (nonatomic) bool hasResolution;
@property (nonatomic) bool hasTimeOfDetection;
@property (nonatomic) bool hasTimeOfResolution;
@property (nonatomic) bool hasTrigger;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic) bool isPairedDeviceStatus;
@property (nonatomic) int resolution;
@property (nonatomic, readonly) SOSStatus *sosStatus;
@property (nonatomic) double timeOfDetection;
@property (nonatomic) double timeOfResolution;
@property (nonatomic) int trigger;
@property (nonatomic, retain) NSString *uuid;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)flowState;
- (bool)hasFlowState;
- (bool)hasIsPairedDeviceStatus;
- (bool)hasResolution;
- (bool)hasTimeOfDetection;
- (bool)hasTimeOfResolution;
- (bool)hasTrigger;
- (bool)hasUuid;
- (unsigned long long)hash;
- (id)initWithSOSStatus:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPairedDeviceStatus;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)resolution;
- (void)setFlowState:(int)arg1;
- (void)setHasFlowState:(bool)arg1;
- (void)setHasIsPairedDeviceStatus:(bool)arg1;
- (void)setHasResolution:(bool)arg1;
- (void)setHasTimeOfDetection:(bool)arg1;
- (void)setHasTimeOfResolution:(bool)arg1;
- (void)setHasTrigger:(bool)arg1;
- (void)setIsPairedDeviceStatus:(bool)arg1;
- (void)setResolution:(int)arg1;
- (void)setTimeOfDetection:(double)arg1;
- (void)setTimeOfResolution:(double)arg1;
- (void)setTrigger:(int)arg1;
- (void)setUuid:(id)arg1;
- (id)sosStatus;
- (double)timeOfDetection;
- (double)timeOfResolution;
- (int)trigger;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end
