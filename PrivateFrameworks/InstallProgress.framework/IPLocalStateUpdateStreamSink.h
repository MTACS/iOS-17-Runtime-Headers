
@interface IPLocalStateUpdateStreamSink : NSObject <IPStateUpdateStreamSink> {
    NSMutableArray * _queuedUpdateMessages;
    bool  _resumed;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _resumptionLock;
    IPLocalStateUpdateStream * _weakStream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithUpdateStream:(id)arg1;
- (void)resume;
- (void)sendUpdateMessage:(id)arg1;

@end
