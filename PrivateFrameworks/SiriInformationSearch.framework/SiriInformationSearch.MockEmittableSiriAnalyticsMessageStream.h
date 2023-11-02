
@interface SiriInformationSearch.MockEmittableSiriAnalyticsMessageStream : NSObject <SiriAnalyticsMessageStream> {
    void emittedMessages;
    void queue;
}

- (void).cxx_destruct;
- (void)barrierWithCompletion:(id /* block */)arg1;
- (void)emitMessage:(id)arg1;
- (void)emitMessage:(id)arg1 timestamp:(unsigned long long)arg2;
- (void)enqueueLargeMessageObjectFromPath:(id)arg1 assetIdentifier:(id)arg2 messageMetadata:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
- (void)resolvePartialMessage:(id)arg1;
- (void)resolvePartialMessage:(id)arg1 timestamp:(unsigned long long)arg2;

@end
