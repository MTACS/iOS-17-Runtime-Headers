
@interface APSOutgoingMessage : APSMessage {
    bool  _ackReceived;
}

@property (nonatomic) bool ackReceived;
@property (nonatomic) unsigned long long ackTimestamp;
@property (getter=isCritical, nonatomic) bool critical;
@property (nonatomic) unsigned long long payloadFormat;
@property (nonatomic) unsigned long long payloadLength;
@property (nonatomic) bool sendRetried;
@property (nonatomic) unsigned long long timeout;

- (unsigned long long)_effectiveSendTimeout;
- (bool)ackReceived;
- (unsigned long long)ackTimestamp;
- (id)channelID;
- (id)eagernessTimeoutTime;
- (bool)hasTimedOut;
- (bool)isCritical;
- (bool)isEager;
- (unsigned long long)messageID;
- (id)originator;
- (unsigned long long)payloadFormat;
- (unsigned long long)payloadLength;
- (long long)priority;
- (unsigned int)pushFlags;
- (unsigned long long)pushType;
- (id)rawTimeoutTime;
- (id)sendInterfaceIdentifier;
- (bool)sendRetried;
- (id)sendTimeoutTime;
- (id)sentTimestamp;
- (void)setAckReceived:(bool)arg1;
- (void)setAckTimestamp:(unsigned long long)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setChannelID:(id)arg1;
- (void)setCritical:(bool)arg1;
- (void)setMessageID:(unsigned long long)arg1;
- (void)setOriginator:(id)arg1;
- (void)setPayloadFormat:(unsigned long long)arg1;
- (void)setPayloadLength:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;
- (void)setPushFlags:(unsigned int)arg1;
- (void)setPushType:(unsigned long long)arg1;
- (void)setSendInterfaceIdentifier:(id)arg1;
- (void)setSendRetried:(bool)arg1;
- (void)setSent:(bool)arg1;
- (void)setSentTimestamp:(id)arg1;
- (void)setTimedOut:(bool)arg1;
- (void)setTimeout:(unsigned long long)arg1;
- (void)setTimestamp:(id)arg1;
- (unsigned long long)timeout;
- (id)timestamp;
- (bool)wasCancelled;
- (bool)wasSent;

@end
