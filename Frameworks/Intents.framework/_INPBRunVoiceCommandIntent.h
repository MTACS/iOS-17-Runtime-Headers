
@interface _INPBRunVoiceCommandIntent : PBCodable <NSCopying, NSSecureCoding, _INPBRunVoiceCommandIntent> {
    _INPBIntentExecutionResult * _executionResult;
    struct { }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBVoiceCommandDeviceInformation * _originDevice;
    NSString * _previousIntentIdentifier;
    _INPBDataString * _voiceCommand;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _INPBIntentExecutionResult *executionResult;
@property (nonatomic, readonly) bool hasExecutionResult;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasOriginDevice;
@property (nonatomic, readonly) bool hasPreviousIntentIdentifier;
@property (nonatomic, readonly) bool hasVoiceCommand;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBVoiceCommandDeviceInformation *originDevice;
@property (nonatomic, copy) NSString *previousIntentIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, retain) _INPBDataString *voiceCommand;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)executionResult;
- (bool)hasExecutionResult;
- (bool)hasIntentMetadata;
- (bool)hasOriginDevice;
- (bool)hasPreviousIntentIdentifier;
- (bool)hasVoiceCommand;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)originDevice;
- (id)previousIntentIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setExecutionResult:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setOriginDevice:(id)arg1;
- (void)setPreviousIntentIdentifier:(id)arg1;
- (void)setVoiceCommand:(id)arg1;
- (id)voiceCommand;
- (void)writeTo:(id)arg1;

@end
