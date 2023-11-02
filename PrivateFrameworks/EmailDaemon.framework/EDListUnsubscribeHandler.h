
@interface EDListUnsubscribeHandler : NSObject {
    EMListUnsubscribeDetector * _detector;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _detectorLock;
    <EFScheduler> * _scheduler;
}

@property (nonatomic, readonly) EMListUnsubscribeDetector *detector;
@property (nonatomic, readonly) <EFScheduler> *scheduler;

+ (id)log;

- (void).cxx_destruct;
- (id)detector;
- (void)ignoreWithCommand:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)scheduler;
- (void)unsubscribeHTMLWithCommand:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)unsubscribeMailtoWithCommand:(id)arg1 completion:(id /* block */)arg2;
- (void)unsubscribeWithCommand:(id)arg1 completion:(id /* block */)arg2;

@end
