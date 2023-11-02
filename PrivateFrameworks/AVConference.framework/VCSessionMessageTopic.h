
@interface VCSessionMessageTopic : NSObject {
    bool  allowConcurrent;
    NSArray * associatedStrings;
    VCControlChannel * controlChannel;
    NSObject<OS_dispatch_queue> * inMessageQueue;
    bool  isSendingEnabled;
    long long  latestOutgoingMessageIndex;
    NSObject<OS_dispatch_queue> * outMessageQueue;
    id /* block */  receiveMessageBlock;
    id /* block */  receiveMessageDictionaryBlock;
    bool  requireReliable;
    id /* block */  sendMessageCompletionBlock;
    id /* block */  sendMessageDataCompletionBlock;
    bool  shouldEncodeTopicKeyInMessage;
    NSString * topicKey;
    NSMutableDictionary * transactionCache;
}

@property (setter=setIsSendingEnabled:, nonatomic) bool isSendingEnabled;
@property (nonatomic, readonly) NSString *topicKey;

- (void)clearTransactionCacheForParticipant:(id)arg1;
- (void)dealloc;
- (int)expectedMessageType;
- (void)handleSendMessageDidSucceed:(bool)arg1 message:(id)arg2 participantID:(id)arg3;
- (id)initWithTopicKey:(id)arg1 strings:(id)arg2 allowConcurrent:(bool)arg3 controlChannel:(id)arg4 sendCompletionHandler:(id /* block */)arg5 receiveHandler:(id /* block */)arg6;
- (id)initWithTopicKey:(id)arg1 strings:(id)arg2 allowConcurrent:(bool)arg3 requireReliable:(bool)arg4 controlChannel:(id)arg5 sendCompletionHandler:(id /* block */)arg6 receiveHandler:(id /* block */)arg7 sendMessageDataCompletionHandler:(id /* block */)arg8 receiveMessageDictionaryHandler:(id /* block */)arg9;
- (id)initWithTopicKey:(id)arg1 strings:(id)arg2 allowConcurrent:(bool)arg3 requireReliable:(bool)arg4 controlChannel:(id)arg5 sendMessageDataCompletionHandler:(id /* block */)arg6 receiveMessageDictionaryHandler:(id /* block */)arg7;
- (bool)isDuplicateMessageID:(id)arg1 messageHistory:(id)arg2 participantID:(id)arg3;
- (bool)isPayloadAssociated:(id)arg1;
- (bool)isSendingEnabled;
- (id)messageForCommand:(id)arg1;
- (void)passMessage:(id)arg1 sequence:(int)arg2 fromParticipant:(id)arg3;
- (void)purgeExpiredEntries:(double)arg1 messageHistory:(id)arg2 participantID:(id)arg3;
- (void)sendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (void)sendMessage:(id)arg1 participantID:(unsigned long long)arg2 withSequence:(long long)arg3 numRetries:(long long)arg4;
- (bool)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (void)setIsSendingEnabled:(bool)arg1;
- (id)topicKey;

@end
