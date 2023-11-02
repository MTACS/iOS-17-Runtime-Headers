
@interface _INPBSetSeatSettingsInCarIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSetSeatSettingsInCarIntent> {
    _INPBDataString * _carName;
    bool  _enableCooling;
    bool  _enableHeating;
    bool  _enableMassage;
    struct { 
        unsigned int enableCooling : 1; 
        unsigned int enableHeating : 1; 
        unsigned int enableMassage : 1; 
        unsigned int relativeLevelSetting : 1; 
        unsigned int seat : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBInteger * _level;
    int  _relativeLevelSetting;
    int  _seat;
}

@property (nonatomic, retain) _INPBDataString *carName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableCooling;
@property (nonatomic) bool enableHeating;
@property (nonatomic) bool enableMassage;
@property (nonatomic, readonly) bool hasCarName;
@property (nonatomic) bool hasEnableCooling;
@property (nonatomic) bool hasEnableHeating;
@property (nonatomic) bool hasEnableMassage;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasLevel;
@property (nonatomic) bool hasRelativeLevelSetting;
@property (nonatomic) bool hasSeat;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBInteger *level;
@property (nonatomic) int relativeLevelSetting;
@property (nonatomic) int seat;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsRelativeLevelSetting:(id)arg1;
- (int)StringAsSeat:(id)arg1;
- (id)carName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)enableCooling;
- (bool)enableHeating;
- (bool)enableMassage;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasCarName;
- (bool)hasEnableCooling;
- (bool)hasEnableHeating;
- (bool)hasEnableMassage;
- (bool)hasIntentMetadata;
- (bool)hasLevel;
- (bool)hasRelativeLevelSetting;
- (bool)hasSeat;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)level;
- (bool)readFrom:(id)arg1;
- (int)relativeLevelSetting;
- (id)relativeLevelSettingAsString:(int)arg1;
- (int)seat;
- (id)seatAsString:(int)arg1;
- (void)setCarName:(id)arg1;
- (void)setEnableCooling:(bool)arg1;
- (void)setEnableHeating:(bool)arg1;
- (void)setEnableMassage:(bool)arg1;
- (void)setHasEnableCooling:(bool)arg1;
- (void)setHasEnableHeating:(bool)arg1;
- (void)setHasEnableMassage:(bool)arg1;
- (void)setHasRelativeLevelSetting:(bool)arg1;
- (void)setHasSeat:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setLevel:(id)arg1;
- (void)setRelativeLevelSetting:(int)arg1;
- (void)setSeat:(int)arg1;
- (void)writeTo:(id)arg1;

@end
