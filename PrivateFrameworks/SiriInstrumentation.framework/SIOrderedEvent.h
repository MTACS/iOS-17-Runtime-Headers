
@interface SIOrderedEvent : NSObject <BMStoreData> {
    SIOrderedEventInternal * _underlying;
    SILogicalTimestamp * _underlyingTimestamp;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SILogicalTimestamp *logicalTimestamp;
@property (nonatomic, readonly) NSUUID *messageUUID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SISchemaTopLevelUnionType *topLevelUnionType;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

+ (id)deserializeFromData:(id)arg1;

- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)arg1;
- (id)initWithInternalType:(id)arg1;
- (id)initWithTimestamp:(id)arg1 messageUUID:(id)arg2 topLevelUnionType:(id)arg3;
- (id)logicalTimestamp;
- (id)messageUUID;
- (id)serialize;
- (id)topLevelUnionType;

// Image: /System/Library/PrivateFrameworks/AIMLInstrumentationStreams.framework/AIMLInstrumentationStreams

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (unsigned int)dataVersion;

// Image: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (unsigned int)dataVersion;

@end
