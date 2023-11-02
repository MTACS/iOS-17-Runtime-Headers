
@interface ACHXPCScheduler : NSObject {
    NSDate * _lastSuccessfulRunDate;
    NSString * _lastSuccessfulRunDateKey;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _name;
    id /* block */  _performHandler;
}

@property (nonatomic, retain) NSDate *lastSuccessfulRunDate;
@property (nonatomic, readonly, copy) NSString *lastSuccessfulRunDateKey;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) id /* block */ performHandler;

- (void).cxx_destruct;
- (void)_handleCompletionResult:(bool)arg1 error:(id)arg2 activity:(id)arg3;
- (void)_handleXPCActivityCallback:(id)arg1;
- (void)_performActivity:(id)arg1;
- (void)_registerActivity;
- (id)initWithName:(id)arg1 performHandler:(id /* block */)arg2;
- (id)lastSuccessfulRunDate;
- (id)lastSuccessfulRunDateKey;
- (id)name;
- (id /* block */)performHandler;
- (void)setLastSuccessfulRunDate:(id)arg1;
- (void)synthesizeActivityFireWithCompletion:(id /* block */)arg1;

@end
