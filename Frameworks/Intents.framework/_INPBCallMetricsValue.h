
@interface _INPBCallMetricsValue : PBCodable <NSCopying, NSSecureCoding, _INPBCallMetricsValue> {
    double  _callDuration;
    struct { 
        unsigned int callDuration : 1; 
        unsigned int timeToEstablish : 1; 
    }  _has;
    double  _timeToEstablish;
}

@property (nonatomic) double callDuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasCallDuration;
@property (nonatomic) bool hasTimeToEstablish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timeToEstablish;

+ (bool)supportsSecureCoding;

- (double)callDuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCallDuration;
- (bool)hasTimeToEstablish;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCallDuration:(double)arg1;
- (void)setHasCallDuration:(bool)arg1;
- (void)setHasTimeToEstablish:(bool)arg1;
- (void)setTimeToEstablish:(double)arg1;
- (double)timeToEstablish;
- (void)writeTo:(id)arg1;

@end
