
@interface BMUserFocusComputedModeEvent : BMEventBase <BMEventBinaryStepping, BMProtoBufWrapper, BMStoreData> {
    NSString * _mode;
    long long  _modeSemanticType;
    unsigned long long  _modeUpdateReason;
    long long  _modeUpdateSource;
    NSString * _semanticModeIdentifier;
    bool  _starting;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *mode;
@property (nonatomic) long long modeSemanticType;
@property (nonatomic) unsigned long long modeUpdateReason;
@property (nonatomic) long long modeUpdateSource;
@property (nonatomic, copy) NSString *semanticModeIdentifier;
@property (getter=isStarting, nonatomic) bool starting;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (unsigned long long)hash;
- (id)initWithMode:(id)arg1 semanticModeIdentifier:(id)arg2 starting:(bool)arg3 modeUpdateReason:(unsigned long long)arg4 modeSemanticType:(long long)arg5 modeUpdateSource:(long long)arg6;
- (id)initWithMode:(id)arg1 starting:(bool)arg2;
- (id)initWithMode:(id)arg1 starting:(bool)arg2 modeUpdateReason:(unsigned long long)arg3 modeSemanticType:(long long)arg4;
- (id)initWithMode:(id)arg1 starting:(bool)arg2 modeUpdateReason:(unsigned long long)arg3 modeSemanticType:(long long)arg4 modeUpdateSource:(long long)arg5;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isStarting;
- (id)json;
- (id)jsonDict;
- (id)mode;
- (long long)modeSemanticType;
- (unsigned long long)modeUpdateReason;
- (long long)modeUpdateSource;
- (id)proto;
- (id)semanticModeIdentifier;
- (id)serialize;
- (void)setMode:(id)arg1;
- (void)setModeSemanticType:(long long)arg1;
- (void)setModeUpdateReason:(unsigned long long)arg1;
- (void)setModeUpdateSource:(long long)arg1;
- (void)setSemanticModeIdentifier:(id)arg1;
- (void)setStarting:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient

- (id)modeSemanticTypeAsString;
- (id)modeUpdateReasonAsString;
- (id)modeUpdateSourceAsString;

@end
