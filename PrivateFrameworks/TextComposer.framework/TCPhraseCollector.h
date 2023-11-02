
@interface TCPhraseCollector : NSObject {
    NSXPCConnection * _connection;
    bool  _valid;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_initConnection;
- (void)collectSentence:(id)arg1 language:(id)arg2 phraseRanges:(id)arg3;
- (id)connection;
- (id)init;
- (bool)isValid;
- (void)setValid:(bool)arg1;

@end
