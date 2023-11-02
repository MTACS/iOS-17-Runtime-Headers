
@interface _WBSSiteMetadataToken : NSObject {
    bool  _cancelled;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _cancelledLock;
    NSTimer * _delayTimer;
    bool  _didReceiveResponse;
    bool  _isOneTimeRequest;
    long long  _priority;
    WBSSiteMetadataRequest * _request;
    id /* block */  _responseHandler;
}

@property (getter=isCancelled) bool cancelled;
@property (nonatomic, retain) NSTimer *delayTimer;
@property (nonatomic) bool didReceiveResponse;
@property (nonatomic, readonly) bool isOneTimeRequest;
@property (nonatomic) long long priority;
@property (nonatomic, readonly) WBSSiteMetadataRequest *request;
@property (nonatomic, readonly, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delayTimer;
- (id)description;
- (bool)didReceiveResponse;
- (void)dispatchResponse:(id)arg1;
- (id)initWithOneTimeRequest:(id)arg1 priority:(long long)arg2 responseHandler:(id /* block */)arg3;
- (id)initWithRequest:(id)arg1 priority:(long long)arg2 responseHandler:(id /* block */)arg3;
- (bool)isCancelled;
- (bool)isOneTimeRequest;
- (long long)priority;
- (id)request;
- (id /* block */)responseHandler;
- (void)setCancelled:(bool)arg1;
- (void)setDelayTimer:(id)arg1;
- (void)setDidReceiveResponse:(bool)arg1;
- (void)setPriority:(long long)arg1;

@end
