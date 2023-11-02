
@interface CATActiveServiceConnectionIDSMessage : NSObject <CATIDSMessage> {
    NSUUID * _connectionIdentifier;
    <CATActiveIDSServiceConnectionMessageContent> * _content;
    NSNumber * _receivedSequenceNumber;
}

@property (nonatomic, readonly) NSUUID *connectionIdentifier;
@property (nonatomic, readonly) <CATActiveIDSServiceConnectionMessageContent> *content;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) long long messageType;
@property (nonatomic, readonly) NSNumber *receivedSequenceNumber;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)connectionIdentifier;
- (id)content;
- (id)dictionaryValue;
- (id)initWithConnectionIdentifier:(id)arg1 receivedSequenceNumber:(id)arg2 content:(id)arg3;
- (long long)messageType;
- (id)receivedSequenceNumber;

@end
