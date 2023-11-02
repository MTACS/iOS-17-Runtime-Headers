
@interface _BSActionResponder : NSObject <BSDebugDescriptionProviding> {
    bool  _isOriginator;
    bool  _isOriginatorNull;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_action_encoded;
    bool  _lock_action_invalidated;
    bool  _lock_action_sent;
    bool  _lock_annulled;
    NSArray * _lock_inactivationCallStack;
    bool  _lock_invalidateSendsNotPossible;
    id /* block */  _lock_nullificationHandler;
    bool  _lock_nullificationHandlerIsLegacy;
    NSObject<OS_dispatch_mach> * _lock_nullificationMach;
    NSObject<OS_dispatch_queue> * _lock_nullificationQueue;
    NSObject<OS_dispatch_source> * _lock_originator_replySource;
    id /* block */  _lock_originator_responseHandler;
    NSObject<OS_dispatch_queue> * _lock_originator_responseQueue;
    NSObject<OS_dispatch_source> * _lock_originator_timeoutSource;
    BSActionResponse * _lock_response;
    BSMachPortSendOnceRight * _reply;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
