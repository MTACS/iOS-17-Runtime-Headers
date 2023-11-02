
@interface SiriAnalyticsTimeAnnotatedMessage : NSObject {
    SISchemaTopLevelUnionType * _message;
    NSUUID * _messageUUID;
    NSUUID * _streamUUID;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) SISchemaTopLevelUnionType *message;
@property (nonatomic, copy) NSUUID *messageUUID;
@property (nonatomic, copy) NSUUID *streamUUID;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)message;
- (id)messageUUID;
- (void)setMessage:(id)arg1;
- (void)setMessageUUID:(id)arg1;
- (void)setStreamUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)streamUUID;
- (unsigned long long)timestamp;

@end
