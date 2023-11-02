
@interface AXLTTestTranscriber : NSObject <AXLTTranscriberProtocol> {
    <AXLTTranscriberDelegateProtocol> * _delegate;
    NSObject<OS_dispatch_source> * _dispatchSource;
    bool  _isTranscribing;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXLTTranscriberDelegateProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *dispatchSource;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isTranscribing;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)dispatchSource;
- (id)initWithDelegate:(id)arg1;
- (bool)isTranscribing;
- (void)resetTranscription;
- (void)setDelegate:(id)arg1;
- (void)setDispatchSource:(id)arg1;
- (void)setIsTranscribing:(bool)arg1;
- (bool)startTranscription:(id*)arg1;
- (bool)stopTranscription:(id*)arg1;

@end
