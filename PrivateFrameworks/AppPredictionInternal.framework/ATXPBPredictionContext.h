
@interface ATXPBPredictionContext : PBCodable <NSCopying> {
    ATXPBPredictionAmbientLightContext * _ambientLightContext;
    ATXPBPredictionDeviceStateContext * _deviceStateContext;
    struct { 
        unsigned int isOverridden : 1; 
    }  _has;
    bool  _isOverridden;
    ATXPBPredictionLocationMotionContext * _locationMotionContext;
    ATXPBPredictionTimeContext * _timeContext;
    ATXPBPredictionUserContext * _userContext;
}

@property (nonatomic, retain) ATXPBPredictionAmbientLightContext *ambientLightContext;
@property (nonatomic, retain) ATXPBPredictionDeviceStateContext *deviceStateContext;
@property (nonatomic, readonly) bool hasAmbientLightContext;
@property (nonatomic, readonly) bool hasDeviceStateContext;
@property (nonatomic) bool hasIsOverridden;
@property (nonatomic, readonly) bool hasLocationMotionContext;
@property (nonatomic, readonly) bool hasTimeContext;
@property (nonatomic, readonly) bool hasUserContext;
@property (nonatomic) bool isOverridden;
@property (nonatomic, retain) ATXPBPredictionLocationMotionContext *locationMotionContext;
@property (nonatomic, retain) ATXPBPredictionTimeContext *timeContext;
@property (nonatomic, retain) ATXPBPredictionUserContext *userContext;

- (void).cxx_destruct;
- (id)ambientLightContext;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceStateContext;
- (id)dictionaryRepresentation;
- (bool)hasAmbientLightContext;
- (bool)hasDeviceStateContext;
- (bool)hasIsOverridden;
- (bool)hasLocationMotionContext;
- (bool)hasTimeContext;
- (bool)hasUserContext;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isOverridden;
- (id)locationMotionContext;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAmbientLightContext:(id)arg1;
- (void)setDeviceStateContext:(id)arg1;
- (void)setHasIsOverridden:(bool)arg1;
- (void)setIsOverridden:(bool)arg1;
- (void)setLocationMotionContext:(id)arg1;
- (void)setTimeContext:(id)arg1;
- (void)setUserContext:(id)arg1;
- (id)timeContext;
- (id)userContext;
- (void)writeTo:(id)arg1;

@end
