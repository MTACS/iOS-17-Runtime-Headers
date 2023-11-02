
@interface IPLocalStateUpdateStreamSource : NSObject <IPStateUpdateStreamSource> {
    <IPStateUpdateStreamSourceDelegate> * _delegate;
    bool  _resumed;
    IPLocalStateUpdateStream * _weakStream;
}

@property (readonly, copy) NSString *debugDescription;
@property <IPStateUpdateStreamSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithUpdateStream:(id)arg1;
- (void)resume;
- (void)setDelegate:(id)arg1;
- (void)stream:(id)arg1 receiveMessage:(id)arg2;

@end
