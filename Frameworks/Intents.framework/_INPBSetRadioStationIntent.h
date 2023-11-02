
@interface _INPBSetRadioStationIntent : PBCodable <NSCopying, NSSecureCoding, _INPBSetRadioStationIntent> {
    _INPBString * _channel;
    _INPBDouble * _frequency;
    struct { 
        unsigned int radioType : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBInteger * _presetNumber;
    int  _radioType;
    _INPBString * _stationName;
}

@property (nonatomic, retain) _INPBString *channel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBDouble *frequency;
@property (nonatomic, readonly) bool hasChannel;
@property (nonatomic, readonly) bool hasFrequency;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasPresetNumber;
@property (nonatomic) bool hasRadioType;
@property (nonatomic, readonly) bool hasStationName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBInteger *presetNumber;
@property (nonatomic) int radioType;
@property (nonatomic, retain) _INPBString *stationName;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsRadioType:(id)arg1;
- (id)channel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)frequency;
- (bool)hasChannel;
- (bool)hasFrequency;
- (bool)hasIntentMetadata;
- (bool)hasPresetNumber;
- (bool)hasRadioType;
- (bool)hasStationName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)presetNumber;
- (int)radioType;
- (id)radioTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChannel:(id)arg1;
- (void)setFrequency:(id)arg1;
- (void)setHasRadioType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setPresetNumber:(id)arg1;
- (void)setRadioType:(int)arg1;
- (void)setStationName:(id)arg1;
- (id)stationName;
- (void)writeTo:(id)arg1;

@end
