
@interface _INPBCreateAlarmIntentResponse : PBCodable <NSCopying, NSSecureCoding, _INPBCreateAlarmIntentResponse> {
    _INPBAlarm * _createdAlarm;
    struct { 
        unsigned int successCode : 1; 
    }  _has;
    int  _successCode;
}

@property (nonatomic, retain) _INPBAlarm *createdAlarm;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCreatedAlarm;
@property (nonatomic) bool hasSuccessCode;
@property (readonly) unsigned long long hash;
@property (nonatomic) int successCode;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsSuccessCode:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdAlarm;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCreatedAlarm;
- (bool)hasSuccessCode;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCreatedAlarm:(id)arg1;
- (void)setHasSuccessCode:(bool)arg1;
- (void)setSuccessCode:(int)arg1;
- (int)successCode;
- (id)successCodeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
