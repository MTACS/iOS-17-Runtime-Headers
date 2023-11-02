
@interface _INPBReportIncidentIntent : PBCodable <NSCopying, NSSecureCoding, _INPBReportIncidentIntent> {
    _INPBString * _additionalDetails;
    struct { 
        unsigned int isClear : 1; 
        unsigned int startTime : 1; 
    }  _has;
    _INPBSupportedTrafficIncidentType * _incidentType;
    _INPBIntentMetadata * _intentMetadata;
    bool  _isClear;
    double  _startTime;
    _INPBLocation * _userLocation;
}

@property (nonatomic, retain) _INPBString *additionalDetails;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasAdditionalDetails;
@property (nonatomic, readonly) bool hasIncidentType;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasIsClear;
@property (nonatomic) bool hasStartTime;
@property (nonatomic, readonly) bool hasUserLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBSupportedTrafficIncidentType *incidentType;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) bool isClear;
@property (nonatomic) double startTime;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBLocation *userLocation;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalDetails;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAdditionalDetails;
- (bool)hasIncidentType;
- (bool)hasIntentMetadata;
- (bool)hasIsClear;
- (bool)hasStartTime;
- (bool)hasUserLocation;
- (unsigned long long)hash;
- (id)incidentType;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isClear;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAdditionalDetails:(id)arg1;
- (void)setHasIsClear:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setIncidentType:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setIsClear:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (void)setUserLocation:(id)arg1;
- (double)startTime;
- (id)userLocation;
- (void)writeTo:(id)arg1;

@end
