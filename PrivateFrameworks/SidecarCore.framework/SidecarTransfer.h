
@interface SidecarTransfer : NSObject {
    <SidecarTransferDelegate> * _delegate;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _requestID;
    SidecarSession * _session;
    _Atomic int  _suspendCount;
    long long  _transferID;
}

@property (nonatomic) <SidecarTransferDelegate> *delegate;
@property (nonatomic, readonly) long long requestID;
@property (nonatomic, readonly) SidecarSession *session;
@property (nonatomic, readonly) long long transferID;

- (void).cxx_destruct;
- (id /* block */)_resumeMessage:(id)arg1;
- (id)dataForType:(id)arg1;
- (id)delegate;
- (id)initWithSession:(id)arg1 requestID:(long long)arg2 transferID:(long long)arg3;
- (long long)requestID;
- (id)session;
- (void)setDelegate:(id)arg1;
- (long long)transferID;

@end
