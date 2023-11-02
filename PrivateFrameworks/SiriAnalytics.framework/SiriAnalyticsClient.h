
@interface SiriAnalyticsClient : NSObject {
    SiriAnalyticsClientMessageStream * _defaultMessageStream;
}

@property (nonatomic, readonly) SiriAnalyticsClientMessageStream *defaultMessageStream;

- (void).cxx_destruct;
- (bool)clientMessageStream:(id)arg1 shouldEmitMessage:(id)arg2 timestamp:(unsigned long long)arg3 isolatedStreamUUID:(id)arg4;
- (id)defaultMessageStream;
- (void)setDefaultMessageStream:(id)arg1;

@end
