
@interface ICASFastSyncMessageData : NSObject <AADataEventType> {
    NSNumber * _avgMessageSizeInBytes;
    NSNumber * _countOfMessagesReceived;
    NSNumber * _countOfMessagesSent;
    NSNumber * _maxMessageSizeInBytes;
}

@property (nonatomic, readonly) NSNumber *avgMessageSizeInBytes;
@property (nonatomic, readonly) NSNumber *countOfMessagesReceived;
@property (nonatomic, readonly) NSNumber *countOfMessagesSent;
@property (nonatomic, readonly) NSNumber *maxMessageSizeInBytes;

+ (id)dataName;

- (void).cxx_destruct;
- (id)avgMessageSizeInBytes;
- (id)countOfMessagesReceived;
- (id)countOfMessagesSent;
- (id)initWithCountOfMessagesSent:(id)arg1 countOfMessagesReceived:(id)arg2 avgMessageSizeInBytes:(id)arg3 maxMessageSizeInBytes:(id)arg4;
- (id)maxMessageSizeInBytes;
- (id)toDict;

@end
