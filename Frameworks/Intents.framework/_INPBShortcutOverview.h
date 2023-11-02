
@interface _INPBShortcutOverview : PBCodable <NSCopying, NSSecureCoding, _INPBShortcutOverview> {
    _INPBDataString * _descriptiveText;
    struct { }  _has;
    _INPBImageValue * _icon;
    _INPBDataString * _name;
    NSArray * _steps;
    _INPBDataString * _voiceCommand;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBDataString *descriptiveText;
@property (nonatomic, readonly) bool hasDescriptiveText;
@property (nonatomic, readonly) bool hasIcon;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasVoiceCommand;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBImageValue *icon;
@property (nonatomic, retain) _INPBDataString *name;
@property (nonatomic, copy) NSArray *steps;
@property (nonatomic, readonly) unsigned long long stepsCount;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBDataString *voiceCommand;

+ (Class)stepsType;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addSteps:(id)arg1;
- (void)clearSteps;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptiveText;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDescriptiveText;
- (bool)hasIcon;
- (bool)hasName;
- (bool)hasVoiceCommand;
- (unsigned long long)hash;
- (id)icon;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setDescriptiveText:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSteps:(id)arg1;
- (void)setVoiceCommand:(id)arg1;
- (id)steps;
- (id)stepsAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepsCount;
- (id)voiceCommand;
- (void)writeTo:(id)arg1;

@end
