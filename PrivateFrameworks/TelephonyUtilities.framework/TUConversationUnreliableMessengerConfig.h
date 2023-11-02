
@interface TUConversationUnreliableMessengerConfig : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _channelStreamMaxQueueSize;
    unsigned long long  _channelStreamMaxTries;
    unsigned long long  _channelStreamRetryIntervalMillis;
    unsigned long long  _egressMessagePayloadMaxSizeBytes;
    unsigned long long  _establishChannelMaxAttempts;
    unsigned long long  _establishChannelRetryIntervalMillis;
    NSData * _idsAliasingSalt;
    unsigned long long  _seqNumBufferSize;
}

@property (nonatomic, readonly) unsigned long long channelStreamMaxQueueSize;
@property (nonatomic, readonly) unsigned long long channelStreamMaxTries;
@property (nonatomic, readonly) unsigned long long channelStreamRetryIntervalMillis;
@property (nonatomic, readonly) unsigned long long egressMessagePayloadMaxSizeBytes;
@property (nonatomic, readonly) unsigned long long establishChannelMaxAttempts;
@property (nonatomic, readonly) unsigned long long establishChannelRetryIntervalMillis;
@property (nonatomic, copy) NSData *idsAliasingSalt;
@property (nonatomic, readonly) unsigned long long seqNumBufferSize;

+ (id)shared;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)channelStreamMaxQueueSize;
- (unsigned long long)channelStreamMaxTries;
- (unsigned long long)channelStreamRetryIntervalMillis;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)egressMessagePayloadMaxSizeBytes;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)establishChannelMaxAttempts;
- (unsigned long long)establishChannelRetryIntervalMillis;
- (unsigned long long)hash;
- (id)idsAliasingSalt;
- (id)initWithCoder:(id)arg1;
- (id)initWithEstablishChannelMaxAttempts:(unsigned long long)arg1 establishChannelRetryIntervalMillis:(unsigned long long)arg2 egressMessagePayloadMaxSizeBytes:(unsigned long long)arg3 channelStreamMaxQueueSize:(unsigned long long)arg4 channelStreamMaxTries:(unsigned long long)arg5 channelStreamRetryIntervalMillis:(unsigned long long)arg6 seqNumBufferSize:(unsigned long long)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConversationUnreliableMessengerConfig:(id)arg1;
- (unsigned long long)seqNumBufferSize;
- (void)setIdsAliasingSalt:(id)arg1;

@end
