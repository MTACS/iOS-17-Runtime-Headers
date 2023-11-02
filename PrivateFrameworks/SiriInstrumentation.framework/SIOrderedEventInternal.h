
@interface SIOrderedEventInternal : PBCodable {
    void logicalTimestamp;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  messageUUID;
    void tluEvent;
}

@property (nonatomic, retain) SILogicalTimestampInternal *logicalTimestamp;
@property (nonatomic, copy) NSUUID *messageUUID;
@property (nonatomic, retain) SISchemaTopLevelUnionType *tluEvent;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

+ (id)deserializeFrom:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithLogicalTimestamp:(id)arg1 messageUUID:(id)arg2 tluEvent:(id)arg3;
- (id)initWithLogicalTimestamp:(id)arg1 tluEvent:(id)arg2;
- (id)logicalTimestamp;
- (id)messageUUID;
- (bool)readFrom:(id)arg1;
- (void)setLogicalTimestamp:(id)arg1;
- (void)setMessageUUID:(id)arg1;
- (void)setTluEvent:(id)arg1;
- (id)tluEvent;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AIMLInstrumentationStreams.framework/AIMLInstrumentationStreams

- (id)dictionaryRepresentation;

@end
