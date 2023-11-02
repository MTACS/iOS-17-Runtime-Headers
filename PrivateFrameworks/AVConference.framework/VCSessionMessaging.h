
@interface VCSessionMessaging : NSObject <VCControlChannelDelegate> {
    id  controlChannelWeak;
    NSMutableDictionary * participants;
    NSMutableDictionary * topics;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addParticipant:(id)arg1 controlChannelProtocolVersion:(int)arg2;
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(bool)arg3 receiveHandler:(id /* block */)arg4;
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(bool)arg3 requireReliable:(bool)arg4 sendMessageDictionaryCompletionHandler:(id /* block */)arg5 receiveMessageDictionaryHandler:(id /* block */)arg6;
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(bool)arg3 sendCompletionHandler:(id /* block */)arg4 receiveHandler:(id /* block */)arg5;
- (void)addTopic:(id)arg1 associatedStrings:(id)arg2 allowConcurrent:(bool)arg3 sendMessageDictionaryCompletionHandler:(id /* block */)arg4 receiveMessageDictionaryHandler:(id /* block */)arg5;
- (id)allocMessageFromPayload:(id)arg1 forTopic:(id)arg2 participantID:(id)arg3;
- (void)controlChannel:(id)arg1 clearTransactionCacheForParticipant:(id)arg2;
- (void)controlChannel:(id)arg1 receivedMessage:(id)arg2 transactionID:(unsigned int)arg3 fromParticipant:(id)arg4;
- (void)controlChannel:(id)arg1 sendReliableMessage:(id)arg2 didSucceed:(bool)arg3 toParticipant:(id)arg4;
- (void)controlChannel:(id)arg1 topic:(id)arg2 payload:(id)arg3 transactionID:(unsigned int)arg4 fromParticipant:(id)arg5;
- (void)dealloc;
- (id)initWithControlChannel:(id)arg1 remoteVersion:(id)arg2;
- (id)newDictionaryFromUnpackedMessage:(id)arg1;
- (id)newDictionaryFromUnpackedMessage:(id)arg1 forTopic:(id)arg2 controlChannelVersion:(int)arg3;
- (id)newDictionaryFromUnpackedMessageV2:(id)arg1;
- (id)newDictionaryFromUnpackedMomentsMessage:(id)arg1;
- (id)newPackedMessageFromDictionary:(id)arg1;
- (id)newPackedMessageFromDictionary:(id)arg1 forTopic:(id)arg2 controlChannelVersion:(int)arg3;
- (id)newPackedMessageFromDictionaryV2:(id)arg1;
- (id)newPackedMessageFromMomentsDictionary:(id)arg1;
- (void)searchMatchingTopic:(id)arg1 payload:(id)arg2 transactionID:(unsigned int)arg3 fromParticipant:(id)arg4;
- (void)sendMessage:(id)arg1 withTopic:(id)arg2;
- (void)sendMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;
- (void)sendMessageDictionary:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3;
- (bool)sendReliableMessage:(id)arg1 withTopic:(id)arg2 participantID:(unsigned long long)arg3 withOptions:(id)arg4 completion:(id /* block */)arg5;
- (void)startMessaging;
- (void)stopMessaging;

@end
