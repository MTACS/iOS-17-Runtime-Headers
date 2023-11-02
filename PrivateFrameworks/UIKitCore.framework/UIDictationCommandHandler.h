
@interface UIDictationCommandHandler : NSObject {
    SRCSCommandRecognitionSystem * _cmdRecSystem;
    SRCSCommandRecognizer * _cmdRecognizer;
}

@property (nonatomic, retain) SRCSCommandRecognitionSystem *cmdRecSystem;
@property (nonatomic, retain) SRCSCommandRecognizer *cmdRecognizer;

- (void).cxx_destruct;
- (id)cmdRecSystem;
- (id)cmdRecognizer;
- (void)recognizeCommandWithPhrases:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)registerCommandIdentifiers:(id)arg1 locale:(id)arg2;
- (void)setCmdRecSystem:(id)arg1;
- (void)setCmdRecognizer:(id)arg1;

@end
