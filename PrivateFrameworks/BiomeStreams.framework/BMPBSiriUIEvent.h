
@interface BMPBSiriUIEvent : PBCodable <NSCopying> {
    double  _absoluteTimestamp;
    NSString * _dismissalReason;
    struct { 
        unsigned int absoluteTimestamp : 1; 
        unsigned int starting : 1; 
    }  _has;
    NSString * _sessionID;
    bool  _starting;
    NSString * _uuid;
    NSString * _viewMode;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, retain) NSString *dismissalReason;
@property (nonatomic) bool hasAbsoluteTimestamp;
@property (nonatomic, readonly) bool hasDismissalReason;
@property (nonatomic, readonly) bool hasSessionID;
@property (nonatomic) bool hasStarting;
@property (nonatomic, readonly) bool hasUuid;
@property (nonatomic, readonly) bool hasViewMode;
@property (nonatomic, retain) NSString *sessionID;
@property (nonatomic) bool starting;
@property (nonatomic, retain) NSString *uuid;
@property (nonatomic, retain) NSString *viewMode;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dismissalReason;
- (bool)hasAbsoluteTimestamp;
- (bool)hasDismissalReason;
- (bool)hasSessionID;
- (bool)hasStarting;
- (bool)hasUuid;
- (bool)hasViewMode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionID;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setDismissalReason:(id)arg1;
- (void)setHasAbsoluteTimestamp:(bool)arg1;
- (void)setHasStarting:(bool)arg1;
- (void)setSessionID:(id)arg1;
- (void)setStarting:(bool)arg1;
- (void)setUuid:(id)arg1;
- (void)setViewMode:(id)arg1;
- (bool)starting;
- (id)uuid;
- (id)viewMode;
- (void)writeTo:(id)arg1;

@end
