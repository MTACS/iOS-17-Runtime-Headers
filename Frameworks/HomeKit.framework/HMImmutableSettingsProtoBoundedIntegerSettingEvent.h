
@interface HMImmutableSettingsProtoBoundedIntegerSettingEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int maxValue : 1; 
        unsigned int minValue : 1; 
        unsigned int stepValue : 1; 
    }  _has;
    long long  _maxValue;
    long long  _minValue;
    long long  _stepValue;
    HMImmutableSettingsProtoIntegerValueEvent * _value;
}

@property (nonatomic) bool hasMaxValue;
@property (nonatomic) bool hasMinValue;
@property (nonatomic) bool hasStepValue;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic) long long maxValue;
@property (nonatomic) long long minValue;
@property (nonatomic) long long stepValue;
@property (nonatomic, retain) HMImmutableSettingsProtoIntegerValueEvent *value;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxValue;
- (bool)hasMinValue;
- (bool)hasStepValue;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)maxValue;
- (void)mergeFrom:(id)arg1;
- (long long)minValue;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxValue:(bool)arg1;
- (void)setHasMinValue:(bool)arg1;
- (void)setHasStepValue:(bool)arg1;
- (void)setMaxValue:(long long)arg1;
- (void)setMinValue:(long long)arg1;
- (void)setStepValue:(long long)arg1;
- (void)setValue:(id)arg1;
- (long long)stepValue;
- (id)value;
- (void)writeTo:(id)arg1;

@end
