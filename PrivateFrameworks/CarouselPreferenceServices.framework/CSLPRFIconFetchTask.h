
@interface CSLPRFIconFetchTask : NSObject <BSInvalidatable> {
    id /* block */  _completion;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)completeWithImage:(id)arg1 error:(id)arg2;
- (id /* block */)completion;
- (id)init;
- (void)invalidate;
- (void)setCompletion:(id /* block */)arg1;

@end
