
@interface ATXModeConfigurationUIFlowLoggingEvent : NSObject <ATXJSONSerializableProtocol, ATXProtoBufWrapper, BMStoreData> {
    NSArray * _candidateEntityIdentifiers;
    NSArray * _currentEntityIdentifiers;
    NSUUID * _dndModeUUID;
    NSDate * _eventDate;
    int  _modeConfigurationEntityType;
    long long  _modeConfigurationType;
    int  _modeConfigurationUI;
    NSArray * _previousEntityIdentifiers;
    NSArray * _suggestedEntityIdentifiers;
}

@property (nonatomic, readonly) NSArray *candidateEntityIdentifiers;
@property (nonatomic, readonly) NSArray *currentEntityIdentifiers;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSUUID *dndModeUUID;
@property (nonatomic, readonly) NSDate *eventDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int modeConfigurationEntityType;
@property (nonatomic, readonly) long long modeConfigurationType;
@property (nonatomic, readonly) int modeConfigurationUI;
@property (nonatomic, readonly) NSArray *previousEntityIdentifiers;
@property (nonatomic, readonly) NSArray *suggestedEntityIdentifiers;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)candidateEntityIdentifiers;
- (id)currentEntityIdentifiers;
- (unsigned int)dataVersion;
- (id)dndModeUUID;
- (id)encodeAsProto;
- (id)eventDate;
- (id)initFromJSON:(id)arg1;
- (id)initWithDndModeUUID:(id)arg1 modeConfigurationUI:(int)arg2 modeConfigurationEntityType:(int)arg3 modeConfigurationType:(long long)arg4 suggestedEntityIdentifiers:(id)arg5 candidateEntityIdentifiers:(id)arg6 previousEntityIdentifiers:(id)arg7 currentEntityIdentifiers:(id)arg8 eventDate:(id)arg9;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)json;
- (id)jsonRawData;
- (id)jsonRepresentation;
- (int)modeConfigurationEntityType;
- (long long)modeConfigurationType;
- (int)modeConfigurationUI;
- (id)previousEntityIdentifiers;
- (id)proto;
- (id)serialize;
- (id)suggestedEntityIdentifiers;

@end
