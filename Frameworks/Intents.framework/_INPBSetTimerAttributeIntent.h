
@interface _INPBSetTimerAttributeIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSetTimerAttributeIntent> {
    struct { 
        unsigned int toDuration : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBTimer * _targetTimer;
    double  _toDuration;
    _INPBDataString * _toLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTargetTimer;
@property (nonatomic) bool hasToDuration;
@property (nonatomic, readonly) bool hasToLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBTimer *targetTimer;
@property (nonatomic) double toDuration;
@property (nonatomic, retain) _INPBDataString *toLabel;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIntentMetadata;
- (bool)hasTargetTimer;
- (bool)hasToDuration;
- (bool)hasToLabel;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasToDuration:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTargetTimer:(id)arg1;
- (void)setToDuration:(double)arg1;
- (void)setToLabel:(id)arg1;
- (id)targetTimer;
- (double)toDuration;
- (id)toLabel;
- (void)writeTo:(id)arg1;

@end
